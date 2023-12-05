#pragma once

#include "antlr4-runtime.h"
#include "Generated/antlr4/KeywordGrammarBaseVisitor.h"
#include "Editor/KeywordDefination.h"
#include "Common/TypeDef.h"

struct ValTypeMetaInfo {
    std::string name;
    std::string type;
};

struct ValTypeMetaExInfo {
    ValTypeMetaInfo valTypeMetaInfo;
    SEPosition sePosition;
};

class KeywordGrammarCustomVisitor : public Keyword::KeywordGrammarBaseVisitor {
public:
    std::vector<KeywordObjectTypeExInfo> DefinedObject;
    std::vector<std::pair<std::string, KeywordMethodExInfo>> DefinedObjMethod;
    std::vector<KeywordMethodExInfo> DefinedMethod;
    std::vector<ValTypeMetaExInfo> DefinedVal;
    std::vector<std::tuple<std::string, std::string, SEPosition>> ValAssignment;
    std::vector<std::tuple<std::string, std::vector<KeywordParameterExInfo>,SEPosition>> MethodCall;
    std::vector<std::tuple<std::pair<std::string, std::string>, std::vector<KeywordParameterExInfo>,SEPosition>> ObjMethodCall;


    std::vector<ErrorInfo> ErrorInfos;

    std::any visitObjectdef(Keyword::KeywordGrammarParser::ObjectdefContext *ctx) override {
        antlr4::Token *startToken = ctx->getStart();
        antlr4::Token *stopToken = ctx->getStop();

        int startLine = startToken->getLine();
        int startColumn = startToken->getCharPositionInLine();
        int stopLine = stopToken->getLine();
        int stopColumn = stopToken->getCharPositionInLine();

//        std::cout << "Start position: Line " << startLine << ", Column " << startColumn << std::endl;
//        std::cout << "Stop position: Line " << stopLine << ", Column " << stopColumn << std::endl;
        std::string objectIdentifier = ctx->objectIdentifier()->getText();

        DefinedObject.push_back(KeywordObjectTypeExInfo{
                KeywordObjectTypeInfo{objectIdentifier},
                SEPosition{startLine, stopLine, startColumn, stopColumn}
        });

        return objectIdentifier;
    }

    std::any visitObjmethoddef(Keyword::KeywordGrammarParser::ObjmethoddefContext *ctx) override {
        antlr4::Token *startToken = ctx->getStart();
        antlr4::Token *stopToken = ctx->getStop();

        int startLine = startToken->getLine();
        int startColumn = startToken->getCharPositionInLine();
        int stopLine = stopToken->getLine();
        int stopColumn = stopToken->getCharPositionInLine();

        auto objectIdentifier = ctx->objectIdentifier()->getText();
        auto methodIdentifier = ctx->methodIdentifier()->getText();

        if (!ctx->paramenterDeflist()) {
            return defaultResult();
        }

        std::vector<KeywordParameterInfo> parameterInfo;
        auto paraListSize = ctx->paramenterDeflist()->paramenterDef().size();
        for (int i = 0; i < paraListSize; i++) {
            auto paraTypeIdentifier = ctx->paramenterDeflist()->paramenterDef().at(i)->typeIdentifier()->getText();
            auto paraIdentifier = ctx->paramenterDeflist()->paramenterDef().at(
                    i)->paramenter()->identifier()->getText();
            parameterInfo.push_back(
                    KeywordParameterInfo{
                            .name = paraIdentifier,
                            .type = paraTypeIdentifier
                    });
        }
        DefinedObjMethod.emplace_back(objectIdentifier, KeywordMethodExInfo{
                KeywordMethodInfo{.methodName = methodIdentifier, .parameter = parameterInfo},
                SEPosition{startLine, stopLine, startColumn, stopColumn}
        });

        return methodIdentifier;
    }

    std::any visitMethoddef(Keyword::KeywordGrammarParser::MethoddefContext *ctx) override {
        antlr4::Token *startToken = ctx->getStart();
        antlr4::Token *stopToken = ctx->getStop();

        int startLine = startToken->getLine();
        int startColumn = startToken->getCharPositionInLine();
        int stopLine = stopToken->getLine();
        int stopColumn = stopToken->getCharPositionInLine();

        auto methodIdentifier = ctx->methodIdentifier()->getText();

        if (!ctx->paramenterDeflist()) {
            return defaultResult();
        }

        std::vector<KeywordParameterInfo> parameterInfo;
        auto paraListSize = ctx->paramenterDeflist()->paramenterDef().size();
        for (int i = 0; i < paraListSize; i++) {
            auto expr = ctx->paramenterDeflist()->paramenterDef().at(i);
            if (!expr->typeIdentifier() || !expr->paramenter()) {
                continue;
            }
            auto paraTypeIdentifier = expr->typeIdentifier()->getText();
            auto paraIdentifier = expr->paramenter()->getText();
            parameterInfo.push_back(
                    KeywordParameterInfo{
                            paraIdentifier,
                            paraTypeIdentifier
                    });
        }
        DefinedMethod.emplace_back(KeywordMethodExInfo{
                KeywordMethodInfo{methodIdentifier,
                                  false,
                                  false,
                                  "",
                                  "",
                                  parameterInfo
                },
                SEPosition{startLine, stopLine, startColumn, stopColumn}
        });

        return methodIdentifier;
    }

    std::any visitValdef(Keyword::KeywordGrammarParser::ValdefContext *ctx) override {
        antlr4::Token *startToken = ctx->getStart();
        antlr4::Token *stopToken = ctx->getStop();

        int startLine = startToken->getLine();
        int startColumn = startToken->getCharPositionInLine();
        int stopLine = stopToken->getLine();
        int stopColumn = stopToken->getCharPositionInLine();

        auto valTypeIdentifier = ctx->typeIdentifier()->getText();
        auto valIdentifier = ctx->valIdentifier()->getText();
        DefinedVal.push_back(ValTypeMetaExInfo{
                ValTypeMetaInfo{
                        valIdentifier,
                        valTypeIdentifier
                },
                SEPosition{startLine, stopLine, startColumn, stopColumn}

        });

        return valIdentifier;
    }

    std::any visitValassignment(Keyword::KeywordGrammarParser::ValassignmentContext *ctx) override {
        antlr4::Token *startToken = ctx->getStart();
        antlr4::Token *stopToken = ctx->getStop();

        int startLine = startToken->getLine();
        int startColumn = startToken->getCharPositionInLine();
        int stopLine = stopToken->getLine();
        int stopColumn = stopToken->getCharPositionInLine();

        if (ctx->valIdentifier().size() != 2) {
            std::string leftValIdentifier = ctx->valIdentifier().at(0)->getText();
            std::string rightValIdentifier = ctx->valIdentifier().at(1)->getText();
            ValAssignment.push_back(std::tuple{leftValIdentifier, rightValIdentifier,
                                               SEPosition{startLine, stopLine, startColumn, stopColumn}});

            return std::pair{leftValIdentifier, rightValIdentifier};
        }

        return std::pair{"", ""};
    }

    std::any visitMethodcall(Keyword::KeywordGrammarParser::MethodcallContext *ctx) override {
        antlr4::Token *startToken = ctx->getStart();
        antlr4::Token *stopToken = ctx->getStop();

        int startLine = startToken->getLine();
        int startColumn = startToken->getCharPositionInLine();
        int stopLine = stopToken->getLine();
        int stopColumn = stopToken->getCharPositionInLine();

        std::string methodIdentifier = ctx->methodIdentifier()->getText();

        if (!ctx->paramenterlist()) {
            return defaultResult();
        }

        std::vector<KeywordParameterExInfo> parameterInfos;
        auto paraSize = ctx->paramenterlist()->paramenter().size();
        for (int i = 0; i < paraSize; i++) {
            auto paraIdentifier = ctx->paramenterlist()->paramenter().at(i)->getText();

            parameterInfos.push_back(KeywordParameterExInfo{
                    KeywordParameterInfo{.name = paraIdentifier},
                    SEPosition{startLine, stopLine, startColumn, stopColumn}
            });
        }

        MethodCall.push_back(std::tuple<std::string, std::vector<KeywordParameterExInfo>,SEPosition>{
                methodIdentifier,
                parameterInfos,
                SEPosition{startLine, stopLine, startColumn, stopColumn}
        });

        return methodIdentifier;
    }

    std::any visitObjmethodcall(Keyword::KeywordGrammarParser::ObjmethodcallContext *ctx) override {
        antlr4::Token *startToken = ctx->getStart();
        antlr4::Token *stopToken = ctx->getStop();

        int startLine = startToken->getLine();
        int startColumn = startToken->getCharPositionInLine();
        int stopLine = stopToken->getLine();
        int stopColumn = stopToken->getCharPositionInLine();

        std::string objectIdentifier = ctx->objectIdentifier()->getText();
        std::string methodIdentifier = ctx->methodIdentifier()->getText();

        if (!ctx->paramenterlist()) {
            return defaultResult();
        }

        std::vector<KeywordParameterExInfo> parameterInfos;
        auto paraSize = ctx->paramenterlist()->paramenter().size();
        for (int i = 0; i < paraSize; i++) {
            auto paraIdentifier = ctx->paramenterlist()->paramenter().at(i)->getText();

            parameterInfos.push_back(KeywordParameterExInfo{
                    KeywordParameterInfo{
                            .name = paraIdentifier},
                    SEPosition{startLine, stopLine, startColumn, stopColumn}

            });
        }

        ObjMethodCall.push_back(std::tuple<std::pair<std::string, std::string>, std::vector<KeywordParameterExInfo>,SEPosition>{
                std::pair<std::string, std::string>{objectIdentifier, methodIdentifier},
                parameterInfos,
                SEPosition{startLine, stopLine, startColumn, stopColumn}
        });

        return methodIdentifier;
    }

};
