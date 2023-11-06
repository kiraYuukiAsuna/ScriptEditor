#include "SyntaxErrorListener.h"

void CustomErrorListener::syntaxError(antlr4::Recognizer *recognizer, antlr4::Token *offendingSymbol, size_t line,
                                      size_t charPositionInLine, const std::string &msg, std::exception_ptr e)  {
    size_t start = charPositionInLine;
    size_t stop = start + offendingSymbol->getText().length() - 1;

    std::cerr << "Error at line " << line << ", from position " << start << " to " << stop << ": " << msg << std::endl;

    m_ErrorInfo.push_back(ErrorInfo{static_cast<int>(line), static_cast<int>(start), static_cast<int>(stop), msg});
}

std::vector<ErrorInfo> &CustomErrorListener::getErrorInfo() {
    return m_ErrorInfo;
}
