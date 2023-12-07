#pragma once

#include "antlr4-runtime.h"
#include "Common/TypeDef.h"

class BackendAnalyzer;

class CustomErrorListener : public antlr4::BaseErrorListener {
public:
    void syntaxError(antlr4::Recognizer *recognizer, antlr4::Token *offendingSymbol,
                     size_t line, size_t charPositionInLine,
                     const std::string &msg, std::exception_ptr e) override;

    std::vector<ErrorInfo>& getErrorInfo();

private:
    std::vector<ErrorInfo> m_ErrorInfo;
};
