#pragma once

#include <string>

struct ErrorInfo{
    int line;
    int startPos, endPos;
    std::string errorMessage;
};

struct FunctionInfo {
    std::string name;
    size_t line;
    size_t start;
    size_t end;

    // Constructor for easier instantiation
    FunctionInfo(const std::string& n, size_t l, size_t s, size_t e)
            : name(n), line(l), start(s), end(e) {}

    // We need to provide a comparison operator for the set.
    bool operator<(const FunctionInfo& other) const {
        return name < other.name;
    }
};

