
// Generated from calc.g4 by ANTLR 4.13.1


#include "calcLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct CalcLexerStaticData final {
  CalcLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CalcLexerStaticData(const CalcLexerStaticData&) = delete;
  CalcLexerStaticData(CalcLexerStaticData&&) = delete;
  CalcLexerStaticData& operator=(const CalcLexerStaticData&) = delete;
  CalcLexerStaticData& operator=(CalcLexerStaticData&&) = delete;

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

::antlr4::internal::OnceFlag calclexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
CalcLexerStaticData *calclexerLexerStaticData = nullptr;

void calclexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (calclexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(calclexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<CalcLexerStaticData>(
    std::vector<std::string>{
      "LPAREN", "RPAREN", "ADD", "SUB", "MUL", "DIV", "NUMBER", "RET", "WHITE_SPACE"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'('", "')'", "'+'", "'-'", "'*'", "'/'"
    },
    std::vector<std::string>{
      "", "LPAREN", "RPAREN", "ADD", "SUB", "MUL", "DIV", "NUMBER", "RET", 
      "WHITE_SPACE"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,9,71,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,
  	2,7,7,7,2,8,7,8,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,6,4,
  	6,33,8,6,11,6,12,6,34,1,6,4,6,38,8,6,11,6,12,6,39,1,6,1,6,5,6,44,8,6,
  	10,6,12,6,47,9,6,1,6,5,6,50,8,6,10,6,12,6,53,9,6,1,6,1,6,4,6,57,8,6,11,
  	6,12,6,58,3,6,61,8,6,1,7,1,7,1,7,3,7,66,8,7,1,8,1,8,1,8,1,8,0,0,9,1,1,
  	3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,1,0,3,1,0,48,57,2,0,10,10,13,13,2,
  	0,9,9,32,32,78,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,
  	0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,1,19,1,0,0,
  	0,3,21,1,0,0,0,5,23,1,0,0,0,7,25,1,0,0,0,9,27,1,0,0,0,11,29,1,0,0,0,13,
  	60,1,0,0,0,15,65,1,0,0,0,17,67,1,0,0,0,19,20,5,40,0,0,20,2,1,0,0,0,21,
  	22,5,41,0,0,22,4,1,0,0,0,23,24,5,43,0,0,24,6,1,0,0,0,25,26,5,45,0,0,26,
  	8,1,0,0,0,27,28,5,42,0,0,28,10,1,0,0,0,29,30,5,47,0,0,30,12,1,0,0,0,31,
  	33,7,0,0,0,32,31,1,0,0,0,33,34,1,0,0,0,34,32,1,0,0,0,34,35,1,0,0,0,35,
  	61,1,0,0,0,36,38,7,0,0,0,37,36,1,0,0,0,38,39,1,0,0,0,39,37,1,0,0,0,39,
  	40,1,0,0,0,40,41,1,0,0,0,41,45,5,46,0,0,42,44,7,0,0,0,43,42,1,0,0,0,44,
  	47,1,0,0,0,45,43,1,0,0,0,45,46,1,0,0,0,46,61,1,0,0,0,47,45,1,0,0,0,48,
  	50,7,0,0,0,49,48,1,0,0,0,50,53,1,0,0,0,51,49,1,0,0,0,51,52,1,0,0,0,52,
  	54,1,0,0,0,53,51,1,0,0,0,54,56,5,46,0,0,55,57,7,0,0,0,56,55,1,0,0,0,57,
  	58,1,0,0,0,58,56,1,0,0,0,58,59,1,0,0,0,59,61,1,0,0,0,60,32,1,0,0,0,60,
  	37,1,0,0,0,60,51,1,0,0,0,61,14,1,0,0,0,62,63,5,13,0,0,63,66,5,10,0,0,
  	64,66,7,1,0,0,65,62,1,0,0,0,65,64,1,0,0,0,66,16,1,0,0,0,67,68,7,2,0,0,
  	68,69,1,0,0,0,69,70,6,8,0,0,70,18,1,0,0,0,8,0,34,39,45,51,58,60,65,1,
  	6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  calclexerLexerStaticData = staticData.release();
}

}

calcLexer::calcLexer(CharStream *input) : Lexer(input) {
  calcLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *calclexerLexerStaticData->atn, calclexerLexerStaticData->decisionToDFA, calclexerLexerStaticData->sharedContextCache);
}

calcLexer::~calcLexer() {
  delete _interpreter;
}

std::string calcLexer::getGrammarFileName() const {
  return "calc.g4";
}

const std::vector<std::string>& calcLexer::getRuleNames() const {
  return calclexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& calcLexer::getChannelNames() const {
  return calclexerLexerStaticData->channelNames;
}

const std::vector<std::string>& calcLexer::getModeNames() const {
  return calclexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& calcLexer::getVocabulary() const {
  return calclexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView calcLexer::getSerializedATN() const {
  return calclexerLexerStaticData->serializedATN;
}

const atn::ATN& calcLexer::getATN() const {
  return *calclexerLexerStaticData->atn;
}




void calcLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  calclexerLexerInitialize();
#else
  ::antlr4::internal::call_once(calclexerLexerOnceFlag, calclexerLexerInitialize);
#endif
}
