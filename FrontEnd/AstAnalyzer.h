#pragma once

#include "antlr4-runtime.h"
#include "Generated/antlr4/KeywordGrammarBaseVisitor.h"
#include "Editor/KeywordDefination.h"

struct ValTypeMetaInfo {
    std::string name;
    std::string type;
};

class KeywordGrammarCustomVisitor : public Keyword::KeywordGrammarBaseVisitor    {
public:
    std::vector<KeywordObjectTypeInfo> DefinedObject;
    std::vector<std::pair<std::string, KeywordMethodInfo>> DefinedObjMethod;
    std::vector<KeywordMethodInfo> DefinedMethod;
    std::vector<ValTypeMetaInfo> DefinedVal;
    std::vector<std::pair<std::string, std::string>> ValAssignment;
    std::vector<std::pair<std::string, std::vector<KeywordParameterInfo>>> MethodCall;
    std::vector<std::pair<std::pair<std::string, std::string>, std::vector<KeywordParameterInfo>>> ObjMethodCall;

    std::any visitObjectdef(Keyword::KeywordGrammarParser::ObjectdefContext *ctx) override {
        std::string objectIdentifier = ctx->objectIdentifier()->getText();
        DefinedObject.push_back({
            .objectTypeName = objectIdentifier
        });

        return objectIdentifier;
    }

    std::any visitObjmethoddef(Keyword::KeywordGrammarParser::ObjmethoddefContext *ctx) override {
        auto objectIdentifier = ctx->objectIdentifier()->getText();
        auto methodIdentifier = ctx->methodIdentifier()->getText();

        if(!ctx->paramenterDeflist()) {
            return defaultResult();
        }

        std::vector<KeywordParameterInfo> parameterInfo;
        auto paraListSize = ctx->paramenterDeflist()->paramenterDef().size();
        for (int i=0;i<paraListSize;i++) {
            auto paraTypeIdentifier = ctx->paramenterDeflist()->paramenterDef().at(i)->typeIdentifier()->getText();
            auto paraIdentifier = ctx->paramenterDeflist()->paramenterDef().at(i)->paramenter()->identifier()->getText();
            parameterInfo.push_back(
                KeywordParameterInfo{
                    .name = paraIdentifier,
                    .type = paraTypeIdentifier
                });
        }
        DefinedObjMethod.emplace_back(objectIdentifier, KeywordMethodInfo{
            .methodName = methodIdentifier,
            .parameter = parameterInfo
        });

        return methodIdentifier;
    }

    std::any visitMethoddef(Keyword::KeywordGrammarParser::MethoddefContext *ctx) override {
        auto methodIdentifier = ctx->methodIdentifier()->getText();

        if(!ctx->paramenterDeflist()) {
            return defaultResult();
        }

        std::vector<KeywordParameterInfo> parameterInfo;
        auto paraListSize = ctx->paramenterDeflist()->paramenterDef().size();
        for (int i=0;i<paraListSize;i++) {
            auto paraTypeIdentifier = ctx->paramenterDeflist()->paramenterDef().at(i)->typeIdentifier()->getText();
            auto paraIdentifier = ctx->paramenterDeflist()->paramenterDef().at(i)->paramenter()->identifier()->getText();
            parameterInfo.push_back(
                KeywordParameterInfo{
                    paraIdentifier,
                     paraTypeIdentifier
                });
        }
        DefinedMethod.emplace_back(KeywordMethodInfo{
            methodIdentifier,
            false,
            false,
            "",
            "",
             parameterInfo
        });

        return methodIdentifier;
    }

    std::any visitValdef(Keyword::KeywordGrammarParser::ValdefContext *ctx) override {
        auto valTypeIdentifier = ctx->typeIdentifier()->getText();
        auto valIdentifier = ctx->valIdentifier()->getText();
        DefinedVal.push_back(ValTypeMetaInfo{
           valTypeIdentifier,
             valIdentifier
        });

        return valIdentifier;
    }

    std::any visitValassignment(Keyword::KeywordGrammarParser::ValassignmentContext *ctx) override {
        if(ctx->valIdentifier().size() != 2) {
            std::string leftValIdentifier = ctx->valIdentifier().at(0)->getText();
            std::string rightValIdentifier = ctx->valIdentifier().at(1)->getText();
            ValAssignment.push_back(std::pair{leftValIdentifier, rightValIdentifier});

            return std::pair{leftValIdentifier, rightValIdentifier};
        }

        return std::pair{"", ""};
    }

    std::any visitMethodcall(Keyword::KeywordGrammarParser::MethodcallContext *ctx) override {
        std::string methodIdentifier = ctx->methodIdentifier()->getText();

        if(!ctx->paramenterlist()) {
            return defaultResult();
        }

        std::vector<KeywordParameterInfo> parameterInfos;
        auto paraSize = ctx->paramenterlist()->paramenter().size();
        for (int i=0;i<paraSize;i++) {
            auto paraIdentifier = ctx->paramenterlist()->paramenter().at(i)->getText();

            parameterInfos.push_back(KeywordParameterInfo{
                .name = paraIdentifier,
            });
        }

        MethodCall.push_back(std::pair<std::string, std::vector<KeywordParameterInfo>>{
            methodIdentifier,
            parameterInfos
        });

        return methodIdentifier;
    }

    std::any visitObjmethodcall(Keyword::KeywordGrammarParser::ObjmethodcallContext *ctx) override {
        std::string objectIdentifier = ctx->objectIdentifier()->getText();
        std::string methodIdentifier = ctx->methodIdentifier()->getText();

        if(!ctx->paramenterlist()) {
            return defaultResult();
        }

        std::vector<KeywordParameterInfo> parameterInfos;
        auto paraSize = ctx->paramenterlist()->paramenter().size();
        for (int i=0;i<paraSize;i++) {
            auto paraIdentifier = ctx->paramenterlist()->paramenter().at(i)->getText();

            parameterInfos.push_back(KeywordParameterInfo{
                .name = paraIdentifier,
            });
        }

        ObjMethodCall.push_back(std::pair<std::pair<std::string,std::string>, std::vector<KeywordParameterInfo>>{
            std::pair<std::string,std::string>{objectIdentifier, methodIdentifier},
            parameterInfos
        });

        return methodIdentifier;
    }

};
