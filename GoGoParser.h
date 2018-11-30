
// Generated from GoGo.g4 by ANTLR 4.7.1
#include "wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;
#pragma once


#include "antlr4-runtime.h"




class  GoGoParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, TYPE = 10, VAR = 11, FUNC = 12, IF = 13, ELSE = 14, 
    ELSE_IF = 15, WHILE = 16, RETURN = 17, PRINT = 18, PRINTF = 19, MUL_OP = 20, 
    DIV_OP = 21, ADD_OP = 22, SUB_OP = 23, EQ_OP = 24, NE_OP = 25, LT_OP = 26, 
    LE_OP = 27, GT_OP = 28, GE_OP = 29, INC_OP = 30, DEC_OP = 31, DOUBLE = 32, 
    ID = 33, INT = 34, STRING = 35, NEWLINE = 36, WS = 37, COMMENT = 38
  };

  enum {
    RuleProg = 0, RuleStat = 1, RuleExpr = 2, RuleVariable = 3, RuleNumber = 4, 
    RuleDeclaration = 5, RuleDeclaration_implicit = 6, RuleFunc_definition = 7, 
    RuleFunc_call = 8, RuleFunc_call_params = 9, RuleParam = 10, RuleParams = 11, 
    RuleCompound_stmt = 12, RuleIf_stmt = 13, RuleElse_stmt = 14, RuleElse_if_stmt = 15, 
    RuleWhile_loop_stmt = 16, RuleAssignment_stmt = 17, RuleInc_dec = 18, 
    RuleRtrn_stmt = 19, RulePrint_stmt = 20, RulePrintf_stmt = 21, RuleMul_div_op = 22, 
    RuleAdd_sub_op = 23, RuleRel_op = 24, RuleInc_dec_op = 25
  };

  GoGoParser(antlr4::TokenStream *input);
  ~GoGoParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgContext;
  class StatContext;
  class ExprContext;
  class VariableContext;
  class NumberContext;
  class DeclarationContext;
  class Declaration_implicitContext;
  class Func_definitionContext;
  class Func_callContext;
  class Func_call_paramsContext;
  class ParamContext;
  class ParamsContext;
  class Compound_stmtContext;
  class If_stmtContext;
  class Else_stmtContext;
  class Else_if_stmtContext;
  class While_loop_stmtContext;
  class Assignment_stmtContext;
  class Inc_decContext;
  class Rtrn_stmtContext;
  class Print_stmtContext;
  class Printf_stmtContext;
  class Mul_div_opContext;
  class Add_sub_opContext;
  class Rel_opContext;
  class Inc_dec_opContext; 

  class  ProgContext : public antlr4::ParserRuleContext {
  public:
    ProgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatContext *> stat();
    StatContext* stat(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgContext* prog();

  class  StatContext : public antlr4::ParserRuleContext {
  public:
    StatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Inc_decContext *inc_dec();
    ExprContext *expr();
    Assignment_stmtContext *assignment_stmt();
    DeclarationContext *declaration();
    Declaration_implicitContext *declaration_implicit();
    If_stmtContext *if_stmt();
    Func_definitionContext *func_definition();
    While_loop_stmtContext *while_loop_stmt();
    Func_callContext *func_call();
    Rtrn_stmtContext *rtrn_stmt();
    Printf_stmtContext *printf_stmt();
    Print_stmtContext *print_stmt();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatContext* stat();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    TypeSpec * type = nullptr;
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() : antlr4::ParserRuleContext() { }
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  VarExprContext : public ExprContext {
  public:
    VarExprContext(ExprContext *ctx);

    VariableContext *variable();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParensContext : public ExprContext {
  public:
    ParensContext(ExprContext *ctx);

    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MulDivContext : public ExprContext {
  public:
    MulDivContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    Mul_div_opContext *mul_div_op();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AddSubContext : public ExprContext {
  public:
    AddSubContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    Add_sub_opContext *add_sub_op();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumberExprContext : public ExprContext {
  public:
    NumberExprContext(ExprContext *ctx);

    NumberContext *number();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RelativeContext : public ExprContext {
  public:
    RelativeContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    Rel_opContext *rel_op();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableContext* variable();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    TypeSpec * type = nullptr;
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    NumberContext() : antlr4::ParserRuleContext() { }
    void copyFrom(NumberContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DoubleConstContext : public NumberContext {
  public:
    DoubleConstContext(NumberContext *ctx);

    antlr4::tree::TerminalNode *DOUBLE();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IntegerConstContext : public NumberContext {
  public:
    IntegerConstContext(NumberContext *ctx);

    antlr4::tree::TerminalNode *INT();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  NumberContext* number();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *DOUBLE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationContext* declaration();

  class  Declaration_implicitContext : public antlr4::ParserRuleContext {
  public:
    Declaration_implicitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *DOUBLE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Declaration_implicitContext* declaration_implicit();

  class  Func_definitionContext : public antlr4::ParserRuleContext {
  public:
    Func_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNC();
    antlr4::tree::TerminalNode *ID();
    ParamsContext *params();
    Compound_stmtContext *compound_stmt();
    antlr4::tree::TerminalNode *TYPE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_definitionContext* func_definition();

  class  Func_callContext : public antlr4::ParserRuleContext {
  public:
    Func_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    Func_call_paramsContext *func_call_params();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_callContext* func_call();

  class  Func_call_paramsContext : public antlr4::ParserRuleContext {
  public:
    Func_call_paramsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_call_paramsContext* func_call_params();

  class  ParamContext : public antlr4::ParserRuleContext {
  public:
    ParamContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *TYPE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParamContext* param();

  class  ParamsContext : public antlr4::ParserRuleContext {
  public:
    ParamsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParamContext *> param();
    ParamContext* param(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParamsContext* params();

  class  Compound_stmtContext : public antlr4::ParserRuleContext {
  public:
    Compound_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatContext *> stat();
    StatContext* stat(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Compound_stmtContext* compound_stmt();

  class  If_stmtContext : public antlr4::ParserRuleContext {
  public:
    If_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    ExprContext *expr();
    Compound_stmtContext *compound_stmt();
    If_stmtContext *if_stmt();
    Else_if_stmtContext *else_if_stmt();
    Else_stmtContext *else_stmt();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_stmtContext* if_stmt();
  If_stmtContext* if_stmt(int precedence);
  class  Else_stmtContext : public antlr4::ParserRuleContext {
  public:
    Else_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSE();
    Compound_stmtContext *compound_stmt();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Else_stmtContext* else_stmt();

  class  Else_if_stmtContext : public antlr4::ParserRuleContext {
  public:
    Else_if_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSE_IF();
    ExprContext *expr();
    Compound_stmtContext *compound_stmt();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Else_if_stmtContext* else_if_stmt();

  class  While_loop_stmtContext : public antlr4::ParserRuleContext {
  public:
    While_loop_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    ExprContext *expr();
    Compound_stmtContext *compound_stmt();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  While_loop_stmtContext* while_loop_stmt();

  class  Assignment_stmtContext : public antlr4::ParserRuleContext {
  public:
    Assignment_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    ExprContext *expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assignment_stmtContext* assignment_stmt();

  class  Inc_decContext : public antlr4::ParserRuleContext {
  public:
    Inc_decContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    Inc_dec_opContext *inc_dec_op();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Inc_decContext* inc_dec();

  class  Rtrn_stmtContext : public antlr4::ParserRuleContext {
  public:
    Rtrn_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    ExprContext *expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rtrn_stmtContext* rtrn_stmt();

  class  Print_stmtContext : public antlr4::ParserRuleContext {
  public:
    Print_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRINT();
    antlr4::tree::TerminalNode *STRING();
    ExprContext *expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Print_stmtContext* print_stmt();

  class  Printf_stmtContext : public antlr4::ParserRuleContext {
  public:
    Printf_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRINTF();
    antlr4::tree::TerminalNode *STRING();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Printf_stmtContext* printf_stmt();

  class  Mul_div_opContext : public antlr4::ParserRuleContext {
  public:
    Mul_div_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MUL_OP();
    antlr4::tree::TerminalNode *DIV_OP();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Mul_div_opContext* mul_div_op();

  class  Add_sub_opContext : public antlr4::ParserRuleContext {
  public:
    Add_sub_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD_OP();
    antlr4::tree::TerminalNode *SUB_OP();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Add_sub_opContext* add_sub_op();

  class  Rel_opContext : public antlr4::ParserRuleContext {
  public:
    Rel_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQ_OP();
    antlr4::tree::TerminalNode *NE_OP();
    antlr4::tree::TerminalNode *LT_OP();
    antlr4::tree::TerminalNode *LE_OP();
    antlr4::tree::TerminalNode *GT_OP();
    antlr4::tree::TerminalNode *GE_OP();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rel_opContext* rel_op();

  class  Inc_dec_opContext : public antlr4::ParserRuleContext {
  public:
    Inc_dec_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INC_OP();
    antlr4::tree::TerminalNode *DEC_OP();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Inc_dec_opContext* inc_dec_op();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);
  bool if_stmtSempred(If_stmtContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

