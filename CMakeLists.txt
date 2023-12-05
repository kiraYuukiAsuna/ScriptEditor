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
        FrontEnd/Generated/Python3Lexer.h
        FrontEnd/Generated/Python3LexerBase.h
        FrontEnd/Generated/Python3Parser.h
        FrontEnd/Generated/Python3ParserBase.h
        FrontEnd/Generated/Python3ParserBaseListener.h
        FrontEnd/Generated/Python3ParserBaseVisitor.h
        FrontEnd/Generated/Python3ParserListener.h
        FrontEnd/Generated/Python3ParserVisitor.h

        Editor/CodeEditor.h
        FrontEnd/AstAnalysis.h
        FrontEnd/AstAnalyzer.h
        FrontEnd/SyntaxErrorListener.h
        Editor/KeywordDefination.h

)

set(PROJECT_SOURCE
        main.cpp

        FrontEnd/Generated/Python3Lexer.cpp
        FrontEnd/Generated/Python3LexerBase.cpp
        FrontEnd/Generated/Python3Parser.cpp
        FrontEnd/Generated/Python3ParserBase.cpp
        FrontEnd/Generated/Python3ParserBaseListener.cpp
        FrontEnd/Generated/Python3ParserBaseVisitor.cpp
        FrontEnd/Generated/Python3ParserListener.cpp
        FrontEnd/Generated/Python3ParserVisitor.cpp

        Editor/CodeEditor.cpp
        FrontEnd/AstAnalysis.cpp
        FrontEnd/AstAnalyzer.cpp
        FrontEnd/SyntaxErrorListener.cpp
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
