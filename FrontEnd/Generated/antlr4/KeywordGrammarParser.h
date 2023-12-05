
// Generated from .//antlr4//KeywordGrammar.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"


namespace Keyword {


class  KeywordGrammarParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, WS = 13, NEWLINE = 14, 
    Digit = 15, NAME = 16, INT = 17, FLOAT = 18
  };

  enum {
    RuleStart_ = 0, RuleChunk = 1, RuleBlock = 2, RuleStat = 3, RuleString = 4, 
    RuleIdentifier = 5, RuleObjectIdentifier = 6, RuleMethodIdentifier = 7, 
    RuleValIdentifier = 8, RuleTypeIdentifier = 9, RuleParamenter = 10, 
    RuleParamenterlist = 11, RuleParamenterDef = 12, RuleParamenterDeflist = 13, 
    RuleObjectdef = 14, RuleObjmethoddef = 15, RuleMethoddef = 16, RuleValdef = 17, 
    RuleValassignment = 18, RuleMethodcall = 19, RuleObjmethodcall = 20
  };

  explicit KeywordGrammarParser(antlr4::TokenStream *input);

  KeywordGrammarParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~KeywordGrammarParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class Start_Context;
  class ChunkContext;
  class BlockContext;
  class StatContext;
  class StringContext;
  class IdentifierContext;
  class ObjectIdentifierContext;
  class MethodIdentifierContext;
  class ValIdentifierContext;
  class TypeIdentifierContext;
  class ParamenterContext;
  class ParamenterlistContext;
  class ParamenterDefContext;
  class ParamenterDeflistContext;
  class ObjectdefContext;
  class ObjmethoddefContext;
  class MethoddefContext;
  class ValdefContext;
  class ValassignmentContext;
  class MethodcallContext;
  class ObjmethodcallContext; 

  class  Start_Context : public antlr4::ParserRuleContext {
  public:
    Start_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ChunkContext *chunk();
    antlr4::tree::TerminalNode *EOF();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Start_Context* start_();

  class  ChunkContext : public antlr4::ParserRuleContext {
  public:
    ChunkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockContext *block();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChunkContext* chunk();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatContext *> stat();
    StatContext* stat(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockContext* block();

  class  StatContext : public antlr4::ParserRuleContext {
  public:
    StatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ObjectdefContext *objectdef();
    ObjmethoddefContext *objmethoddef();
    MethoddefContext *methoddef();
    ValdefContext *valdef();
    ValassignmentContext *valassignment();
    MethodcallContext *methodcall();
    ObjmethodcallContext *objmethodcall();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatContext* stat();

  class  StringContext : public antlr4::ParserRuleContext {
  public:
    StringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StringContext* string();

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierContext* identifier();

  class  ObjectIdentifierContext : public antlr4::ParserRuleContext {
  public:
    ObjectIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ObjectIdentifierContext* objectIdentifier();

  class  MethodIdentifierContext : public antlr4::ParserRuleContext {
  public:
    MethodIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MethodIdentifierContext* methodIdentifier();

  class  ValIdentifierContext : public antlr4::ParserRuleContext {
  public:
    ValIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValIdentifierContext* valIdentifier();

  class  TypeIdentifierContext : public antlr4::ParserRuleContext {
  public:
    TypeIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeIdentifierContext* typeIdentifier();

  class  ParamenterContext : public antlr4::ParserRuleContext {
  public:
    ParamenterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    StringContext *string();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *FLOAT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParamenterContext* paramenter();

  class  ParamenterlistContext : public antlr4::ParserRuleContext {
  public:
    ParamenterlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParamenterContext *> paramenter();
    ParamenterContext* paramenter(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParamenterlistContext* paramenterlist();

  class  ParamenterDefContext : public antlr4::ParserRuleContext {
  public:
    ParamenterDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeIdentifierContext *typeIdentifier();
    ParamenterContext *paramenter();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParamenterDefContext* paramenterDef();

  class  ParamenterDeflistContext : public antlr4::ParserRuleContext {
  public:
    ParamenterDeflistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParamenterDefContext *> paramenterDef();
    ParamenterDefContext* paramenterDef(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParamenterDeflistContext* paramenterDeflist();

  class  ObjectdefContext : public antlr4::ParserRuleContext {
  public:
    ObjectdefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ObjectIdentifierContext *objectIdentifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ObjectdefContext* objectdef();

  class  ObjmethoddefContext : public antlr4::ParserRuleContext {
  public:
    ObjmethoddefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ObjectIdentifierContext *objectIdentifier();
    MethodIdentifierContext *methodIdentifier();
    ParamenterDeflistContext *paramenterDeflist();
    BlockContext *block();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ObjmethoddefContext* objmethoddef();

  class  MethoddefContext : public antlr4::ParserRuleContext {
  public:
    MethoddefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MethodIdentifierContext *methodIdentifier();
    ParamenterDeflistContext *paramenterDeflist();
    BlockContext *block();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MethoddefContext* methoddef();

  class  ValdefContext : public antlr4::ParserRuleContext {
  public:
    ValdefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeIdentifierContext *typeIdentifier();
    ValIdentifierContext *valIdentifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValdefContext* valdef();

  class  ValassignmentContext : public antlr4::ParserRuleContext {
  public:
    ValassignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ValIdentifierContext *> valIdentifier();
    ValIdentifierContext* valIdentifier(size_t i);
    StringContext *string();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *FLOAT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValassignmentContext* valassignment();

  class  MethodcallContext : public antlr4::ParserRuleContext {
  public:
    MethodcallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MethodIdentifierContext *methodIdentifier();
    ParamenterlistContext *paramenterlist();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MethodcallContext* methodcall();

  class  ObjmethodcallContext : public antlr4::ParserRuleContext {
  public:
    ObjmethodcallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ObjectIdentifierContext *objectIdentifier();
    MethodIdentifierContext *methodIdentifier();
    ParamenterlistContext *paramenterlist();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ObjmethodcallContext* objmethodcall();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

}  // namespace Keyword
