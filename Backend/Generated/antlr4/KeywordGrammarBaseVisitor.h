
// Generated from ./antlr4/KeywordGrammar.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "KeywordGrammarVisitor.h"


namespace Keyword {

/**
 * This class provides an empty implementation of KeywordGrammarVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  KeywordGrammarBaseVisitor : public KeywordGrammarVisitor {
public:

  virtual std::any visitStart_(KeywordGrammarParser::Start_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitChunk(KeywordGrammarParser::ChunkContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock(KeywordGrammarParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStat(KeywordGrammarParser::StatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitString(KeywordGrammarParser::StringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentifier(KeywordGrammarParser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObjectIdentifier(KeywordGrammarParser::ObjectIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMethodIdentifier(KeywordGrammarParser::MethodIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValIdentifier(KeywordGrammarParser::ValIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeIdentifier(KeywordGrammarParser::TypeIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParamenter(KeywordGrammarParser::ParamenterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParamenterlist(KeywordGrammarParser::ParamenterlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParamenterDef(KeywordGrammarParser::ParamenterDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParamenterDeflist(KeywordGrammarParser::ParamenterDeflistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObjectdef(KeywordGrammarParser::ObjectdefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObjmethoddef(KeywordGrammarParser::ObjmethoddefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMethoddef(KeywordGrammarParser::MethoddefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValdef(KeywordGrammarParser::ValdefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValassignment(KeywordGrammarParser::ValassignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMethodcall(KeywordGrammarParser::MethodcallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObjmethodcall(KeywordGrammarParser::ObjmethodcallContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace Keyword
