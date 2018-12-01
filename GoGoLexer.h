
// Generated from GoGo.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  GoGoLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, TYPE = 10, VAR = 11, FUNC = 12, IF = 13, ELSE = 14, 
    ELSE_IF = 15, WHILE = 16, RETURN = 17, PRINT = 18, PRINTF = 19, MUL_OP = 20, 
    DIV_OP = 21, ADD_OP = 22, SUB_OP = 23, EQ_OP = 24, NE_OP = 25, LT_OP = 26, 
    LE_OP = 27, GT_OP = 28, GE_OP = 29, INC_OP = 30, DEC_OP = 31, DOUBLE = 32, 
    ID = 33, INT = 34, STRING = 35, NEWLINE = 36, WS = 37, COMMENT = 38
  };

  GoGoLexer(antlr4::CharStream *input);
  ~GoGoLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

