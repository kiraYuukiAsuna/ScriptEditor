@ECHO OFF
SET CLASSPATH=.;C:\Users\KiraY\Desktop\ScriptEditor\antlr_tool\antlr-4.13.1-complete.jar;%CLASSPATH%
SET TEST_CURRENT_DIR=%CLASSPATH:.;=%
if "%TEST_CURRENT_DIR%" == "%CLASSPATH%" ( SET CLASSPATH=.;%CLASSPATH% )
@ECHO ON

@REM java org.antlr.v4.gui.TestRig %*

java org.antlr.v4.Tool %*