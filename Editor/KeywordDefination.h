#pragma once

#include <vector>
#include <string>
#include <filesystem>
#include "yaml-cpp/yaml.h"
#include <iostream>
#include "Common/TypeDef.h"

struct KeywordParameterInfo{
    std::string name;
    std::string type;
    bool optional;
};

struct KeywordParameterExInfo{
    KeywordParameterInfo keywordParameterInfo;
    SEPosition sePosition;
};

struct KeywordAttrInfo{
    std::string name;
    std::string type;
    bool optional;
};

struct KeywordAttrExInfo{
    KeywordAttrInfo keywordAttrInfo;
    SEPosition sePosition;
};

struct KeywordMethodInfo{
    std::string methodName;
    bool isDerived;
    bool isVerifyPoint;
    std::string keywordType;
    std::string original;
    std::vector<KeywordParameterInfo> parameter;
};

struct KeywordMethodExInfo{
    KeywordMethodInfo keywordMethodInfo;
    SEPosition sePosition;
};

struct KeywordObjectTypeInfo{
    std::string objectTypeName;
    std::vector<KeywordAttrInfo> attr;
    std::vector<KeywordMethodInfo> methods;
};

struct KeywordObjectTypeExInfo{
    KeywordObjectTypeInfo keywordObjectTypeInfo;
    SEPosition sePosition;
};

struct KeywordCatalogInfo{
    std::string catalogName;
    std::string implementationName;
    std::vector<KeywordObjectTypeInfo> objects;
};

struct KeywordCatalogExInfo{
    KeywordCatalogInfo keywordCatalogInfo;
    SEPosition sePosition;
};

struct KeywordInfo{
    std::string name;
    std::string description;
    std::vector<KeywordCatalogInfo> typeInfo;
};

struct KeywordExInfo{
    KeywordInfo KeywordInfo;
    SEPosition sePosition;
};

class KeywordDefination {
public:
    KeywordDefination(){
    }

    KeywordDefination(const std::string& filePath){
        loadKeyword(filePath);
    }

    void loadKeyword(const std::string& filePath) {
                YAML::Node kwRootNode;
        try {
            kwRootNode = YAML::LoadFile(filePath);
        }catch (YAML::BadFile& e){
            std::cerr<<"Exception: "<<e.what()<<"\n";
        }

        try {
            m_KeywordInfo.name = "Default";
            m_KeywordInfo.description = "Default";
            for (auto it = kwRootNode.begin(); it != kwRootNode.end(); it++) {
                KeywordCatalogInfo catalogInfo;
                auto catalogName = it->first.as<std::string>();
                auto catalogNode = kwRootNode[catalogName];

                if(catalogNode.IsDefined()){
                    catalogInfo.catalogName = catalogName;
                    if(catalogNode["Implementation"].IsDefined()){
                        catalogInfo.implementationName = catalogNode["Implementation"].as<std::string>();
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

                                    if(it->second["IsDerived"].IsDefined()) {
                                        methodInfo.isDerived = it->second["IsDerived"].as<bool>();
                                    }
                                    if(it->second["IsVerifyPoint"].IsDefined()) {
                                        methodInfo.isVerifyPoint = it->second["IsVerifyPoint"].as<bool>();
                                    }
                                    if(it->second["KeywordType"].IsDefined()) {
                                        methodInfo.keywordType = it->second["KeywordType"].as<std::string>();
                                    }
                                    if(it->second["Original"].IsDefined()) {
                                        methodInfo.original = it->second["Original"].as<std::string>();
                                    }

                                    if(paramNode.IsDefined()){
                                        for (auto && value : paramNode) {
                                            KeywordParameterInfo parameterInfo;

                                            if(value["name"].IsDefined()){
                                                parameterInfo.name = value["name"].as<std::string>();
                                            }
                                            if(value["optional"].IsDefined()){
                                                parameterInfo.optional = value["optional"].as<int>();
                                            }
                                            if(value["type"].IsDefined()){
                                                parameterInfo.type = value["type"].as<std::string>();
                                            }
                                            methodInfo.parameter.push_back(parameterInfo);
                                        }
                                    }
                                    objectTypeInfo.methods.push_back(methodInfo);
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
                            catalogInfo.objects.push_back(objectTypeInfo);
                        }
                    }
                }
                m_KeywordInfo.typeInfo.push_back(catalogInfo);
            }
        }catch (std::exception& e) {
            std::cerr<<"Exception: "<<e.what()<<"\n";
        }
    }

    auto& getKeywordInfo() {
        return m_KeywordInfo;
    }

private:
    KeywordInfo m_KeywordInfo;



};
