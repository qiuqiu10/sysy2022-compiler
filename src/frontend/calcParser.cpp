
// Generated from calc.g4 by ANTLR 4.13.1


#include "calcListener.h"

#include "calcParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct CalcParserStaticData final {
  CalcParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CalcParserStaticData(const CalcParserStaticData&) = delete;
  CalcParserStaticData(CalcParserStaticData&&) = delete;
  CalcParserStaticData& operator=(const CalcParserStaticData&) = delete;
  CalcParserStaticData& operator=(CalcParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag calcParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
CalcParserStaticData *calcParserStaticData = nullptr;

void calcParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (calcParserStaticData != nullptr) {
    return;
  }
#else
  assert(calcParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<CalcParserStaticData>(
    std::vector<std::string>{
      "calculator", "line", "expr"
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
  	4,1,9,41,2,0,7,0,2,1,7,1,2,2,7,2,1,0,5,0,8,8,0,10,0,12,0,11,9,0,1,1,1,
  	1,1,1,1,2,1,2,1,2,1,2,1,2,1,2,3,2,22,8,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,
  	1,2,1,2,1,2,1,2,1,2,5,2,36,8,2,10,2,12,2,39,9,2,1,2,0,1,4,3,0,2,4,0,0,
  	43,0,9,1,0,0,0,2,12,1,0,0,0,4,21,1,0,0,0,6,8,3,2,1,0,7,6,1,0,0,0,8,11,
  	1,0,0,0,9,7,1,0,0,0,9,10,1,0,0,0,10,1,1,0,0,0,11,9,1,0,0,0,12,13,3,4,
  	2,0,13,14,5,8,0,0,14,3,1,0,0,0,15,16,6,2,-1,0,16,22,5,7,0,0,17,18,5,1,
  	0,0,18,19,3,4,2,0,19,20,5,2,0,0,20,22,1,0,0,0,21,15,1,0,0,0,21,17,1,0,
  	0,0,22,37,1,0,0,0,23,24,10,6,0,0,24,25,5,5,0,0,25,36,3,4,2,7,26,27,10,
  	5,0,0,27,28,5,6,0,0,28,36,3,4,2,6,29,30,10,4,0,0,30,31,5,3,0,0,31,36,
  	3,4,2,5,32,33,10,3,0,0,33,34,5,4,0,0,34,36,3,4,2,4,35,23,1,0,0,0,35,26,
  	1,0,0,0,35,29,1,0,0,0,35,32,1,0,0,0,36,39,1,0,0,0,37,35,1,0,0,0,37,38,
  	1,0,0,0,38,5,1,0,0,0,39,37,1,0,0,0,4,9,21,35,37
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  calcParserStaticData = staticData.release();
}

}

calcParser::calcParser(TokenStream *input) : calcParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

calcParser::calcParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  calcParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *calcParserStaticData->atn, calcParserStaticData->decisionToDFA, calcParserStaticData->sharedContextCache, options);
}

calcParser::~calcParser() {
  delete _interpreter;
}

const atn::ATN& calcParser::getATN() const {
  return *calcParserStaticData->atn;
}

std::string calcParser::getGrammarFileName() const {
  return "calc.g4";
}

const std::vector<std::string>& calcParser::getRuleNames() const {
  return calcParserStaticData->ruleNames;
}

const dfa::Vocabulary& calcParser::getVocabulary() const {
  return calcParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView calcParser::getSerializedATN() const {
  return calcParserStaticData->serializedATN;
}


//----------------- CalculatorContext ------------------------------------------------------------------

calcParser::CalculatorContext::CalculatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<calcParser::LineContext *> calcParser::CalculatorContext::line() {
  return getRuleContexts<calcParser::LineContext>();
}

calcParser::LineContext* calcParser::CalculatorContext::line(size_t i) {
  return getRuleContext<calcParser::LineContext>(i);
}


size_t calcParser::CalculatorContext::getRuleIndex() const {
  return calcParser::RuleCalculator;
}

void calcParser::CalculatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCalculator(this);
}

void calcParser::CalculatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCalculator(this);
}

calcParser::CalculatorContext* calcParser::calculator() {
  CalculatorContext *_localctx = _tracker.createInstance<CalculatorContext>(_ctx, getState());
  enterRule(_localctx, 0, calcParser::RuleCalculator);
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
    setState(9);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == calcParser::LPAREN

    || _la == calcParser::NUMBER) {
      setState(6);
      line();
      setState(11);
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

//----------------- LineContext ------------------------------------------------------------------

calcParser::LineContext::LineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

calcParser::ExprContext* calcParser::LineContext::expr() {
  return getRuleContext<calcParser::ExprContext>(0);
}

tree::TerminalNode* calcParser::LineContext::RET() {
  return getToken(calcParser::RET, 0);
}


size_t calcParser::LineContext::getRuleIndex() const {
  return calcParser::RuleLine;
}

void calcParser::LineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLine(this);
}

void calcParser::LineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLine(this);
}

calcParser::LineContext* calcParser::line() {
  LineContext *_localctx = _tracker.createInstance<LineContext>(_ctx, getState());
  enterRule(_localctx, 2, calcParser::RuleLine);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(12);
    expr(0);
    setState(13);
    match(calcParser::RET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

calcParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* calcParser::ExprContext::NUMBER() {
  return getToken(calcParser::NUMBER, 0);
}

tree::TerminalNode* calcParser::ExprContext::LPAREN() {
  return getToken(calcParser::LPAREN, 0);
}

std::vector<calcParser::ExprContext *> calcParser::ExprContext::expr() {
  return getRuleContexts<calcParser::ExprContext>();
}

calcParser::ExprContext* calcParser::ExprContext::expr(size_t i) {
  return getRuleContext<calcParser::ExprContext>(i);
}

tree::TerminalNode* calcParser::ExprContext::RPAREN() {
  return getToken(calcParser::RPAREN, 0);
}

tree::TerminalNode* calcParser::ExprContext::MUL() {
  return getToken(calcParser::MUL, 0);
}

tree::TerminalNode* calcParser::ExprContext::DIV() {
  return getToken(calcParser::DIV, 0);
}

tree::TerminalNode* calcParser::ExprContext::ADD() {
  return getToken(calcParser::ADD, 0);
}

tree::TerminalNode* calcParser::ExprContext::SUB() {
  return getToken(calcParser::SUB, 0);
}


size_t calcParser::ExprContext::getRuleIndex() const {
  return calcParser::RuleExpr;
}

void calcParser::ExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr(this);
}

void calcParser::ExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<calcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr(this);
}


calcParser::ExprContext* calcParser::expr() {
   return expr(0);
}

calcParser::ExprContext* calcParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  calcParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  calcParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, calcParser::RuleExpr, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(21);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case calcParser::NUMBER: {
        setState(16);
        match(calcParser::NUMBER);
        break;
      }

      case calcParser::LPAREN: {
        setState(17);
        match(calcParser::LPAREN);
        setState(18);
        expr(0);
        setState(19);
        match(calcParser::RPAREN);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(37);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(35);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(23);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(24);
          match(calcParser::MUL);
          setState(25);
          expr(7);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(26);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(27);
          match(calcParser::DIV);
          setState(28);
          expr(6);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(29);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(30);
          match(calcParser::ADD);
          setState(31);
          expr(5);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(32);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(33);
          match(calcParser::SUB);
          setState(34);
          expr(4);
          break;
        }

        default:
          break;
        } 
      }
      setState(39);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool calcParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 2: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool calcParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 6);
    case 1: return precpred(_ctx, 5);
    case 2: return precpred(_ctx, 4);
    case 3: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

void calcParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  calcParserInitialize();
#else
  ::antlr4::internal::call_once(calcParserOnceFlag, calcParserInitialize);
#endif
}
