
// Generated from calc.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "calcListener.h"


/**
 * This class provides an empty implementation of calcListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  calcBaseListener : public calcListener {
public:

  virtual void enterCalculator(calcParser::CalculatorContext * /*ctx*/) override { }
  virtual void exitCalculator(calcParser::CalculatorContext * /*ctx*/) override { }

  virtual void enterLine(calcParser::LineContext * /*ctx*/) override { }
  virtual void exitLine(calcParser::LineContext * /*ctx*/) override { }

  virtual void enterExpr(calcParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(calcParser::ExprContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

