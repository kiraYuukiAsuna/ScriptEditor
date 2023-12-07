rmdir /s /q Generated
mkdir Generated
..\antlr_tool\Run.bat -Dlanguage=Cpp -listener -visitor -o .\Generated -package Keyword .\antlr4\KeywordGrammar.g4 -no-listener