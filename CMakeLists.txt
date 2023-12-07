cmake_minimum_required(VERSION 3.26)
project(ScriptEditor)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_PREFIX_PATH C:/Qt/6.6.1/msvc2019_64)

find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

include_directories(
        ThirdParty/antlr4/include/antlr4-runtime
        ThirdParty/QScintilla/include
        ThirdParty/yamlcpp/include
)

link_directories(
        ThirdParty/antlr4/lib/debug
        ThirdParty/QScintilla/lib/debug
        ThirdParty/yamlcpp/lib/windows/debug
)

set(PROJECT_HEADER
        Backend/Generated/antlr4/KeywordGrammarLexer.h
        Backend/Generated/antlr4/KeywordGrammarParser.h
        Backend/Generated/antlr4/KeywordGrammarBaseVisitor.h
        Backend/Generated/antlr4/KeywordGrammarBaseVisitor.h

        Editor/CodeEditor.h
        Backend/BackendAnalyzer.h
        Backend/AstAnalyzer.h
        Backend/SyntaxErrorListener.h
        Editor/KeywordDefination.h

)

set(PROJECT_SOURCE
        main.cpp

        Backend/Generated/antlr4/KeywordGrammarLexer.cpp
        Backend/Generated/antlr4/KeywordGrammarParser.cpp
        Backend/Generated/antlr4/KeywordGrammarBaseVisitor.cpp
        Backend/Generated/antlr4/KeywordGrammarBaseVisitor.cpp

        Editor/CodeEditor.cpp
        Backend/BackendAnalyzer.cpp
        Backend/AstAnalyzer.cpp
        Backend/SyntaxErrorListener.cpp
        Editor/KeywordDefination.cpp
)

add_executable(ScriptEditor ${PROJECT_HEADER} ${PROJECT_SOURCE})

target_link_libraries(ScriptEditor
        PRIVATE
        antlr4-runtime.lib
        qscintilla2_qt6d.lib
        Qt::Core
        Qt::Gui
        Qt::Widgets
        yaml-cppd.lib
)
