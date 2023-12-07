#pragma once

#include "antlr4-runtime.h"
#include "Backend/Generated/antlr4/KeywordGrammarLexer.h"
#include "Backend/Generated/antlr4/KeywordGrammarParser.h"
#include "AstAnalyzer.h"
#include "SyntaxErrorListener.h"
#include "Common/TypeDef.h"
#include <set>
#include <iostream>

using namespace antlr4;

class BackendAnalyzer {
public:
    void clear(){
        m_Document.clear();
        m_ErrorInfo.clear();
    }

    void reloadDocument(const std::string& document){
        m_Document = document;
    }

    void analysis(KeywordDefination keywordDefination){
        ANTLRInputStream input(m_Document);
        Keyword::KeywordGrammarLexer lexer(&input);

        CommonTokenStream tokens(&lexer);

        tokens.setTokenSource(&lexer);
        tokens.fill();
        // for (auto token : tokens.getTokens()) {
        //     std::cout << token->toString() << std::endl;
        // }

        Keyword::KeywordGrammarParser parser(&tokens);

        // Use our custom error listener
        CustomErrorListener errorListener;
        parser.removeErrorListeners();  // remove the default listener
        parser.addErrorListener(&errorListener);

        tree::ParseTree* parseTree;
        parseTree = parser.start_();

        m_ErrorInfo.insert(m_ErrorInfo.end(), errorListener.getErrorInfo().begin(), errorListener.getErrorInfo().end());

        // std::cout << parseTree->toStringTree(&parser) << std::endl << std::endl;

        KeywordGrammarCustomVisitor visitor;
        auto keywordDef = keywordDefination.getKeywordInfo();
        for (auto& catalogMeta : keywordDef.typeInfo) {
            for(auto& objectMeta : catalogMeta.objects){
                visitor.DefinedObject.emplace_back(objectMeta);
                for(auto& methodMeta : objectMeta.methods) {
                    visitor.DefinedObjMethod.emplace_back(objectMeta.objectTypeName,methodMeta);
                }
            }
        }
        visitor.visit(parseTree);

        for(auto& objMethodCall : visitor.ObjMethodCall){
            bool bObjFind = false;
            bool bMethodFind = false;
            for(auto& definedObject : visitor.DefinedObjMethod){
                if(std::get<0>(objMethodCall).first == definedObject.first){
                    bObjFind = true;
                    if(std::get<0>(objMethodCall).second == definedObject.second.keywordMethodInfo.methodName){
                        bMethodFind = true;
                    }
                }
            }
            if(!bObjFind){
                m_ErrorInfo.push_back(ErrorInfo{std::get<2>(objMethodCall),std::get<0>(objMethodCall).first + " is not defined!"});
            }else if(!bMethodFind){
                m_ErrorInfo.push_back(ErrorInfo{std::get<2>(objMethodCall),std::get<0>(objMethodCall).first + " do not have method " + std::get<0>(objMethodCall).second});
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
