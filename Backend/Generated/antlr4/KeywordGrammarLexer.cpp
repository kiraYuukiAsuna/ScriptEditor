
// Generated from ./antlr4/KeywordGrammar.g4 by ANTLR 4.13.1


#include "KeywordGrammarLexer.h"


using namespace antlr4;

using namespace Keyword;


using namespace antlr4;

namespace {

struct KeywordGrammarLexerStaticData final {
  KeywordGrammarLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  KeywordGrammarLexerStaticData(const KeywordGrammarLexerStaticData&) = delete;
  KeywordGrammarLexerStaticData(KeywordGrammarLexerStaticData&&) = delete;
  KeywordGrammarLexerStaticData& operator=(const KeywordGrammarLexerStaticData&) = delete;
  KeywordGrammarLexerStaticData& operator=(KeywordGrammarLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag keywordgrammarlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
KeywordGrammarLexerStaticData *keywordgrammarlexerLexerStaticData = nullptr;

void keywordgrammarlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (keywordgrammarlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(keywordgrammarlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<KeywordGrammarLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T__10", "T__11", "WS", "NEWLINE", "Digit", "NAME", "INT", 
      "FLOAT"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,18,110,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,
  	3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,
  	1,8,1,8,1,9,1,9,1,9,1,9,1,10,1,10,1,11,1,11,1,12,4,12,75,8,12,11,12,12,
  	12,76,1,12,1,12,1,13,1,13,1,13,1,13,1,14,1,14,1,15,1,15,5,15,89,8,15,
  	10,15,12,15,92,9,15,1,16,4,16,95,8,16,11,16,12,16,96,1,17,4,17,100,8,
  	17,11,17,12,17,101,1,17,1,17,5,17,106,8,17,10,17,12,17,109,9,17,0,0,18,
  	1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,
  	29,15,31,16,33,17,35,18,1,0,5,3,0,9,9,12,13,32,32,1,0,10,10,1,0,48,57,
  	3,0,65,90,95,95,97,122,4,0,48,57,65,90,95,95,97,122,114,0,1,1,0,0,0,0,
  	3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,
  	0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,
  	25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,
  	0,0,0,1,37,1,0,0,0,3,39,1,0,0,0,5,41,1,0,0,0,7,43,1,0,0,0,9,50,1,0,0,
  	0,11,57,1,0,0,0,13,59,1,0,0,0,15,61,1,0,0,0,17,63,1,0,0,0,19,65,1,0,0,
  	0,21,69,1,0,0,0,23,71,1,0,0,0,25,74,1,0,0,0,27,80,1,0,0,0,29,84,1,0,0,
  	0,31,86,1,0,0,0,33,94,1,0,0,0,35,99,1,0,0,0,37,38,5,59,0,0,38,2,1,0,0,
  	0,39,40,5,34,0,0,40,4,1,0,0,0,41,42,5,44,0,0,42,6,1,0,0,0,43,44,5,111,
  	0,0,44,45,5,98,0,0,45,46,5,106,0,0,46,47,5,101,0,0,47,48,5,99,0,0,48,
  	49,5,116,0,0,49,8,1,0,0,0,50,51,5,109,0,0,51,52,5,101,0,0,52,53,5,116,
  	0,0,53,54,5,104,0,0,54,55,5,111,0,0,55,56,5,100,0,0,56,10,1,0,0,0,57,
  	58,5,40,0,0,58,12,1,0,0,0,59,60,5,41,0,0,60,14,1,0,0,0,61,62,5,123,0,
  	0,62,16,1,0,0,0,63,64,5,125,0,0,64,18,1,0,0,0,65,66,5,118,0,0,66,67,5,
  	97,0,0,67,68,5,108,0,0,68,20,1,0,0,0,69,70,5,61,0,0,70,22,1,0,0,0,71,
  	72,5,46,0,0,72,24,1,0,0,0,73,75,7,0,0,0,74,73,1,0,0,0,75,76,1,0,0,0,76,
  	74,1,0,0,0,76,77,1,0,0,0,77,78,1,0,0,0,78,79,6,12,0,0,79,26,1,0,0,0,80,
  	81,7,1,0,0,81,82,1,0,0,0,82,83,6,13,0,0,83,28,1,0,0,0,84,85,7,2,0,0,85,
  	30,1,0,0,0,86,90,7,3,0,0,87,89,7,4,0,0,88,87,1,0,0,0,89,92,1,0,0,0,90,
  	88,1,0,0,0,90,91,1,0,0,0,91,32,1,0,0,0,92,90,1,0,0,0,93,95,3,29,14,0,
  	94,93,1,0,0,0,95,96,1,0,0,0,96,94,1,0,0,0,96,97,1,0,0,0,97,34,1,0,0,0,
  	98,100,3,29,14,0,99,98,1,0,0,0,100,101,1,0,0,0,101,99,1,0,0,0,101,102,
  	1,0,0,0,102,103,1,0,0,0,103,107,5,46,0,0,104,106,3,29,14,0,105,104,1,
  	0,0,0,106,109,1,0,0,0,107,105,1,0,0,0,107,108,1,0,0,0,108,36,1,0,0,0,
  	109,107,1,0,0,0,6,0,76,90,96,101,107,1,0,1,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  keywordgrammarlexerLexerStaticData = staticData.release();
}

}

KeywordGrammarLexer::KeywordGrammarLexer(CharStream *input) : Lexer(input) {
  KeywordGrammarLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *keywordgrammarlexerLexerStaticData->atn, keywordgrammarlexerLexerStaticData->decisionToDFA, keywordgrammarlexerLexerStaticData->sharedContextCache);
}

KeywordGrammarLexer::~KeywordGrammarLexer() {
  delete _interpreter;
}

std::string KeywordGrammarLexer::getGrammarFileName() const {
  return "KeywordGrammar.g4";
}

const std::vector<std::string>& KeywordGrammarLexer::getRuleNames() const {
  return keywordgrammarlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& KeywordGrammarLexer::getChannelNames() const {
  return keywordgrammarlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& KeywordGrammarLexer::getModeNames() const {
  return keywordgrammarlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& KeywordGrammarLexer::getVocabulary() const {
  return keywordgrammarlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView KeywordGrammarLexer::getSerializedATN() const {
  return keywordgrammarlexerLexerStaticData->serializedATN;
}

const atn::ATN& KeywordGrammarLexer::getATN() const {
  return *keywordgrammarlexerLexerStaticData->atn;
}




void KeywordGrammarLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  keywordgrammarlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(keywordgrammarlexerLexerOnceFlag, keywordgrammarlexerLexerInitialize);
#endif
}
