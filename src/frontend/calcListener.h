
// Generated from calc.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "calcParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by calcParser.
 */
class  calcListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterCalculator(calcParser::CalculatorContext *ctx) = 0;
  virtual void exitCalculator(calcParser::CalculatorContext *ctx) = 0;

  virtual void enterLine(calcParser::LineContext *ctx) = 0;
  virtual void exitLine(calcParser::LineContext *ctx) = 0;

  virtual void enterExpr(calcParser::ExprContext *ctx) = 0;
  virtual void exitExpr(calcParser::ExprContext *ctx) = 0;


};

