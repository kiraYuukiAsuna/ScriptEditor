#include "SyntaxErrorListener.h"

void CustomErrorListener::syntaxError(antlr4::Recognizer *recognizer, antlr4::Token *offendingSymbol, size_t line,
                                      size_t charPositionInLine, const std::string &msg, std::exception_ptr e)  {
    int startLine = offendingSymbol->getLine();
    int startColumn = offendingSymbol->getCharPositionInLine();
    int stopLine = offendingSymbol->getLine();
    int stopColumn = offendingSymbol->getCharPositionInLine();

    size_t start = charPositionInLine;
    size_t stop = start + offendingSymbol->getText().length() - 1;

    std::cerr << "Error at line " << line << ", from position " << start << " to " << stop << ": " << msg << std::endl;

    m_ErrorInfo.push_back(ErrorInfo{static_cast<int>(startLine),static_cast<int>(stopLine),
                                    static_cast<int>(startColumn), static_cast<int>(stopColumn), msg});
}

std::vector<ErrorInfo> &CustomErrorListener::getErrorInfo() {
    return m_ErrorInfo;
}
