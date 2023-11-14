#pragma once

#include <vector>
#include <string>
#include <filesystem>
#include "yaml-cpp/yaml.h"
#include <iostream>

struct KeywordParameterInfo{
    std::string name;
    std::string type;
    bool optional;
};

struct KeywordAttrInfo{
    std::string name;
    std::string type;
    bool optional;
};

struct KeywordMethodInfo{
    std::string methodName;
    bool isDerived;
    bool isVerifyPoint;
    std::string keywordType;
    std::string original;
    std::vector<KeywordParameterInfo> parameter;
};

struct KeywordObjectTypeInfo{
    std::string objectTypeName;
    std::vector<KeywordAttrInfo> attr;
    std::vector<KeywordMethodInfo> method;
};

struct KeywordCatalogInfo{
    std::string typeName;
    std::string implementationName;
    std::vector<KeywordObjectTypeInfo> objects;
};

struct KeywordInfo{
    std::string name;
    std::string description;
    std::vector<KeywordCatalogInfo> typeInfo;
};

class KeywordDefination {
public:
    KeywordDefination(const std::string& filePath){
        YAML::Node kwRootNode;
        try {
            kwRootNode = YAML::LoadFile(R"(C:\Users\kiraYuukiAsuna\Desktop\ScriptEditor\common_kw.yml)");
        }catch (YAML::BadFile& e){
            std::cerr<<"Exception: "<<e.what()<<"\n";
        }


        std::vector<std::string> typeNames{
            "ATSPI","Mobile", "TestEngine", "WebUI"
        };

        KeywordInfo keywordInfo;
        keywordInfo.name = "Default";
        keywordInfo.description = "Default";
        for (auto it = kwRootNode.begin(); it != kwRootNode.end(); it++) {
            KeywordCatalogInfo typeInfo;
            auto catalogName = it->first.as<std::string>();
            auto catalogNode = kwRootNode[catalogName];

            if(catalogNode.IsDefined()){
                typeInfo.typeName = catalogName;
                if(catalogNode["Implementation"].IsDefined()){
                    typeInfo.implementationName = catalogNode["Implementation"].as<std::string>();
                }
                auto objectsNode = catalogNode["Objects"];

                if(objectsNode.IsDefined()){
                    for (auto it = objectsNode.begin(); it != objectsNode.end(); it++) {
                        KeywordObjectTypeInfo objectTypeInfo;
                        auto objectTypeName = it->first.as<std::string>();
                        YAML::Node methodsNode = objectsNode[objectTypeName]["Methods"];
                        YAML::Node attrNode = objectsNode[objectTypeName]["Attr"];

                        if(methodsNode.IsDefined()){
                            objectTypeInfo.objectTypeName = objectTypeName;
                            for (auto it = methodsNode.begin(); it != methodsNode.end(); ++it) {
                                KeywordMethodInfo methodInfo;
                                auto methodName = it->first.as<std::string>();
                                methodInfo.methodName = methodName;
                                auto paramNode = it->second["Param"];

                                if(paramNode.IsDefined()){
                                    for (int i = 0; i < paramNode.size(); i++) {
                                        KeywordParameterInfo parameterInfo;

                                        if(paramNode[i]["name"].IsDefined()){
                                            parameterInfo.name = paramNode[i]["name"].as<std::string>();
                                        }
                                        if(paramNode[i]["optional"].IsDefined()){
                                            parameterInfo.optional = paramNode[i]["optional"].as<int>();
                                        }
                                        if(paramNode[i]["type"].IsDefined()){
                                            parameterInfo.type = paramNode[i]["type"].as<std::string>();
                                        }
                                        methodInfo.parameter.push_back(parameterInfo);
                                    }
                                }
                                objectTypeInfo.method.push_back(methodInfo);
                            }
                        }

                        if(attrNode.IsDefined()){
                            for (int i = 0; i < attrNode.size(); i++) {
                                KeywordAttrInfo attrInfo;

                                if(attrNode[i]["name"].IsDefined()){
                                    attrInfo.name = attrNode[i]["name"].as<std::string>();
                                }
                                if(attrNode[i]["optional"].IsDefined()){
                                    attrInfo.optional = attrNode[i]["optional"].as<int>();
                                }
                                if(attrNode[i]["type"].IsDefined()){
                                    attrInfo.type = attrNode[i]["type"].as<std::string>();
                                }

                                objectTypeInfo.attr.push_back(attrInfo);
                            }
                        }
                        typeInfo.objects.push_back(objectTypeInfo);
                    }
                }
            }
            keywordInfo.typeInfo.push_back(typeInfo);
        }

    }


private:
    std::vector<KeywordInfo> m_KeywordMetaInfo;



};
