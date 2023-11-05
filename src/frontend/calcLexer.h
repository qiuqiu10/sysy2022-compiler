
// Generated from calc.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  calcLexer : public antlr4::Lexer {
public:
  enum {
    LPAREN = 1, RPAREN = 2, ADD = 3, SUB = 4, MUL = 5, DIV = 6, NUMBER = 7, 
    RET = 8, WHITE_SPACE = 9
  };

  explicit calcLexer(antlr4::CharStream *input);

  ~calcLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

