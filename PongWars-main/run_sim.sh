#!/bin/bash
export DIST=$HOME/vga-monitor-0.4.0-linux-x86_64
export LD_LIBRARY_PATH=$DIST:$LD_LIBRARY_PATH

fuser -k 5000/tcp 2>/dev/null
sleep 1

ffmpeg -y -f rawvideo -pixel_format rgb24 -video_size 640x480 \
    -i 'tcp://127.0.0.1:5000?listen=1' \
    output.mp4 &

FFMPEG_PID=$!

echo "Waiting for ffmpeg to be ready..."
while ! ss -tlnp | grep -q ':5000'; do
    sleep 0.1
done

echo "Starting sim... Press Ctrl+C to stop."
VGA_MONITOR_STREAM=127.0.0.1:5000 ./obj_dir/Vtb_top

wait $FFMPEG_PID
echo "Done. output.mp4 saved."