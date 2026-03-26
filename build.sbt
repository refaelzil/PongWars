val scala3Version = "3.8.1"
val dfhdlVersion  = "0.17.0"

lazy val root = project
  .in(file("."))
  .settings(
    name    := "dfhdl_template",
    version := "0.1.0",
    scalacOptions ++= Seq(
      "-deprecation", "-encoding", "UTF-8", "-feature", "-language:strictEquality"
    ),
    scalaVersion := scala3Version,
    addCompilerPlugin(
      "io.github.dfianthdl" % "dfhdl-plugin" % dfhdlVersion cross CrossVersion.full
    ),
    libraryDependencies += "io.github.dfianthdl" % "dfhdl_3" % dfhdlVersion
  )
