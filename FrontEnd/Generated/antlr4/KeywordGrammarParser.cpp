
// Generated from .//antlr4//KeywordGrammar.g4 by ANTLR 4.13.1


#include "KeywordGrammarVisitor.h"

#include "KeywordGrammarParser.h"


using namespace antlrcpp;
using namespace Keyword;

using namespace antlr4;

namespace {

struct KeywordGrammarParserStaticData final {
  KeywordGrammarParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  KeywordGrammarParserStaticData(const KeywordGrammarParserStaticData&) = delete;
  KeywordGrammarParserStaticData(KeywordGrammarParserStaticData&&) = delete;
  KeywordGrammarParserStaticData& operator=(const KeywordGrammarParserStaticData&) = delete;
  KeywordGrammarParserStaticData& operator=(KeywordGrammarParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag keywordgrammarParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
KeywordGrammarParserStaticData *keywordgrammarParserStaticData = nullptr;

void keywordgrammarParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (keywordgrammarParserStaticData != nullptr) {
    return;
  }
#else
  assert(keywordgrammarParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<KeywordGrammarParserStaticData>(
    std::vector<std::string>{
      "start_", "chunk", "block", "stat", "string", "identifier", "objectIdentifier", 
      "methodIdentifier", "valIdentifier", "typeIdentifier", "paramenter", 
      "paramenterlist", "paramenterDef", "paramenterDeflist", "objectdef", 
      "objmethoddef", "methoddef", "valdef", "valassignment", "methodcall", 
      "objmethodcall"
    },
    std::vector<std::string>{
      "", "';'", "'\"'", "','", "'object'", "'method'", "'('", "')'", "'{'", 
      "'}'", "'val'", "'='", "'.'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "WS", "NEWLINE", 
      "Digit", "NAME", "INT", "FLOAT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,18,184,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,1,0,1,
  	0,1,0,1,1,1,1,1,2,5,2,49,8,2,10,2,12,2,52,9,2,1,3,1,3,1,3,1,3,1,3,1,3,
  	1,3,1,3,3,3,62,8,3,1,4,1,4,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,8,1,8,1,
  	9,1,9,1,10,1,10,1,10,1,10,3,10,82,8,10,1,11,5,11,85,8,11,10,11,12,11,
  	88,9,11,1,11,1,11,5,11,92,8,11,10,11,12,11,95,9,11,1,12,1,12,1,12,1,13,
  	5,13,101,8,13,10,13,12,13,104,9,13,1,13,1,13,5,13,108,8,13,10,13,12,13,
  	111,9,13,1,14,1,14,1,14,1,14,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,
  	1,15,1,15,1,15,1,15,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,17,
  	1,17,1,17,1,17,1,17,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,
  	1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,
  	1,18,3,18,168,8,18,1,19,1,19,1,19,1,19,1,19,1,19,1,20,1,20,1,20,1,20,
  	1,20,1,20,1,20,1,20,1,20,0,0,21,0,2,4,6,8,10,12,14,16,18,20,22,24,26,
  	28,30,32,34,36,38,40,0,0,181,0,42,1,0,0,0,2,45,1,0,0,0,4,50,1,0,0,0,6,
  	61,1,0,0,0,8,63,1,0,0,0,10,67,1,0,0,0,12,69,1,0,0,0,14,71,1,0,0,0,16,
  	73,1,0,0,0,18,75,1,0,0,0,20,81,1,0,0,0,22,86,1,0,0,0,24,96,1,0,0,0,26,
  	102,1,0,0,0,28,112,1,0,0,0,30,116,1,0,0,0,32,128,1,0,0,0,34,137,1,0,0,
  	0,36,167,1,0,0,0,38,169,1,0,0,0,40,175,1,0,0,0,42,43,3,2,1,0,43,44,5,
  	0,0,1,44,1,1,0,0,0,45,46,3,4,2,0,46,3,1,0,0,0,47,49,3,6,3,0,48,47,1,0,
  	0,0,49,52,1,0,0,0,50,48,1,0,0,0,50,51,1,0,0,0,51,5,1,0,0,0,52,50,1,0,
  	0,0,53,62,5,1,0,0,54,62,3,28,14,0,55,62,3,30,15,0,56,62,3,32,16,0,57,
  	62,3,34,17,0,58,62,3,36,18,0,59,62,3,38,19,0,60,62,3,40,20,0,61,53,1,
  	0,0,0,61,54,1,0,0,0,61,55,1,0,0,0,61,56,1,0,0,0,61,57,1,0,0,0,61,58,1,
  	0,0,0,61,59,1,0,0,0,61,60,1,0,0,0,62,7,1,0,0,0,63,64,5,2,0,0,64,65,5,
  	16,0,0,65,66,5,2,0,0,66,9,1,0,0,0,67,68,5,16,0,0,68,11,1,0,0,0,69,70,
  	3,10,5,0,70,13,1,0,0,0,71,72,3,10,5,0,72,15,1,0,0,0,73,74,3,10,5,0,74,
  	17,1,0,0,0,75,76,3,10,5,0,76,19,1,0,0,0,77,82,3,10,5,0,78,82,3,8,4,0,
  	79,82,5,17,0,0,80,82,5,18,0,0,81,77,1,0,0,0,81,78,1,0,0,0,81,79,1,0,0,
  	0,81,80,1,0,0,0,82,21,1,0,0,0,83,85,3,20,10,0,84,83,1,0,0,0,85,88,1,0,
  	0,0,86,84,1,0,0,0,86,87,1,0,0,0,87,93,1,0,0,0,88,86,1,0,0,0,89,90,5,3,
  	0,0,90,92,3,20,10,0,91,89,1,0,0,0,92,95,1,0,0,0,93,91,1,0,0,0,93,94,1,
  	0,0,0,94,23,1,0,0,0,95,93,1,0,0,0,96,97,3,18,9,0,97,98,3,20,10,0,98,25,
  	1,0,0,0,99,101,3,24,12,0,100,99,1,0,0,0,101,104,1,0,0,0,102,100,1,0,0,
  	0,102,103,1,0,0,0,103,109,1,0,0,0,104,102,1,0,0,0,105,106,5,3,0,0,106,
  	108,3,24,12,0,107,105,1,0,0,0,108,111,1,0,0,0,109,107,1,0,0,0,109,110,
  	1,0,0,0,110,27,1,0,0,0,111,109,1,0,0,0,112,113,5,4,0,0,113,114,3,12,6,
  	0,114,115,5,1,0,0,115,29,1,0,0,0,116,117,5,5,0,0,117,118,5,6,0,0,118,
  	119,3,12,6,0,119,120,5,7,0,0,120,121,3,14,7,0,121,122,5,6,0,0,122,123,
  	3,26,13,0,123,124,5,7,0,0,124,125,5,8,0,0,125,126,3,4,2,0,126,127,5,9,
  	0,0,127,31,1,0,0,0,128,129,5,5,0,0,129,130,3,14,7,0,130,131,5,6,0,0,131,
  	132,3,26,13,0,132,133,5,7,0,0,133,134,5,8,0,0,134,135,3,4,2,0,135,136,
  	5,9,0,0,136,33,1,0,0,0,137,138,5,10,0,0,138,139,3,18,9,0,139,140,3,16,
  	8,0,140,141,5,1,0,0,141,35,1,0,0,0,142,143,3,16,8,0,143,144,5,11,0,0,
  	144,145,3,16,8,0,145,146,5,1,0,0,146,168,1,0,0,0,147,148,3,16,8,0,148,
  	149,5,11,0,0,149,150,3,8,4,0,150,151,5,1,0,0,151,168,1,0,0,0,152,153,
  	3,16,8,0,153,154,5,11,0,0,154,155,3,8,4,0,155,156,5,1,0,0,156,168,1,0,
  	0,0,157,158,3,16,8,0,158,159,5,11,0,0,159,160,5,17,0,0,160,161,5,1,0,
  	0,161,168,1,0,0,0,162,163,3,16,8,0,163,164,5,11,0,0,164,165,5,18,0,0,
  	165,166,5,1,0,0,166,168,1,0,0,0,167,142,1,0,0,0,167,147,1,0,0,0,167,152,
  	1,0,0,0,167,157,1,0,0,0,167,162,1,0,0,0,168,37,1,0,0,0,169,170,3,14,7,
  	0,170,171,5,6,0,0,171,172,3,22,11,0,172,173,5,7,0,0,173,174,5,1,0,0,174,
  	39,1,0,0,0,175,176,3,12,6,0,176,177,5,12,0,0,177,178,3,14,7,0,178,179,
  	5,6,0,0,179,180,3,22,11,0,180,181,5,7,0,0,181,182,5,1,0,0,182,41,1,0,
  	0,0,8,50,61,81,86,93,102,109,167
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  keywordgrammarParserStaticData = staticData.release();
}

}

KeywordGrammarParser::KeywordGrammarParser(TokenStream *input) : KeywordGrammarParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

KeywordGrammarParser::KeywordGrammarParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  KeywordGrammarParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *keywordgrammarParserStaticData->atn, keywordgrammarParserStaticData->decisionToDFA, keywordgrammarParserStaticData->sharedContextCache, options);
}

KeywordGrammarParser::~KeywordGrammarParser() {
  delete _interpreter;
}

const atn::ATN& KeywordGrammarParser::getATN() const {
  return *keywordgrammarParserStaticData->atn;
}

std::string KeywordGrammarParser::getGrammarFileName() const {
  return "KeywordGrammar.g4";
}

const std::vector<std::string>& KeywordGrammarParser::getRuleNames() const {
  return keywordgrammarParserStaticData->ruleNames;
}

const dfa::Vocabulary& KeywordGrammarParser::getVocabulary() const {
  return keywordgrammarParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView KeywordGrammarParser::getSerializedATN() const {
  return keywordgrammarParserStaticData->serializedATN;
}


//----------------- Start_Context ------------------------------------------------------------------

KeywordGrammarParser::Start_Context::Start_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KeywordGrammarParser::ChunkContext* KeywordGrammarParser::Start_Context::chunk() {
  return getRuleContext<KeywordGrammarParser::ChunkContext>(0);
}

tree::TerminalNode* KeywordGrammarParser::Start_Context::EOF() {
  return getToken(KeywordGrammarParser::EOF, 0);
}


size_t KeywordGrammarParser::Start_Context::getRuleIndex() const {
  return KeywordGrammarParser::RuleStart_;
}


std::any KeywordGrammarParser::Start_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KeywordGrammarVisitor*>(visitor))
    return parserVisitor->visitStart_(this);
  else
    return visitor->visitChildren(this);
}

KeywordGrammarParser::Start_Context* KeywordGrammarParser::start_() {
  Start_Context *_localctx = _tracker.createInstance<Start_Context>(_ctx, getState());
  enterRule(_localctx, 0, KeywordGrammarParser::RuleStart_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(42);
    chunk();
    setState(43);
    match(KeywordGrammarParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ChunkContext ------------------------------------------------------------------

KeywordGrammarParser::ChunkContext::ChunkContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KeywordGrammarParser::BlockContext* KeywordGrammarParser::ChunkContext::block() {
  return getRuleContext<KeywordGrammarParser::BlockContext>(0);
}


size_t KeywordGrammarParser::ChunkContext::getRuleIndex() const {
  return KeywordGrammarParser::RuleChunk;
}


std::any KeywordGrammarParser::ChunkContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KeywordGrammarVisitor*>(visitor))
    return parserVisitor->visitChunk(this);
  else
    return visitor->visitChildren(this);
}

KeywordGrammarParser::ChunkContext* KeywordGrammarParser::chunk() {
  ChunkContext *_localctx = _tracker.createInstance<ChunkContext>(_ctx, getState());
  enterRule(_localctx, 2, KeywordGrammarParser::RuleChunk);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(45);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

KeywordGrammarParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KeywordGrammarParser::StatContext *> KeywordGrammarParser::BlockContext::stat() {
  return getRuleContexts<KeywordGrammarParser::StatContext>();
}

KeywordGrammarParser::StatContext* KeywordGrammarParser::BlockContext::stat(size_t i) {
  return getRuleContext<KeywordGrammarParser::StatContext>(i);
}


size_t KeywordGrammarParser::BlockContext::getRuleIndex() const {
  return KeywordGrammarParser::RuleBlock;
}


std::any KeywordGrammarParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KeywordGrammarVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

KeywordGrammarParser::BlockContext* KeywordGrammarParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 4, KeywordGrammarParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(50);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 66610) != 0)) {
      setState(47);
      stat();
      setState(52);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatContext ------------------------------------------------------------------

KeywordGrammarParser::StatContext::StatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KeywordGrammarParser::ObjectdefContext* KeywordGrammarParser::StatContext::objectdef() {
  return getRuleContext<KeywordGrammarParser::ObjectdefContext>(0);
}

KeywordGrammarParser::ObjmethoddefContext* KeywordGrammarParser::StatContext::objmethoddef() {
  return getRuleContext<KeywordGrammarParser::ObjmethoddefContext>(0);
}

KeywordGrammarParser::MethoddefContext* KeywordGrammarParser::StatContext::methoddef() {
  return getRuleContext<KeywordGrammarParser::MethoddefContext>(0);
}

KeywordGrammarParser::ValdefContext* KeywordGrammarParser::StatContext::valdef() {
  return getRuleContext<KeywordGrammarParser::ValdefContext>(0);
}

KeywordGrammarParser::ValassignmentContext* KeywordGrammarParser::StatContext::valassignment() {
  return getRuleContext<KeywordGrammarParser::ValassignmentContext>(0);
}

KeywordGrammarParser::MethodcallContext* KeywordGrammarParser::StatContext::methodcall() {
  return getRuleContext<KeywordGrammarParser::MethodcallContext>(0);
}

KeywordGrammarParser::ObjmethodcallContext* KeywordGrammarParser::StatContext::objmethodcall() {
  return getRuleContext<KeywordGrammarParser::ObjmethodcallContext>(0);
}


size_t KeywordGrammarParser::StatContext::getRuleIndex() const {
  return KeywordGrammarParser::RuleStat;
}


std::any KeywordGrammarParser::StatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KeywordGrammarVisitor*>(visitor))
    return parserVisitor->visitStat(this);
  else
    return visitor->visitChildren(this);
}

KeywordGrammarParser::StatContext* KeywordGrammarParser::stat() {
  StatContext *_localctx = _tracker.createInstance<StatContext>(_ctx, getState());
  enterRule(_localctx, 6, KeywordGrammarParser::RuleStat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(61);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(53);
      match(KeywordGrammarParser::T__0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(54);
      objectdef();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(55);
      objmethoddef();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(56);
      methoddef();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(57);
      valdef();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(58);
      valassignment();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(59);
      methodcall();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(60);
      objmethodcall();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringContext ------------------------------------------------------------------

KeywordGrammarParser::StringContext::StringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KeywordGrammarParser::StringContext::NAME() {
  return getToken(KeywordGrammarParser::NAME, 0);
}


size_t KeywordGrammarParser::StringContext::getRuleIndex() const {
  return KeywordGrammarParser::RuleString;
}


std::any KeywordGrammarParser::StringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KeywordGrammarVisitor*>(visitor))
    return parserVisitor->visitString(this);
  else
    return visitor->visitChildren(this);
}

KeywordGrammarParser::StringContext* KeywordGrammarParser::string() {
  StringContext *_localctx = _tracker.createInstance<StringContext>(_ctx, getState());
  enterRule(_localctx, 8, KeywordGrammarParser::RuleString);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(63);
    match(KeywordGrammarParser::T__1);
    setState(64);
    match(KeywordGrammarParser::NAME);
    setState(65);
    match(KeywordGrammarParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierContext ------------------------------------------------------------------

KeywordGrammarParser::IdentifierContext::IdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KeywordGrammarParser::IdentifierContext::NAME() {
  return getToken(KeywordGrammarParser::NAME, 0);
}


size_t KeywordGrammarParser::IdentifierContext::getRuleIndex() const {
  return KeywordGrammarParser::RuleIdentifier;
}


std::any KeywordGrammarParser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KeywordGrammarVisitor*>(visitor))
    return parserVisitor->visitIdentifier(this);
  else
    return visitor->visitChildren(this);
}

KeywordGrammarParser::IdentifierContext* KeywordGrammarParser::identifier() {
  IdentifierContext *_localctx = _tracker.createInstance<IdentifierContext>(_ctx, getState());
  enterRule(_localctx, 10, KeywordGrammarParser::RuleIdentifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(67);
    match(KeywordGrammarParser::NAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ObjectIdentifierContext ------------------------------------------------------------------

KeywordGrammarParser::ObjectIdentifierContext::ObjectIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KeywordGrammarParser::IdentifierContext* KeywordGrammarParser::ObjectIdentifierContext::identifier() {
  return getRuleContext<KeywordGrammarParser::IdentifierContext>(0);
}


size_t KeywordGrammarParser::ObjectIdentifierContext::getRuleIndex() const {
  return KeywordGrammarParser::RuleObjectIdentifier;
}


std::any KeywordGrammarParser::ObjectIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KeywordGrammarVisitor*>(visitor))
    return parserVisitor->visitObjectIdentifier(this);
  else
    return visitor->visitChildren(this);
}

KeywordGrammarParser::ObjectIdentifierContext* KeywordGrammarParser::objectIdentifier() {
  ObjectIdentifierContext *_localctx = _tracker.createInstance<ObjectIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 12, KeywordGrammarParser::RuleObjectIdentifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(69);
    identifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodIdentifierContext ------------------------------------------------------------------

KeywordGrammarParser::MethodIdentifierContext::MethodIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KeywordGrammarParser::IdentifierContext* KeywordGrammarParser::MethodIdentifierContext::identifier() {
  return getRuleContext<KeywordGrammarParser::IdentifierContext>(0);
}


size_t KeywordGrammarParser::MethodIdentifierContext::getRuleIndex() const {
  return KeywordGrammarParser::RuleMethodIdentifier;
}


std::any KeywordGrammarParser::MethodIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KeywordGrammarVisitor*>(visitor))
    return parserVisitor->visitMethodIdentifier(this);
  else
    return visitor->visitChildren(this);
}

KeywordGrammarParser::MethodIdentifierContext* KeywordGrammarParser::methodIdentifier() {
  MethodIdentifierContext *_localctx = _tracker.createInstance<MethodIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 14, KeywordGrammarParser::RuleMethodIdentifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(71);
    identifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValIdentifierContext ------------------------------------------------------------------

KeywordGrammarParser::ValIdentifierContext::ValIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KeywordGrammarParser::IdentifierContext* KeywordGrammarParser::ValIdentifierContext::identifier() {
  return getRuleContext<KeywordGrammarParser::IdentifierContext>(0);
}


size_t KeywordGrammarParser::ValIdentifierContext::getRuleIndex() const {
  return KeywordGrammarParser::RuleValIdentifier;
}


std::any KeywordGrammarParser::ValIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KeywordGrammarVisitor*>(visitor))
    return parserVisitor->visitValIdentifier(this);
  else
    return visitor->visitChildren(this);
}

KeywordGrammarParser::ValIdentifierContext* KeywordGrammarParser::valIdentifier() {
  ValIdentifierContext *_localctx = _tracker.createInstance<ValIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 16, KeywordGrammarParser::RuleValIdentifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(73);
    identifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeIdentifierContext ------------------------------------------------------------------

KeywordGrammarParser::TypeIdentifierContext::TypeIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KeywordGrammarParser::IdentifierContext* KeywordGrammarParser::TypeIdentifierContext::identifier() {
  return getRuleContext<KeywordGrammarParser::IdentifierContext>(0);
}


size_t KeywordGrammarParser::TypeIdentifierContext::getRuleIndex() const {
  return KeywordGrammarParser::RuleTypeIdentifier;
}


std::any KeywordGrammarParser::TypeIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KeywordGrammarVisitor*>(visitor))
    return parserVisitor->visitTypeIdentifier(this);
  else
    return visitor->visitChildren(this);
}

KeywordGrammarParser::TypeIdentifierContext* KeywordGrammarParser::typeIdentifier() {
  TypeIdentifierContext *_localctx = _tracker.createInstance<TypeIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 18, KeywordGrammarParser::RuleTypeIdentifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(75);
    identifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamenterContext ------------------------------------------------------------------

KeywordGrammarParser::ParamenterContext::ParamenterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KeywordGrammarParser::IdentifierContext* KeywordGrammarParser::ParamenterContext::identifier() {
  return getRuleContext<KeywordGrammarParser::IdentifierContext>(0);
}

KeywordGrammarParser::StringContext* KeywordGrammarParser::ParamenterContext::string() {
  return getRuleContext<KeywordGrammarParser::StringContext>(0);
}

tree::TerminalNode* KeywordGrammarParser::ParamenterContext::INT() {
  return getToken(KeywordGrammarParser::INT, 0);
}

tree::TerminalNode* KeywordGrammarParser::ParamenterContext::FLOAT() {
  return getToken(KeywordGrammarParser::FLOAT, 0);
}


size_t KeywordGrammarParser::ParamenterContext::getRuleIndex() const {
  return KeywordGrammarParser::RuleParamenter;
}


std::any KeywordGrammarParser::ParamenterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KeywordGrammarVisitor*>(visitor))
    return parserVisitor->visitParamenter(this);
  else
    return visitor->visitChildren(this);
}

KeywordGrammarParser::ParamenterContext* KeywordGrammarParser::paramenter() {
  ParamenterContext *_localctx = _tracker.createInstance<ParamenterContext>(_ctx, getState());
  enterRule(_localctx, 20, KeywordGrammarParser::RuleParamenter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(81);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KeywordGrammarParser::NAME: {
        enterOuterAlt(_localctx, 1);
        setState(77);
        identifier();
        break;
      }

      case KeywordGrammarParser::T__1: {
        enterOuterAlt(_localctx, 2);
        setState(78);
        string();
        break;
      }

      case KeywordGrammarParser::INT: {
        enterOuterAlt(_localctx, 3);
        setState(79);
        match(KeywordGrammarParser::INT);
        break;
      }

      case KeywordGrammarParser::FLOAT: {
        enterOuterAlt(_localctx, 4);
        setState(80);
        match(KeywordGrammarParser::FLOAT);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamenterlistContext ------------------------------------------------------------------

KeywordGrammarParser::ParamenterlistContext::ParamenterlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KeywordGrammarParser::ParamenterContext *> KeywordGrammarParser::ParamenterlistContext::paramenter() {
  return getRuleContexts<KeywordGrammarParser::ParamenterContext>();
}

KeywordGrammarParser::ParamenterContext* KeywordGrammarParser::ParamenterlistContext::paramenter(size_t i) {
  return getRuleContext<KeywordGrammarParser::ParamenterContext>(i);
}


size_t KeywordGrammarParser::ParamenterlistContext::getRuleIndex() const {
  return KeywordGrammarParser::RuleParamenterlist;
}


std::any KeywordGrammarParser::ParamenterlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KeywordGrammarVisitor*>(visitor))
    return parserVisitor->visitParamenterlist(this);
  else
    return visitor->visitChildren(this);
}

KeywordGrammarParser::ParamenterlistContext* KeywordGrammarParser::paramenterlist() {
  ParamenterlistContext *_localctx = _tracker.createInstance<ParamenterlistContext>(_ctx, getState());
  enterRule(_localctx, 22, KeywordGrammarParser::RuleParamenterlist);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(86);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 458756) != 0)) {
      setState(83);
      paramenter();
      setState(88);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(93);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KeywordGrammarParser::T__2) {
      setState(89);
      match(KeywordGrammarParser::T__2);
      setState(90);
      paramenter();
      setState(95);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamenterDefContext ------------------------------------------------------------------

KeywordGrammarParser::ParamenterDefContext::ParamenterDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KeywordGrammarParser::TypeIdentifierContext* KeywordGrammarParser::ParamenterDefContext::typeIdentifier() {
  return getRuleContext<KeywordGrammarParser::TypeIdentifierContext>(0);
}

KeywordGrammarParser::ParamenterContext* KeywordGrammarParser::ParamenterDefContext::paramenter() {
  return getRuleContext<KeywordGrammarParser::ParamenterContext>(0);
}


size_t KeywordGrammarParser::ParamenterDefContext::getRuleIndex() const {
  return KeywordGrammarParser::RuleParamenterDef;
}


std::any KeywordGrammarParser::ParamenterDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KeywordGrammarVisitor*>(visitor))
    return parserVisitor->visitParamenterDef(this);
  else
    return visitor->visitChildren(this);
}

KeywordGrammarParser::ParamenterDefContext* KeywordGrammarParser::paramenterDef() {
  ParamenterDefContext *_localctx = _tracker.createInstance<ParamenterDefContext>(_ctx, getState());
  enterRule(_localctx, 24, KeywordGrammarParser::RuleParamenterDef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(96);
    typeIdentifier();
    setState(97);
    paramenter();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamenterDeflistContext ------------------------------------------------------------------

KeywordGrammarParser::ParamenterDeflistContext::ParamenterDeflistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KeywordGrammarParser::ParamenterDefContext *> KeywordGrammarParser::ParamenterDeflistContext::paramenterDef() {
  return getRuleContexts<KeywordGrammarParser::ParamenterDefContext>();
}

KeywordGrammarParser::ParamenterDefContext* KeywordGrammarParser::ParamenterDeflistContext::paramenterDef(size_t i) {
  return getRuleContext<KeywordGrammarParser::ParamenterDefContext>(i);
}


size_t KeywordGrammarParser::ParamenterDeflistContext::getRuleIndex() const {
  return KeywordGrammarParser::RuleParamenterDeflist;
}


std::any KeywordGrammarParser::ParamenterDeflistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KeywordGrammarVisitor*>(visitor))
    return parserVisitor->visitParamenterDeflist(this);
  else
    return visitor->visitChildren(this);
}

KeywordGrammarParser::ParamenterDeflistContext* KeywordGrammarParser::paramenterDeflist() {
  ParamenterDeflistContext *_localctx = _tracker.createInstance<ParamenterDeflistContext>(_ctx, getState());
  enterRule(_localctx, 26, KeywordGrammarParser::RuleParamenterDeflist);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(102);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KeywordGrammarParser::NAME) {
      setState(99);
      paramenterDef();
      setState(104);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(109);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KeywordGrammarParser::T__2) {
      setState(105);
      match(KeywordGrammarParser::T__2);
      setState(106);
      paramenterDef();
      setState(111);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ObjectdefContext ------------------------------------------------------------------

KeywordGrammarParser::ObjectdefContext::ObjectdefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KeywordGrammarParser::ObjectIdentifierContext* KeywordGrammarParser::ObjectdefContext::objectIdentifier() {
  return getRuleContext<KeywordGrammarParser::ObjectIdentifierContext>(0);
}


size_t KeywordGrammarParser::ObjectdefContext::getRuleIndex() const {
  return KeywordGrammarParser::RuleObjectdef;
}


std::any KeywordGrammarParser::ObjectdefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KeywordGrammarVisitor*>(visitor))
    return parserVisitor->visitObjectdef(this);
  else
    return visitor->visitChildren(this);
}

KeywordGrammarParser::ObjectdefContext* KeywordGrammarParser::objectdef() {
  ObjectdefContext *_localctx = _tracker.createInstance<ObjectdefContext>(_ctx, getState());
  enterRule(_localctx, 28, KeywordGrammarParser::RuleObjectdef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(112);
    match(KeywordGrammarParser::T__3);
    setState(113);
    objectIdentifier();
    setState(114);
    match(KeywordGrammarParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ObjmethoddefContext ------------------------------------------------------------------

KeywordGrammarParser::ObjmethoddefContext::ObjmethoddefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KeywordGrammarParser::ObjectIdentifierContext* KeywordGrammarParser::ObjmethoddefContext::objectIdentifier() {
  return getRuleContext<KeywordGrammarParser::ObjectIdentifierContext>(0);
}

KeywordGrammarParser::MethodIdentifierContext* KeywordGrammarParser::ObjmethoddefContext::methodIdentifier() {
  return getRuleContext<KeywordGrammarParser::MethodIdentifierContext>(0);
}

KeywordGrammarParser::ParamenterDeflistContext* KeywordGrammarParser::ObjmethoddefContext::paramenterDeflist() {
  return getRuleContext<KeywordGrammarParser::ParamenterDeflistContext>(0);
}

KeywordGrammarParser::BlockContext* KeywordGrammarParser::ObjmethoddefContext::block() {
  return getRuleContext<KeywordGrammarParser::BlockContext>(0);
}


size_t KeywordGrammarParser::ObjmethoddefContext::getRuleIndex() const {
  return KeywordGrammarParser::RuleObjmethoddef;
}


std::any KeywordGrammarParser::ObjmethoddefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KeywordGrammarVisitor*>(visitor))
    return parserVisitor->visitObjmethoddef(this);
  else
    return visitor->visitChildren(this);
}

KeywordGrammarParser::ObjmethoddefContext* KeywordGrammarParser::objmethoddef() {
  ObjmethoddefContext *_localctx = _tracker.createInstance<ObjmethoddefContext>(_ctx, getState());
  enterRule(_localctx, 30, KeywordGrammarParser::RuleObjmethoddef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(116);
    match(KeywordGrammarParser::T__4);
    setState(117);
    match(KeywordGrammarParser::T__5);
    setState(118);
    objectIdentifier();
    setState(119);
    match(KeywordGrammarParser::T__6);
    setState(120);
    methodIdentifier();
    setState(121);
    match(KeywordGrammarParser::T__5);
    setState(122);
    paramenterDeflist();
    setState(123);
    match(KeywordGrammarParser::T__6);
    setState(124);
    match(KeywordGrammarParser::T__7);
    setState(125);
    block();
    setState(126);
    match(KeywordGrammarParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethoddefContext ------------------------------------------------------------------

KeywordGrammarParser::MethoddefContext::MethoddefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KeywordGrammarParser::MethodIdentifierContext* KeywordGrammarParser::MethoddefContext::methodIdentifier() {
  return getRuleContext<KeywordGrammarParser::MethodIdentifierContext>(0);
}

KeywordGrammarParser::ParamenterDeflistContext* KeywordGrammarParser::MethoddefContext::paramenterDeflist() {
  return getRuleContext<KeywordGrammarParser::ParamenterDeflistContext>(0);
}

KeywordGrammarParser::BlockContext* KeywordGrammarParser::MethoddefContext::block() {
  return getRuleContext<KeywordGrammarParser::BlockContext>(0);
}


size_t KeywordGrammarParser::MethoddefContext::getRuleIndex() const {
  return KeywordGrammarParser::RuleMethoddef;
}


std::any KeywordGrammarParser::MethoddefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KeywordGrammarVisitor*>(visitor))
    return parserVisitor->visitMethoddef(this);
  else
    return visitor->visitChildren(this);
}

KeywordGrammarParser::MethoddefContext* KeywordGrammarParser::methoddef() {
  MethoddefContext *_localctx = _tracker.createInstance<MethoddefContext>(_ctx, getState());
  enterRule(_localctx, 32, KeywordGrammarParser::RuleMethoddef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(128);
    match(KeywordGrammarParser::T__4);
    setState(129);
    methodIdentifier();
    setState(130);
    match(KeywordGrammarParser::T__5);
    setState(131);
    paramenterDeflist();
    setState(132);
    match(KeywordGrammarParser::T__6);
    setState(133);
    match(KeywordGrammarParser::T__7);
    setState(134);
    block();
    setState(135);
    match(KeywordGrammarParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValdefContext ------------------------------------------------------------------

KeywordGrammarParser::ValdefContext::ValdefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KeywordGrammarParser::TypeIdentifierContext* KeywordGrammarParser::ValdefContext::typeIdentifier() {
  return getRuleContext<KeywordGrammarParser::TypeIdentifierContext>(0);
}

KeywordGrammarParser::ValIdentifierContext* KeywordGrammarParser::ValdefContext::valIdentifier() {
  return getRuleContext<KeywordGrammarParser::ValIdentifierContext>(0);
}


size_t KeywordGrammarParser::ValdefContext::getRuleIndex() const {
  return KeywordGrammarParser::RuleValdef;
}


std::any KeywordGrammarParser::ValdefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KeywordGrammarVisitor*>(visitor))
    return parserVisitor->visitValdef(this);
  else
    return visitor->visitChildren(this);
}

KeywordGrammarParser::ValdefContext* KeywordGrammarParser::valdef() {
  ValdefContext *_localctx = _tracker.createInstance<ValdefContext>(_ctx, getState());
  enterRule(_localctx, 34, KeywordGrammarParser::RuleValdef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(137);
    match(KeywordGrammarParser::T__9);
    setState(138);
    typeIdentifier();
    setState(139);
    valIdentifier();
    setState(140);
    match(KeywordGrammarParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValassignmentContext ------------------------------------------------------------------

KeywordGrammarParser::ValassignmentContext::ValassignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KeywordGrammarParser::ValIdentifierContext *> KeywordGrammarParser::ValassignmentContext::valIdentifier() {
  return getRuleContexts<KeywordGrammarParser::ValIdentifierContext>();
}

KeywordGrammarParser::ValIdentifierContext* KeywordGrammarParser::ValassignmentContext::valIdentifier(size_t i) {
  return getRuleContext<KeywordGrammarParser::ValIdentifierContext>(i);
}

KeywordGrammarParser::StringContext* KeywordGrammarParser::ValassignmentContext::string() {
  return getRuleContext<KeywordGrammarParser::StringContext>(0);
}

tree::TerminalNode* KeywordGrammarParser::ValassignmentContext::INT() {
  return getToken(KeywordGrammarParser::INT, 0);
}

tree::TerminalNode* KeywordGrammarParser::ValassignmentContext::FLOAT() {
  return getToken(KeywordGrammarParser::FLOAT, 0);
}


size_t KeywordGrammarParser::ValassignmentContext::getRuleIndex() const {
  return KeywordGrammarParser::RuleValassignment;
}


std::any KeywordGrammarParser::ValassignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KeywordGrammarVisitor*>(visitor))
    return parserVisitor->visitValassignment(this);
  else
    return visitor->visitChildren(this);
}

KeywordGrammarParser::ValassignmentContext* KeywordGrammarParser::valassignment() {
  ValassignmentContext *_localctx = _tracker.createInstance<ValassignmentContext>(_ctx, getState());
  enterRule(_localctx, 36, KeywordGrammarParser::RuleValassignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(167);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(142);
      valIdentifier();
      setState(143);
      match(KeywordGrammarParser::T__10);
      setState(144);
      valIdentifier();
      setState(145);
      match(KeywordGrammarParser::T__0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(147);
      valIdentifier();
      setState(148);
      match(KeywordGrammarParser::T__10);
      setState(149);
      string();
      setState(150);
      match(KeywordGrammarParser::T__0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(152);
      valIdentifier();
      setState(153);
      match(KeywordGrammarParser::T__10);
      setState(154);
      string();
      setState(155);
      match(KeywordGrammarParser::T__0);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(157);
      valIdentifier();
      setState(158);
      match(KeywordGrammarParser::T__10);
      setState(159);
      match(KeywordGrammarParser::INT);
      setState(160);
      match(KeywordGrammarParser::T__0);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(162);
      valIdentifier();
      setState(163);
      match(KeywordGrammarParser::T__10);
      setState(164);
      match(KeywordGrammarParser::FLOAT);
      setState(165);
      match(KeywordGrammarParser::T__0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodcallContext ------------------------------------------------------------------

KeywordGrammarParser::MethodcallContext::MethodcallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KeywordGrammarParser::MethodIdentifierContext* KeywordGrammarParser::MethodcallContext::methodIdentifier() {
  return getRuleContext<KeywordGrammarParser::MethodIdentifierContext>(0);
}

KeywordGrammarParser::ParamenterlistContext* KeywordGrammarParser::MethodcallContext::paramenterlist() {
  return getRuleContext<KeywordGrammarParser::ParamenterlistContext>(0);
}


size_t KeywordGrammarParser::MethodcallContext::getRuleIndex() const {
  return KeywordGrammarParser::RuleMethodcall;
}


std::any KeywordGrammarParser::MethodcallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KeywordGrammarVisitor*>(visitor))
    return parserVisitor->visitMethodcall(this);
  else
    return visitor->visitChildren(this);
}

KeywordGrammarParser::MethodcallContext* KeywordGrammarParser::methodcall() {
  MethodcallContext *_localctx = _tracker.createInstance<MethodcallContext>(_ctx, getState());
  enterRule(_localctx, 38, KeywordGrammarParser::RuleMethodcall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(169);
    methodIdentifier();
    setState(170);
    match(KeywordGrammarParser::T__5);
    setState(171);
    paramenterlist();
    setState(172);
    match(KeywordGrammarParser::T__6);
    setState(173);
    match(KeywordGrammarParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ObjmethodcallContext ------------------------------------------------------------------

KeywordGrammarParser::ObjmethodcallContext::ObjmethodcallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KeywordGrammarParser::ObjectIdentifierContext* KeywordGrammarParser::ObjmethodcallContext::objectIdentifier() {
  return getRuleContext<KeywordGrammarParser::ObjectIdentifierContext>(0);
}

KeywordGrammarParser::MethodIdentifierContext* KeywordGrammarParser::ObjmethodcallContext::methodIdentifier() {
  return getRuleContext<KeywordGrammarParser::MethodIdentifierContext>(0);
}

KeywordGrammarParser::ParamenterlistContext* KeywordGrammarParser::ObjmethodcallContext::paramenterlist() {
  return getRuleContext<KeywordGrammarParser::ParamenterlistContext>(0);
}


size_t KeywordGrammarParser::ObjmethodcallContext::getRuleIndex() const {
  return KeywordGrammarParser::RuleObjmethodcall;
}


std::any KeywordGrammarParser::ObjmethodcallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KeywordGrammarVisitor*>(visitor))
    return parserVisitor->visitObjmethodcall(this);
  else
    return visitor->visitChildren(this);
}

KeywordGrammarParser::ObjmethodcallContext* KeywordGrammarParser::objmethodcall() {
  ObjmethodcallContext *_localctx = _tracker.createInstance<ObjmethodcallContext>(_ctx, getState());
  enterRule(_localctx, 40, KeywordGrammarParser::RuleObjmethodcall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(175);
    objectIdentifier();
    setState(176);
    match(KeywordGrammarParser::T__11);
    setState(177);
    methodIdentifier();
    setState(178);
    match(KeywordGrammarParser::T__5);
    setState(179);
    paramenterlist();
    setState(180);
    match(KeywordGrammarParser::T__6);
    setState(181);
    match(KeywordGrammarParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void KeywordGrammarParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  keywordgrammarParserInitialize();
#else
  ::antlr4::internal::call_once(keywordgrammarParserOnceFlag, keywordgrammarParserInitialize);
#endif
}
