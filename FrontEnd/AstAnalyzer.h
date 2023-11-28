#pragma once

#include "antlr4-runtime.h"
#include "Common/TypeDef.h"
#include "Generated/Python3ParserBaseVisitor.h"

class Python3Visitor : public antlrpython3::Python3ParserBaseVisitor {
public:
    std::set<std::string> definedFunctions;
    std::set<FunctionInfo> calledFunctions;

    // antlrcpp::Any visitFuncdef(antlrpython3::Python3Parser::FuncdefContext *context) override {
    //     definedFunctions.insert(context->name()->getText());
    //
    //     // Process parameters
    //     auto paramsCtx = context->parameters();
    //     if (paramsCtx) {
    //         auto argContext = paramsCtx->typedargslist();
    //         if (argContext) {
    //             for (auto tfpdef : argContext->tfpdef()) {
    //                 if (tfpdef) {
    //                     std::cout << "Parameter: " << tfpdef->getText() << std::endl;
    //                 }
    //             }
    //         }
    //     }
    //
    //     // Process parameter type hints
    //     if (paramsCtx) {
    //         auto argContext = paramsCtx->typedargslist();
    //         if (argContext) {
    //             for (size_t i = 0; i < argContext->tfpdef().size(); i++) {
    //                 auto tfpdef = argContext->tfpdef()[i];
    //                 if (tfpdef) {
    //                     std::string paramName = tfpdef->name()->getText();
    //                     auto typeHint = tfpdef->test();
    //                     if (typeHint) {
    //                         std::string paramType = typeHint->getText();
    //                         // Check types as per your requirements
    //                         if (i == 0 && paramType != "str") {
    //                             std::cout << "Error: First parameter should be of type 'str'" << std::endl;
    //                         } else if (i == 1 && paramType != "int") {
    //                             std::cout << "Error: Second parameter should be of type 'int'" << std::endl;
    //                         }
    //                     } else {
    //                         // Handle no type hint
    //                         std::cout << "Parameter " << paramName << " has no type hint." << std::endl;
    //                     }
    //                 }
    //             }
    //         }
    //     }
    //
    //     // Process return type hint
    //     auto returnTypeHint = context->test();
    //     if (returnTypeHint) {
    //         std::string returnType = returnTypeHint->getText();
    //         // Check the return type as per your requirements
    //         if (returnType != "int") {
    //             std::cout << "Error: Return type should be 'int'" << std::endl;
    //         }
    //     } else {
    //         std::cout << "Function has no return type hint." << std::endl;
    //     }
    //
    //     return visitChildren(context);
    // }

    antlrcpp::Any visitTrailer(antlrpython3::Python3Parser::TrailerContext* context) override {
        if (context->DOT()) {

        }
        else {
            // Process function call
            auto parent = dynamic_cast<antlrpython3::Python3Parser::Atom_exprContext *>(context->parent);

            if (parent) {
                std::cout<<parent->atom()->getText()<<"\n";
                for(auto& a : parent->trailer()) {
                    if(a->DOT()) {
                        auto* nameNode = a->name();
                        if (nameNode) {
                            std::string methodName = nameNode->getText();
                            std::cout << "Method or attribute name: " << methodName << "(";
                        }

                        auto arglistContext = a->arglist();
                        if (arglistContext) {
                            // Process arguments if needed
                            for (size_t i = 0; i < arglistContext->argument().size(); ++i) {
                                auto arg = arglistContext->argument()[i];
                                std::cout << arg->getText();

                                // Print a comma if there are more arguments
                                if (i < arglistContext->argument().size() - 1) {
                                    std::cout << ", ";
                                }
                            }
                        }
                        std::cout << ")\n" << std::endl;
                    }else if(a->OPEN_PAREN()){
                        auto arglistContext = a->arglist();
                        if (arglistContext) {
                            // Process arguments if needed
                            for (size_t i = 0; i < arglistContext->argument().size(); ++i) {
                                auto arg = arglistContext->argument()[i];
                                std::cout << arg->getText();

                                // Print a comma if there are more arguments
                                if (i < arglistContext->argument().size() - 1) {
                                    std::cout << ", ";
                                }
                            }
                        }

                        auto token = context->getStart();
                        size_t start = token->getCharPositionInLine();
                        size_t stop = start + token->getText().length() - 1;

                        calledFunctions.insert(FunctionInfo(
                            a->getText(),
                            token->getLine(),
                            start,
                            stop
                        ));
                    }
                }

            }
        }

        return visitChildren(context);
    }
};
