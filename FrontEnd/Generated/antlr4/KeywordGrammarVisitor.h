
// Generated from .//antlr4//KeywordGrammar.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "KeywordGrammarParser.h"


namespace Keyword {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by KeywordGrammarParser.
 */
class  KeywordGrammarVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by KeywordGrammarParser.
   */
    virtual std::any visitStart_(KeywordGrammarParser::Start_Context *context) = 0;

    virtual std::any visitChunk(KeywordGrammarParser::ChunkContext *context) = 0;

    virtual std::any visitBlock(KeywordGrammarParser::BlockContext *context) = 0;

    virtual std::any visitStat(KeywordGrammarParser::StatContext *context) = 0;

    virtual std::any visitString(KeywordGrammarParser::StringContext *context) = 0;

    virtual std::any visitIdentifier(KeywordGrammarParser::IdentifierContext *context) = 0;

    virtual std::any visitObjectIdentifier(KeywordGrammarParser::ObjectIdentifierContext *context) = 0;

    virtual std::any visitMethodIdentifier(KeywordGrammarParser::MethodIdentifierContext *context) = 0;

    virtual std::any visitValIdentifier(KeywordGrammarParser::ValIdentifierContext *context) = 0;

    virtual std::any visitTypeIdentifier(KeywordGrammarParser::TypeIdentifierContext *context) = 0;

    virtual std::any visitParamenter(KeywordGrammarParser::ParamenterContext *context) = 0;

    virtual std::any visitParamenterlist(KeywordGrammarParser::ParamenterlistContext *context) = 0;

    virtual std::any visitParamenterDef(KeywordGrammarParser::ParamenterDefContext *context) = 0;

    virtual std::any visitParamenterDeflist(KeywordGrammarParser::ParamenterDeflistContext *context) = 0;

    virtual std::any visitObjectdef(KeywordGrammarParser::ObjectdefContext *context) = 0;

    virtual std::any visitObjmethoddef(KeywordGrammarParser::ObjmethoddefContext *context) = 0;

    virtual std::any visitMethoddef(KeywordGrammarParser::MethoddefContext *context) = 0;

    virtual std::any visitValdef(KeywordGrammarParser::ValdefContext *context) = 0;

    virtual std::any visitValassignment(KeywordGrammarParser::ValassignmentContext *context) = 0;

    virtual std::any visitMethodcall(KeywordGrammarParser::MethodcallContext *context) = 0;

    virtual std::any visitObjmethodcall(KeywordGrammarParser::ObjmethodcallContext *context) = 0;


};

}  // namespace Keyword
