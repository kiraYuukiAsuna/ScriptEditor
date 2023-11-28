#pragma once

#include "antlr4-runtime.h"
#include "FrontEnd/Generated/Python3Lexer.h"
#include "FrontEnd/Generated/Python3Parser.h"
#include "FrontEnd/Generated/Python3ParserBaseListener.h"
#include "AstAnalyzer.h"
#include "SyntaxErrorListener.h"
#include "Common/TypeDef.h"
#include <set>
#include <iostream>

using namespace antlr4;

class AstAnalysis {
public:
    void clear(){
        m_Document.clear();
        m_ErrorInfo.clear();
    }

    void reloadDocument(const std::string& document){
        m_Document = document;
    }

    void analysis(){
        ANTLRInputStream input(m_Document);
        antlrpython3::Python3Lexer lexer(&input);

        CommonTokenStream tokens(&lexer);

        tokens.setTokenSource(&lexer);
        tokens.fill();
        // for (auto token : tokens.getTokens()) {
        //     std::cout << token->toString() << std::endl;
        // }

        antlrpython3::Python3Parser parser(&tokens);

        // Use our custom error listener
        CustomErrorListener errorListener;
        parser.removeErrorListeners();  // remove the default listener
        parser.addErrorListener(&errorListener);

        tree::ParseTree* parseTree;
        parseTree = parser.file_input();

        m_ErrorInfo.insert(m_ErrorInfo.end(), errorListener.getErrorInfo().begin(), errorListener.getErrorInfo().end());

        // std::cout << parseTree->toStringTree(&parser) << std::endl << std::endl;

        Python3Visitor visitor;
        visitor.visit(parseTree);

        for (const auto& funcInfo : visitor.calledFunctions) {
            if (visitor.definedFunctions.find(funcInfo.name) == visitor.definedFunctions.end()) {
                auto errorMessage = "Undefined function: " + funcInfo.name +
                        " at line " + std::to_string(funcInfo.line) +
                        ", position " + std::to_string(funcInfo.start) +
                        " to " +std::to_string(funcInfo.end) + "\n";

                m_ErrorInfo.push_back(ErrorInfo{static_cast<int>(funcInfo.line), static_cast<int>(funcInfo.start), static_cast<int>(funcInfo.end), errorMessage});

                std::cout << errorMessage;

            }
        }
    }

    std::vector<ErrorInfo>& getErrorInfo(){
        return m_ErrorInfo;
    }


private:
    std::string m_Document;

    std::vector<ErrorInfo> m_ErrorInfo;

};
