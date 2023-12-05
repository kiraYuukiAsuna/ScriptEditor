
// Generated from ./antlr4/KeywordGrammar.g4 by ANTLR 4.13.1


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
  	4,1,18,185,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,1,0,1,
  	0,1,0,1,1,1,1,1,2,5,2,49,8,2,10,2,12,2,52,9,2,1,3,1,3,1,3,1,3,1,3,1,3,
  	1,3,1,3,1,3,3,3,63,8,3,1,4,1,4,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,8,1,
  	8,1,9,1,9,1,10,1,10,1,10,1,10,3,10,83,8,10,1,11,5,11,86,8,11,10,11,12,
  	11,89,9,11,1,11,1,11,5,11,93,8,11,10,11,12,11,96,9,11,1,12,1,12,1,12,
  	1,13,5,13,102,8,13,10,13,12,13,105,9,13,1,13,1,13,5,13,109,8,13,10,13,
  	12,13,112,9,13,1,14,1,14,1,14,1,14,1,15,1,15,1,15,1,15,1,15,1,15,1,15,
  	1,15,1,15,1,15,1,15,1,15,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,
  	1,17,1,17,1,17,1,17,1,17,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,
  	1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,
  	1,18,1,18,3,18,169,8,18,1,19,1,19,1,19,1,19,1,19,1,19,1,20,1,20,1,20,
  	1,20,1,20,1,20,1,20,1,20,1,20,0,0,21,0,2,4,6,8,10,12,14,16,18,20,22,24,
  	26,28,30,32,34,36,38,40,0,0,183,0,42,1,0,0,0,2,45,1,0,0,0,4,50,1,0,0,
  	0,6,62,1,0,0,0,8,64,1,0,0,0,10,68,1,0,0,0,12,70,1,0,0,0,14,72,1,0,0,0,
  	16,74,1,0,0,0,18,76,1,0,0,0,20,82,1,0,0,0,22,87,1,0,0,0,24,97,1,0,0,0,
  	26,103,1,0,0,0,28,113,1,0,0,0,30,117,1,0,0,0,32,129,1,0,0,0,34,138,1,
  	0,0,0,36,168,1,0,0,0,38,170,1,0,0,0,40,176,1,0,0,0,42,43,3,2,1,0,43,44,
  	5,0,0,1,44,1,1,0,0,0,45,46,3,4,2,0,46,3,1,0,0,0,47,49,3,6,3,0,48,47,1,
  	0,0,0,49,52,1,0,0,0,50,48,1,0,0,0,50,51,1,0,0,0,51,5,1,0,0,0,52,50,1,
  	0,0,0,53,63,5,14,0,0,54,63,5,1,0,0,55,63,3,28,14,0,56,63,3,30,15,0,57,
  	63,3,32,16,0,58,63,3,34,17,0,59,63,3,36,18,0,60,63,3,38,19,0,61,63,3,
  	40,20,0,62,53,1,0,0,0,62,54,1,0,0,0,62,55,1,0,0,0,62,56,1,0,0,0,62,57,
  	1,0,0,0,62,58,1,0,0,0,62,59,1,0,0,0,62,60,1,0,0,0,62,61,1,0,0,0,63,7,
  	1,0,0,0,64,65,5,2,0,0,65,66,5,16,0,0,66,67,5,2,0,0,67,9,1,0,0,0,68,69,
  	5,16,0,0,69,11,1,0,0,0,70,71,3,10,5,0,71,13,1,0,0,0,72,73,3,10,5,0,73,
  	15,1,0,0,0,74,75,3,10,5,0,75,17,1,0,0,0,76,77,3,10,5,0,77,19,1,0,0,0,
  	78,83,3,10,5,0,79,83,3,8,4,0,80,83,5,17,0,0,81,83,5,18,0,0,82,78,1,0,
  	0,0,82,79,1,0,0,0,82,80,1,0,0,0,82,81,1,0,0,0,83,21,1,0,0,0,84,86,3,20,
  	10,0,85,84,1,0,0,0,86,89,1,0,0,0,87,85,1,0,0,0,87,88,1,0,0,0,88,94,1,
  	0,0,0,89,87,1,0,0,0,90,91,5,3,0,0,91,93,3,20,10,0,92,90,1,0,0,0,93,96,
  	1,0,0,0,94,92,1,0,0,0,94,95,1,0,0,0,95,23,1,0,0,0,96,94,1,0,0,0,97,98,
  	3,18,9,0,98,99,3,20,10,0,99,25,1,0,0,0,100,102,3,24,12,0,101,100,1,0,
  	0,0,102,105,1,0,0,0,103,101,1,0,0,0,103,104,1,0,0,0,104,110,1,0,0,0,105,
  	103,1,0,0,0,106,107,5,3,0,0,107,109,3,24,12,0,108,106,1,0,0,0,109,112,
  	1,0,0,0,110,108,1,0,0,0,110,111,1,0,0,0,111,27,1,0,0,0,112,110,1,0,0,
  	0,113,114,5,4,0,0,114,115,3,12,6,0,115,116,5,1,0,0,116,29,1,0,0,0,117,
  	118,5,5,0,0,118,119,5,6,0,0,119,120,3,12,6,0,120,121,5,7,0,0,121,122,
  	3,14,7,0,122,123,5,6,0,0,123,124,3,26,13,0,124,125,5,7,0,0,125,126,5,
  	8,0,0,126,127,3,4,2,0,127,128,5,9,0,0,128,31,1,0,0,0,129,130,5,5,0,0,
  	130,131,3,14,7,0,131,132,5,6,0,0,132,133,3,26,13,0,133,134,5,7,0,0,134,
  	135,5,8,0,0,135,136,3,4,2,0,136,137,5,9,0,0,137,33,1,0,0,0,138,139,5,
  	10,0,0,139,140,3,18,9,0,140,141,3,16,8,0,141,142,5,1,0,0,142,35,1,0,0,
  	0,143,144,3,16,8,0,144,145,5,11,0,0,145,146,3,16,8,0,146,147,5,1,0,0,
  	147,169,1,0,0,0,148,149,3,16,8,0,149,150,5,11,0,0,150,151,3,8,4,0,151,
  	152,5,1,0,0,152,169,1,0,0,0,153,154,3,16,8,0,154,155,5,11,0,0,155,156,
  	3,8,4,0,156,157,5,1,0,0,157,169,1,0,0,0,158,159,3,16,8,0,159,160,5,11,
  	0,0,160,161,5,17,0,0,161,162,5,1,0,0,162,169,1,0,0,0,163,164,3,16,8,0,
  	164,165,5,11,0,0,165,166,5,18,0,0,166,167,5,1,0,0,167,169,1,0,0,0,168,
  	143,1,0,0,0,168,148,1,0,0,0,168,153,1,0,0,0,168,158,1,0,0,0,168,163,1,
  	0,0,0,169,37,1,0,0,0,170,171,3,14,7,0,171,172,5,6,0,0,172,173,3,22,11,
  	0,173,174,5,7,0,0,174,175,5,1,0,0,175,39,1,0,0,0,176,177,3,12,6,0,177,
  	178,5,12,0,0,178,179,3,14,7,0,179,180,5,6,0,0,180,181,3,22,11,0,181,182,
  	5,7,0,0,182,183,5,1,0,0,183,41,1,0,0,0,8,50,62,82,87,94,103,110,168
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
      ((1ULL << _la) & 82994) != 0)) {
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

tree::TerminalNode* KeywordGrammarParser::StatContext::NEWLINE() {
  return getToken(KeywordGrammarParser::NEWLINE, 0);
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
    setState(62);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(53);
      match(KeywordGrammarParser::NEWLINE);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(54);
      match(KeywordGrammarParser::T__0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(55);
      objectdef();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(56);
      objmethoddef();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(57);
      methoddef();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(58);
      valdef();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(59);
      valassignment();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(60);
      methodcall();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(61);
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
    setState(64);
    match(KeywordGrammarParser::T__1);
    setState(65);
    match(KeywordGrammarParser::NAME);
    setState(66);
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
    setState(68);
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
    setState(70);
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
    setState(72);
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
    setState(74);
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
    setState(76);
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
    setState(82);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KeywordGrammarParser::NAME: {
        enterOuterAlt(_localctx, 1);
        setState(78);
        identifier();
        break;
      }

      case KeywordGrammarParser::T__1: {
        enterOuterAlt(_localctx, 2);
        setState(79);
        string();
        break;
      }

      case KeywordGrammarParser::INT: {
        enterOuterAlt(_localctx, 3);
        setState(80);
        match(KeywordGrammarParser::INT);
        break;
      }

      case KeywordGrammarParser::FLOAT: {
        enterOuterAlt(_localctx, 4);
        setState(81);
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
    setState(87);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 458756) != 0)) {
      setState(84);
      paramenter();
      setState(89);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(94);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KeywordGrammarParser::T__2) {
      setState(90);
      match(KeywordGrammarParser::T__2);
      setState(91);
      paramenter();
      setState(96);
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
    setState(97);
    typeIdentifier();
    setState(98);
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
    setState(103);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KeywordGrammarParser::NAME) {
      setState(100);
      paramenterDef();
      setState(105);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(110);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KeywordGrammarParser::T__2) {
      setState(106);
      match(KeywordGrammarParser::T__2);
      setState(107);
      paramenterDef();
      setState(112);
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
    setState(113);
    match(KeywordGrammarParser::T__3);
    setState(114);
    objectIdentifier();
    setState(115);
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
    setState(117);
    match(KeywordGrammarParser::T__4);
    setState(118);
    match(KeywordGrammarParser::T__5);
    setState(119);
    objectIdentifier();
    setState(120);
    match(KeywordGrammarParser::T__6);
    setState(121);
    methodIdentifier();
    setState(122);
    match(KeywordGrammarParser::T__5);
    setState(123);
    paramenterDeflist();
    setState(124);
    match(KeywordGrammarParser::T__6);
    setState(125);
    match(KeywordGrammarParser::T__7);
    setState(126);
    block();
    setState(127);
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
    setState(129);
    match(KeywordGrammarParser::T__4);
    setState(130);
    methodIdentifier();
    setState(131);
    match(KeywordGrammarParser::T__5);
    setState(132);
    paramenterDeflist();
    setState(133);
    match(KeywordGrammarParser::T__6);
    setState(134);
    match(KeywordGrammarParser::T__7);
    setState(135);
    block();
    setState(136);
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
    setState(138);
    match(KeywordGrammarParser::T__9);
    setState(139);
    typeIdentifier();
    setState(140);
    valIdentifier();
    setState(141);
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
    setState(168);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(143);
      valIdentifier();
      setState(144);
      match(KeywordGrammarParser::T__10);
      setState(145);
      valIdentifier();
      setState(146);
      match(KeywordGrammarParser::T__0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(148);
      valIdentifier();
      setState(149);
      match(KeywordGrammarParser::T__10);
      setState(150);
      string();
      setState(151);
      match(KeywordGrammarParser::T__0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(153);
      valIdentifier();
      setState(154);
      match(KeywordGrammarParser::T__10);
      setState(155);
      string();
      setState(156);
      match(KeywordGrammarParser::T__0);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(158);
      valIdentifier();
      setState(159);
      match(KeywordGrammarParser::T__10);
      setState(160);
      match(KeywordGrammarParser::INT);
      setState(161);
      match(KeywordGrammarParser::T__0);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(163);
      valIdentifier();
      setState(164);
      match(KeywordGrammarParser::T__10);
      setState(165);
      match(KeywordGrammarParser::FLOAT);
      setState(166);
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
    setState(170);
    methodIdentifier();
    setState(171);
    match(KeywordGrammarParser::T__5);
    setState(172);
    paramenterlist();
    setState(173);
    match(KeywordGrammarParser::T__6);
    setState(174);
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
    setState(176);
    objectIdentifier();
    setState(177);
    match(KeywordGrammarParser::T__11);
    setState(178);
    methodIdentifier();
    setState(179);
    match(KeywordGrammarParser::T__5);
    setState(180);
    paramenterlist();
    setState(181);
    match(KeywordGrammarParser::T__6);
    setState(182);
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
