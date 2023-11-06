#pragma once

#include "antlr4-runtime.h"
#include "FrontEnd/Generated/Python3ParserBaseListener.h"
#include "Common/TypeDef.h"

class Python3Listener : public antlrpython3::Python3ParserBaseListener {
public:
    std::set<std::string> definedFunctions;
    std::set<FunctionInfo> calledFunctions;

    void enterFuncdef(antlrpython3::Python3Parser::FuncdefContext *context) override {
        definedFunctions.insert(context->name()->getText());

        // 获取参数列表上下文
        antlrpython3::Python3Parser::ParametersContext *paramsCtx = context->parameters();

        // 如果存在参数
        if (paramsCtx) {
            antlrpython3::Python3Parser::TypedargslistContext *argContext = paramsCtx->typedargslist();

            if (argContext) {
                // 获取每个参数的上下文
                std::vector<antlrpython3::Python3Parser::TfpdefContext *> tfpdefs = argContext->tfpdef();
                for (auto tfpdef : tfpdefs) {
                    if (tfpdef) {
                        std::cout << "Parameter: " << tfpdef->getText() << std::endl;
                    }
                }
            }
        }

        if (paramsCtx) {
            antlrpython3::Python3Parser::TypedargslistContext *argContext = paramsCtx->typedargslist();

            if (argContext) {
                // Extract all tfpdef (parameters) and their associated type hints
                std::vector<antlrpython3::Python3Parser::TfpdefContext *> tfpdefs = argContext->tfpdef();

                for (size_t i = 0; i < tfpdefs.size(); i++) {
                    auto tfpdef = tfpdefs[i];
                    if (tfpdef) {
                        std::string paramName = tfpdef->name()->getText();

                        antlrpython3::Python3Parser::TestContext* typeHint = tfpdef->test();
                        if (typeHint) {
                            std::string paramType = typeHint->getText();

                            // Check types as per your requirements
                            if (i == 0 && paramType != "str") {
                                std::cout << "Error: First parameter should be of type 'str'" << std::endl;
                            } else if (i == 1 && paramType != "int") {
                                std::cout << "Error: Second parameter should be of type 'int'" << std::endl;
                            }
                        } else {
                            // Handle no type hint
                            std::cout << "Parameter " << paramName << " has no type hint." << std::endl;
                        }
                    }
                }
            }
        }

        // Extract the return type hint
        antlrpython3::Python3Parser::TestContext* returnTypeHint = context->test();
        if (returnTypeHint) {
            std::string returnType = returnTypeHint->getText();

            // Check the return type as per your requirements
            if (returnType != "int") {
                std::cout << "Error: Return type should be 'int'" << std::endl;
            }
        } else {
            std::cout << "Function has no return type hint." << std::endl;
        }
    }

    void enterTrailer(antlrpython3::Python3Parser::TrailerContext *context) override {
        if (context->OPEN_PAREN()) {
            // This is a function call
            auto parent = dynamic_cast<antlrpython3::Python3Parser::Atom_exprContext*>(context->parent);
            if (parent) {
                auto token = context->getStart();
                size_t start = token->getCharPositionInLine();
                size_t stop = start + token->getText().length() - 1;

                calledFunctions.insert(FunctionInfo(
                        parent->atom()->getText(),
                        token->getLine(),
                        start,
                        stop
                ));
            }
        }
    }
};
