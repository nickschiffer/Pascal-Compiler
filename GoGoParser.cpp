
// Generated from GoGo.g4 by ANTLR 4.7.1


#include "GoGoVisitor.h"

#include "GoGoParser.h"


using namespace antlrcpp;
using namespace antlr4;

GoGoParser::GoGoParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

GoGoParser::~GoGoParser() {
  delete _interpreter;
}

std::string GoGoParser::getGrammarFileName() const {
  return "GoGo.g4";
}

const std::vector<std::string>& GoGoParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& GoGoParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgContext ------------------------------------------------------------------

GoGoParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<GoGoParser::StatContext *> GoGoParser::ProgContext::stat() {
  return getRuleContexts<GoGoParser::StatContext>();
}

GoGoParser::StatContext* GoGoParser::ProgContext::stat(size_t i) {
  return getRuleContext<GoGoParser::StatContext>(i);
}


size_t GoGoParser::ProgContext::getRuleIndex() const {
  return GoGoParser::RuleProg;
}

antlrcpp::Any GoGoParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GoGoVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

GoGoParser::ProgContext* GoGoParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, GoGoParser::RuleProg);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(49); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(48);
      stat();
      setState(51); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << GoGoParser::T__1)
      | (1ULL << GoGoParser::VAR)
      | (1ULL << GoGoParser::FUNC)
      | (1ULL << GoGoParser::IF)
      | (1ULL << GoGoParser::WHILE)
      | (1ULL << GoGoParser::RETURN)
      | (1ULL << GoGoParser::DOUBLE)
      | (1ULL << GoGoParser::ID)
      | (1ULL << GoGoParser::INT))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatContext ------------------------------------------------------------------

GoGoParser::StatContext::StatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GoGoParser::Inc_decContext* GoGoParser::StatContext::inc_dec() {
  return getRuleContext<GoGoParser::Inc_decContext>(0);
}

GoGoParser::ExprContext* GoGoParser::StatContext::expr() {
  return getRuleContext<GoGoParser::ExprContext>(0);
}

GoGoParser::Assignment_stmtContext* GoGoParser::StatContext::assignment_stmt() {
  return getRuleContext<GoGoParser::Assignment_stmtContext>(0);
}

GoGoParser::DeclarationContext* GoGoParser::StatContext::declaration() {
  return getRuleContext<GoGoParser::DeclarationContext>(0);
}

GoGoParser::Declaration_implicitContext* GoGoParser::StatContext::declaration_implicit() {
  return getRuleContext<GoGoParser::Declaration_implicitContext>(0);
}

GoGoParser::If_stmtContext* GoGoParser::StatContext::if_stmt() {
  return getRuleContext<GoGoParser::If_stmtContext>(0);
}

GoGoParser::Func_definitionContext* GoGoParser::StatContext::func_definition() {
  return getRuleContext<GoGoParser::Func_definitionContext>(0);
}

GoGoParser::While_loop_stmtContext* GoGoParser::StatContext::while_loop_stmt() {
  return getRuleContext<GoGoParser::While_loop_stmtContext>(0);
}

GoGoParser::Func_callContext* GoGoParser::StatContext::func_call() {
  return getRuleContext<GoGoParser::Func_callContext>(0);
}

GoGoParser::Rtrn_stmtContext* GoGoParser::StatContext::rtrn_stmt() {
  return getRuleContext<GoGoParser::Rtrn_stmtContext>(0);
}


size_t GoGoParser::StatContext::getRuleIndex() const {
  return GoGoParser::RuleStat;
}

antlrcpp::Any GoGoParser::StatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GoGoVisitor*>(visitor))
    return parserVisitor->visitStat(this);
  else
    return visitor->visitChildren(this);
}

GoGoParser::StatContext* GoGoParser::stat() {
  StatContext *_localctx = _tracker.createInstance<StatContext>(_ctx, getState());
  enterRule(_localctx, 2, GoGoParser::RuleStat);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(77);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(53);
      inc_dec();
      setState(54);
      match(GoGoParser::T__0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(56);
      expr(0);
      setState(57);
      match(GoGoParser::T__0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(59);
      assignment_stmt();
      setState(60);
      match(GoGoParser::T__0);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(62);
      declaration();
      setState(63);
      match(GoGoParser::T__0);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(65);
      declaration_implicit();
      setState(66);
      match(GoGoParser::T__0);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(68);
      if_stmt(0);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(69);
      func_definition();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(70);
      while_loop_stmt();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(71);
      func_call();
      setState(72);
      match(GoGoParser::T__0);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(74);
      rtrn_stmt();
      setState(75);
      match(GoGoParser::T__0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

GoGoParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GoGoParser::ExprContext::getRuleIndex() const {
  return GoGoParser::RuleExpr;
}

void GoGoParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
  this->type = ctx->type;
}

//----------------- VarExprContext ------------------------------------------------------------------

GoGoParser::VariableContext* GoGoParser::VarExprContext::variable() {
  return getRuleContext<GoGoParser::VariableContext>(0);
}

GoGoParser::VarExprContext::VarExprContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any GoGoParser::VarExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GoGoVisitor*>(visitor))
    return parserVisitor->visitVarExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParensContext ------------------------------------------------------------------

GoGoParser::ExprContext* GoGoParser::ParensContext::expr() {
  return getRuleContext<GoGoParser::ExprContext>(0);
}

GoGoParser::ParensContext::ParensContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any GoGoParser::ParensContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GoGoVisitor*>(visitor))
    return parserVisitor->visitParens(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulDivContext ------------------------------------------------------------------

std::vector<GoGoParser::ExprContext *> GoGoParser::MulDivContext::expr() {
  return getRuleContexts<GoGoParser::ExprContext>();
}

GoGoParser::ExprContext* GoGoParser::MulDivContext::expr(size_t i) {
  return getRuleContext<GoGoParser::ExprContext>(i);
}

GoGoParser::Mul_div_opContext* GoGoParser::MulDivContext::mul_div_op() {
  return getRuleContext<GoGoParser::Mul_div_opContext>(0);
}

GoGoParser::MulDivContext::MulDivContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any GoGoParser::MulDivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GoGoVisitor*>(visitor))
    return parserVisitor->visitMulDiv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddSubContext ------------------------------------------------------------------

std::vector<GoGoParser::ExprContext *> GoGoParser::AddSubContext::expr() {
  return getRuleContexts<GoGoParser::ExprContext>();
}

GoGoParser::ExprContext* GoGoParser::AddSubContext::expr(size_t i) {
  return getRuleContext<GoGoParser::ExprContext>(i);
}

GoGoParser::Add_sub_opContext* GoGoParser::AddSubContext::add_sub_op() {
  return getRuleContext<GoGoParser::Add_sub_opContext>(0);
}

GoGoParser::AddSubContext::AddSubContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any GoGoParser::AddSubContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GoGoVisitor*>(visitor))
    return parserVisitor->visitAddSub(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumberExprContext ------------------------------------------------------------------

GoGoParser::NumberContext* GoGoParser::NumberExprContext::number() {
  return getRuleContext<GoGoParser::NumberContext>(0);
}

GoGoParser::NumberExprContext::NumberExprContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any GoGoParser::NumberExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GoGoVisitor*>(visitor))
    return parserVisitor->visitNumberExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RelativeContext ------------------------------------------------------------------

std::vector<GoGoParser::ExprContext *> GoGoParser::RelativeContext::expr() {
  return getRuleContexts<GoGoParser::ExprContext>();
}

GoGoParser::ExprContext* GoGoParser::RelativeContext::expr(size_t i) {
  return getRuleContext<GoGoParser::ExprContext>(i);
}

GoGoParser::Rel_opContext* GoGoParser::RelativeContext::rel_op() {
  return getRuleContext<GoGoParser::Rel_opContext>(0);
}

GoGoParser::RelativeContext::RelativeContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any GoGoParser::RelativeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GoGoVisitor*>(visitor))
    return parserVisitor->visitRelative(this);
  else
    return visitor->visitChildren(this);
}

GoGoParser::ExprContext* GoGoParser::expr() {
   return expr(0);
}

GoGoParser::ExprContext* GoGoParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  GoGoParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  GoGoParser::ExprContext *previousContext = _localctx;
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, GoGoParser::RuleExpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(86);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GoGoParser::DOUBLE:
      case GoGoParser::INT: {
        _localctx = _tracker.createInstance<NumberExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(80);
        number();
        break;
      }

      case GoGoParser::ID: {
        _localctx = _tracker.createInstance<VarExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(81);
        variable();
        break;
      }

      case GoGoParser::T__1: {
        _localctx = _tracker.createInstance<ParensContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(82);
        match(GoGoParser::T__1);
        setState(83);
        expr(0);
        setState(84);
        match(GoGoParser::T__2);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(102);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(100);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulDivContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(88);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(89);
          mul_div_op();
          setState(90);
          expr(7);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddSubContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(92);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(93);
          add_sub_op();
          setState(94);
          expr(6);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<RelativeContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(96);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(97);
          rel_op();
          setState(98);
          expr(2);
          break;
        }

        } 
      }
      setState(104);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- VariableContext ------------------------------------------------------------------

GoGoParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GoGoParser::VariableContext::ID() {
  return getToken(GoGoParser::ID, 0);
}


size_t GoGoParser::VariableContext::getRuleIndex() const {
  return GoGoParser::RuleVariable;
}

antlrcpp::Any GoGoParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GoGoVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}

GoGoParser::VariableContext* GoGoParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 6, GoGoParser::RuleVariable);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(105);
    match(GoGoParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

GoGoParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GoGoParser::NumberContext::getRuleIndex() const {
  return GoGoParser::RuleNumber;
}

void GoGoParser::NumberContext::copyFrom(NumberContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
  this->type = ctx->type;
}

//----------------- DoubleConstContext ------------------------------------------------------------------

tree::TerminalNode* GoGoParser::DoubleConstContext::DOUBLE() {
  return getToken(GoGoParser::DOUBLE, 0);
}

GoGoParser::DoubleConstContext::DoubleConstContext(NumberContext *ctx) { copyFrom(ctx); }

antlrcpp::Any GoGoParser::DoubleConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GoGoVisitor*>(visitor))
    return parserVisitor->visitDoubleConst(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntegerConstContext ------------------------------------------------------------------

tree::TerminalNode* GoGoParser::IntegerConstContext::INT() {
  return getToken(GoGoParser::INT, 0);
}

GoGoParser::IntegerConstContext::IntegerConstContext(NumberContext *ctx) { copyFrom(ctx); }

antlrcpp::Any GoGoParser::IntegerConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GoGoVisitor*>(visitor))
    return parserVisitor->visitIntegerConst(this);
  else
    return visitor->visitChildren(this);
}
GoGoParser::NumberContext* GoGoParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 8, GoGoParser::RuleNumber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(109);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GoGoParser::INT: {
        _localctx = dynamic_cast<NumberContext *>(_tracker.createInstance<GoGoParser::IntegerConstContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(107);
        match(GoGoParser::INT);
        break;
      }

      case GoGoParser::DOUBLE: {
        _localctx = dynamic_cast<NumberContext *>(_tracker.createInstance<GoGoParser::DoubleConstContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(108);
        match(GoGoParser::DOUBLE);
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

//----------------- DeclarationContext ------------------------------------------------------------------

GoGoParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GoGoParser::DeclarationContext::VAR() {
  return getToken(GoGoParser::VAR, 0);
}

tree::TerminalNode* GoGoParser::DeclarationContext::ID() {
  return getToken(GoGoParser::ID, 0);
}

tree::TerminalNode* GoGoParser::DeclarationContext::TYPE() {
  return getToken(GoGoParser::TYPE, 0);
}

tree::TerminalNode* GoGoParser::DeclarationContext::INT() {
  return getToken(GoGoParser::INT, 0);
}

tree::TerminalNode* GoGoParser::DeclarationContext::DOUBLE() {
  return getToken(GoGoParser::DOUBLE, 0);
}


size_t GoGoParser::DeclarationContext::getRuleIndex() const {
  return GoGoParser::RuleDeclaration;
}

antlrcpp::Any GoGoParser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GoGoVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

GoGoParser::DeclarationContext* GoGoParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 10, GoGoParser::RuleDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(111);
    match(GoGoParser::VAR);
    setState(112);
    match(GoGoParser::ID);
    setState(113);
    match(GoGoParser::TYPE);
    setState(114);
    match(GoGoParser::T__3);
    setState(115);
    _la = _input->LA(1);
    if (!(_la == GoGoParser::DOUBLE

    || _la == GoGoParser::INT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Declaration_implicitContext ------------------------------------------------------------------

GoGoParser::Declaration_implicitContext::Declaration_implicitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GoGoParser::Declaration_implicitContext::ID() {
  return getToken(GoGoParser::ID, 0);
}

tree::TerminalNode* GoGoParser::Declaration_implicitContext::INT() {
  return getToken(GoGoParser::INT, 0);
}

tree::TerminalNode* GoGoParser::Declaration_implicitContext::DOUBLE() {
  return getToken(GoGoParser::DOUBLE, 0);
}


size_t GoGoParser::Declaration_implicitContext::getRuleIndex() const {
  return GoGoParser::RuleDeclaration_implicit;
}

antlrcpp::Any GoGoParser::Declaration_implicitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GoGoVisitor*>(visitor))
    return parserVisitor->visitDeclaration_implicit(this);
  else
    return visitor->visitChildren(this);
}

GoGoParser::Declaration_implicitContext* GoGoParser::declaration_implicit() {
  Declaration_implicitContext *_localctx = _tracker.createInstance<Declaration_implicitContext>(_ctx, getState());
  enterRule(_localctx, 12, GoGoParser::RuleDeclaration_implicit);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(117);
    match(GoGoParser::ID);
    setState(118);
    match(GoGoParser::T__4);
    setState(119);
    _la = _input->LA(1);
    if (!(_la == GoGoParser::DOUBLE

    || _la == GoGoParser::INT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_definitionContext ------------------------------------------------------------------

GoGoParser::Func_definitionContext::Func_definitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GoGoParser::Func_definitionContext::FUNC() {
  return getToken(GoGoParser::FUNC, 0);
}

tree::TerminalNode* GoGoParser::Func_definitionContext::ID() {
  return getToken(GoGoParser::ID, 0);
}

GoGoParser::ParamsContext* GoGoParser::Func_definitionContext::params() {
  return getRuleContext<GoGoParser::ParamsContext>(0);
}

GoGoParser::Compound_stmtContext* GoGoParser::Func_definitionContext::compound_stmt() {
  return getRuleContext<GoGoParser::Compound_stmtContext>(0);
}

tree::TerminalNode* GoGoParser::Func_definitionContext::TYPE() {
  return getToken(GoGoParser::TYPE, 0);
}


size_t GoGoParser::Func_definitionContext::getRuleIndex() const {
  return GoGoParser::RuleFunc_definition;
}

antlrcpp::Any GoGoParser::Func_definitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GoGoVisitor*>(visitor))
    return parserVisitor->visitFunc_definition(this);
  else
    return visitor->visitChildren(this);
}

GoGoParser::Func_definitionContext* GoGoParser::func_definition() {
  Func_definitionContext *_localctx = _tracker.createInstance<Func_definitionContext>(_ctx, getState());
  enterRule(_localctx, 14, GoGoParser::RuleFunc_definition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(121);
    match(GoGoParser::FUNC);
    setState(122);
    match(GoGoParser::ID);
    setState(123);
    match(GoGoParser::T__1);
    setState(124);
    params();
    setState(125);
    match(GoGoParser::T__2);
    setState(127);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == GoGoParser::TYPE) {
      setState(126);
      match(GoGoParser::TYPE);
    }
    setState(129);
    compound_stmt();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_callContext ------------------------------------------------------------------

GoGoParser::Func_callContext::Func_callContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GoGoParser::Func_callContext::ID() {
  return getToken(GoGoParser::ID, 0);
}

GoGoParser::Func_call_paramsContext* GoGoParser::Func_callContext::func_call_params() {
  return getRuleContext<GoGoParser::Func_call_paramsContext>(0);
}


size_t GoGoParser::Func_callContext::getRuleIndex() const {
  return GoGoParser::RuleFunc_call;
}

antlrcpp::Any GoGoParser::Func_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GoGoVisitor*>(visitor))
    return parserVisitor->visitFunc_call(this);
  else
    return visitor->visitChildren(this);
}

GoGoParser::Func_callContext* GoGoParser::func_call() {
  Func_callContext *_localctx = _tracker.createInstance<Func_callContext>(_ctx, getState());
  enterRule(_localctx, 16, GoGoParser::RuleFunc_call);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(131);
    match(GoGoParser::ID);
    setState(132);
    match(GoGoParser::T__1);
    setState(133);
    func_call_params();
    setState(134);
    match(GoGoParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_call_paramsContext ------------------------------------------------------------------

GoGoParser::Func_call_paramsContext::Func_call_paramsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<GoGoParser::ExprContext *> GoGoParser::Func_call_paramsContext::expr() {
  return getRuleContexts<GoGoParser::ExprContext>();
}

GoGoParser::ExprContext* GoGoParser::Func_call_paramsContext::expr(size_t i) {
  return getRuleContext<GoGoParser::ExprContext>(i);
}


size_t GoGoParser::Func_call_paramsContext::getRuleIndex() const {
  return GoGoParser::RuleFunc_call_params;
}

antlrcpp::Any GoGoParser::Func_call_paramsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GoGoVisitor*>(visitor))
    return parserVisitor->visitFunc_call_params(this);
  else
    return visitor->visitChildren(this);
}

GoGoParser::Func_call_paramsContext* GoGoParser::func_call_params() {
  Func_call_paramsContext *_localctx = _tracker.createInstance<Func_call_paramsContext>(_ctx, getState());
  enterRule(_localctx, 18, GoGoParser::RuleFunc_call_params);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(144);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << GoGoParser::T__1)
      | (1ULL << GoGoParser::DOUBLE)
      | (1ULL << GoGoParser::ID)
      | (1ULL << GoGoParser::INT))) != 0)) {
      setState(136);
      expr(0);
      setState(141);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == GoGoParser::T__5) {
        setState(137);
        match(GoGoParser::T__5);
        setState(138);
        expr(0);
        setState(143);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamContext ------------------------------------------------------------------

GoGoParser::ParamContext::ParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GoGoParser::ParamContext::ID() {
  return getToken(GoGoParser::ID, 0);
}

tree::TerminalNode* GoGoParser::ParamContext::TYPE() {
  return getToken(GoGoParser::TYPE, 0);
}


size_t GoGoParser::ParamContext::getRuleIndex() const {
  return GoGoParser::RuleParam;
}

antlrcpp::Any GoGoParser::ParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GoGoVisitor*>(visitor))
    return parserVisitor->visitParam(this);
  else
    return visitor->visitChildren(this);
}

GoGoParser::ParamContext* GoGoParser::param() {
  ParamContext *_localctx = _tracker.createInstance<ParamContext>(_ctx, getState());
  enterRule(_localctx, 20, GoGoParser::RuleParam);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(147);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == GoGoParser::T__6) {
      setState(146);
      match(GoGoParser::T__6);
    }
    setState(149);
    match(GoGoParser::ID);
    setState(150);
    match(GoGoParser::TYPE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamsContext ------------------------------------------------------------------

GoGoParser::ParamsContext::ParamsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<GoGoParser::ParamContext *> GoGoParser::ParamsContext::param() {
  return getRuleContexts<GoGoParser::ParamContext>();
}

GoGoParser::ParamContext* GoGoParser::ParamsContext::param(size_t i) {
  return getRuleContext<GoGoParser::ParamContext>(i);
}


size_t GoGoParser::ParamsContext::getRuleIndex() const {
  return GoGoParser::RuleParams;
}

antlrcpp::Any GoGoParser::ParamsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GoGoVisitor*>(visitor))
    return parserVisitor->visitParams(this);
  else
    return visitor->visitChildren(this);
}

GoGoParser::ParamsContext* GoGoParser::params() {
  ParamsContext *_localctx = _tracker.createInstance<ParamsContext>(_ctx, getState());
  enterRule(_localctx, 22, GoGoParser::RuleParams);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(160);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == GoGoParser::T__6

    || _la == GoGoParser::ID) {
      setState(152);
      param();
      setState(157);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == GoGoParser::T__5) {
        setState(153);
        match(GoGoParser::T__5);
        setState(154);
        param();
        setState(159);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Compound_stmtContext ------------------------------------------------------------------

GoGoParser::Compound_stmtContext::Compound_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<GoGoParser::StatContext *> GoGoParser::Compound_stmtContext::stat() {
  return getRuleContexts<GoGoParser::StatContext>();
}

GoGoParser::StatContext* GoGoParser::Compound_stmtContext::stat(size_t i) {
  return getRuleContext<GoGoParser::StatContext>(i);
}


size_t GoGoParser::Compound_stmtContext::getRuleIndex() const {
  return GoGoParser::RuleCompound_stmt;
}

antlrcpp::Any GoGoParser::Compound_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GoGoVisitor*>(visitor))
    return parserVisitor->visitCompound_stmt(this);
  else
    return visitor->visitChildren(this);
}

GoGoParser::Compound_stmtContext* GoGoParser::compound_stmt() {
  Compound_stmtContext *_localctx = _tracker.createInstance<Compound_stmtContext>(_ctx, getState());
  enterRule(_localctx, 24, GoGoParser::RuleCompound_stmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(171);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GoGoParser::T__7: {
        enterOuterAlt(_localctx, 1);
        setState(162);
        match(GoGoParser::T__7);
        setState(166);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << GoGoParser::T__1)
          | (1ULL << GoGoParser::VAR)
          | (1ULL << GoGoParser::FUNC)
          | (1ULL << GoGoParser::IF)
          | (1ULL << GoGoParser::WHILE)
          | (1ULL << GoGoParser::RETURN)
          | (1ULL << GoGoParser::DOUBLE)
          | (1ULL << GoGoParser::ID)
          | (1ULL << GoGoParser::INT))) != 0)) {
          setState(163);
          stat();
          setState(168);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(169);
        match(GoGoParser::T__8);
        break;
      }

      case GoGoParser::T__1:
      case GoGoParser::VAR:
      case GoGoParser::FUNC:
      case GoGoParser::IF:
      case GoGoParser::WHILE:
      case GoGoParser::RETURN:
      case GoGoParser::DOUBLE:
      case GoGoParser::ID:
      case GoGoParser::INT: {
        enterOuterAlt(_localctx, 2);
        setState(170);
        stat();
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

//----------------- If_stmtContext ------------------------------------------------------------------

GoGoParser::If_stmtContext::If_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GoGoParser::If_stmtContext::IF() {
  return getToken(GoGoParser::IF, 0);
}

GoGoParser::ExprContext* GoGoParser::If_stmtContext::expr() {
  return getRuleContext<GoGoParser::ExprContext>(0);
}

GoGoParser::Compound_stmtContext* GoGoParser::If_stmtContext::compound_stmt() {
  return getRuleContext<GoGoParser::Compound_stmtContext>(0);
}

GoGoParser::If_stmtContext* GoGoParser::If_stmtContext::if_stmt() {
  return getRuleContext<GoGoParser::If_stmtContext>(0);
}

GoGoParser::Else_if_stmtContext* GoGoParser::If_stmtContext::else_if_stmt() {
  return getRuleContext<GoGoParser::Else_if_stmtContext>(0);
}

GoGoParser::Else_stmtContext* GoGoParser::If_stmtContext::else_stmt() {
  return getRuleContext<GoGoParser::Else_stmtContext>(0);
}


size_t GoGoParser::If_stmtContext::getRuleIndex() const {
  return GoGoParser::RuleIf_stmt;
}

antlrcpp::Any GoGoParser::If_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GoGoVisitor*>(visitor))
    return parserVisitor->visitIf_stmt(this);
  else
    return visitor->visitChildren(this);
}


GoGoParser::If_stmtContext* GoGoParser::if_stmt() {
   return if_stmt(0);
}

GoGoParser::If_stmtContext* GoGoParser::if_stmt(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  GoGoParser::If_stmtContext *_localctx = _tracker.createInstance<If_stmtContext>(_ctx, parentState);
  GoGoParser::If_stmtContext *previousContext = _localctx;
  size_t startState = 26;
  enterRecursionRule(_localctx, 26, GoGoParser::RuleIf_stmt, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(174);
    match(GoGoParser::IF);
    setState(175);
    expr(0);
    setState(176);
    compound_stmt();
    _ctx->stop = _input->LT(-1);
    setState(184);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(182);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<If_stmtContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleIf_stmt);
          setState(178);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");

          setState(179);
          else_if_stmt();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<If_stmtContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleIf_stmt);
          setState(180);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(181);
          else_stmt();
          break;
        }

        } 
      }
      setState(186);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Else_stmtContext ------------------------------------------------------------------

GoGoParser::Else_stmtContext::Else_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GoGoParser::Else_stmtContext::ELSE() {
  return getToken(GoGoParser::ELSE, 0);
}

GoGoParser::Compound_stmtContext* GoGoParser::Else_stmtContext::compound_stmt() {
  return getRuleContext<GoGoParser::Compound_stmtContext>(0);
}


size_t GoGoParser::Else_stmtContext::getRuleIndex() const {
  return GoGoParser::RuleElse_stmt;
}

antlrcpp::Any GoGoParser::Else_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GoGoVisitor*>(visitor))
    return parserVisitor->visitElse_stmt(this);
  else
    return visitor->visitChildren(this);
}

GoGoParser::Else_stmtContext* GoGoParser::else_stmt() {
  Else_stmtContext *_localctx = _tracker.createInstance<Else_stmtContext>(_ctx, getState());
  enterRule(_localctx, 28, GoGoParser::RuleElse_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(187);
    match(GoGoParser::ELSE);
    setState(188);
    compound_stmt();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Else_if_stmtContext ------------------------------------------------------------------

GoGoParser::Else_if_stmtContext::Else_if_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GoGoParser::Else_if_stmtContext::ELSE_IF() {
  return getToken(GoGoParser::ELSE_IF, 0);
}

GoGoParser::ExprContext* GoGoParser::Else_if_stmtContext::expr() {
  return getRuleContext<GoGoParser::ExprContext>(0);
}

GoGoParser::Compound_stmtContext* GoGoParser::Else_if_stmtContext::compound_stmt() {
  return getRuleContext<GoGoParser::Compound_stmtContext>(0);
}


size_t GoGoParser::Else_if_stmtContext::getRuleIndex() const {
  return GoGoParser::RuleElse_if_stmt;
}

antlrcpp::Any GoGoParser::Else_if_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GoGoVisitor*>(visitor))
    return parserVisitor->visitElse_if_stmt(this);
  else
    return visitor->visitChildren(this);
}

GoGoParser::Else_if_stmtContext* GoGoParser::else_if_stmt() {
  Else_if_stmtContext *_localctx = _tracker.createInstance<Else_if_stmtContext>(_ctx, getState());
  enterRule(_localctx, 30, GoGoParser::RuleElse_if_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(190);
    match(GoGoParser::ELSE_IF);
    setState(191);
    expr(0);
    setState(192);
    compound_stmt();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- While_loop_stmtContext ------------------------------------------------------------------

GoGoParser::While_loop_stmtContext::While_loop_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GoGoParser::While_loop_stmtContext::WHILE() {
  return getToken(GoGoParser::WHILE, 0);
}

GoGoParser::ExprContext* GoGoParser::While_loop_stmtContext::expr() {
  return getRuleContext<GoGoParser::ExprContext>(0);
}

GoGoParser::Compound_stmtContext* GoGoParser::While_loop_stmtContext::compound_stmt() {
  return getRuleContext<GoGoParser::Compound_stmtContext>(0);
}


size_t GoGoParser::While_loop_stmtContext::getRuleIndex() const {
  return GoGoParser::RuleWhile_loop_stmt;
}

antlrcpp::Any GoGoParser::While_loop_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GoGoVisitor*>(visitor))
    return parserVisitor->visitWhile_loop_stmt(this);
  else
    return visitor->visitChildren(this);
}

GoGoParser::While_loop_stmtContext* GoGoParser::while_loop_stmt() {
  While_loop_stmtContext *_localctx = _tracker.createInstance<While_loop_stmtContext>(_ctx, getState());
  enterRule(_localctx, 32, GoGoParser::RuleWhile_loop_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(194);
    match(GoGoParser::WHILE);
    setState(195);
    expr(0);

    setState(196);
    compound_stmt();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Assignment_stmtContext ------------------------------------------------------------------

GoGoParser::Assignment_stmtContext::Assignment_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GoGoParser::Assignment_stmtContext::ID() {
  return getToken(GoGoParser::ID, 0);
}

GoGoParser::ExprContext* GoGoParser::Assignment_stmtContext::expr() {
  return getRuleContext<GoGoParser::ExprContext>(0);
}


size_t GoGoParser::Assignment_stmtContext::getRuleIndex() const {
  return GoGoParser::RuleAssignment_stmt;
}

antlrcpp::Any GoGoParser::Assignment_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GoGoVisitor*>(visitor))
    return parserVisitor->visitAssignment_stmt(this);
  else
    return visitor->visitChildren(this);
}

GoGoParser::Assignment_stmtContext* GoGoParser::assignment_stmt() {
  Assignment_stmtContext *_localctx = _tracker.createInstance<Assignment_stmtContext>(_ctx, getState());
  enterRule(_localctx, 34, GoGoParser::RuleAssignment_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(198);
    match(GoGoParser::ID);
    setState(199);
    match(GoGoParser::T__3);
    setState(200);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Inc_decContext ------------------------------------------------------------------

GoGoParser::Inc_decContext::Inc_decContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GoGoParser::Inc_decContext::ID() {
  return getToken(GoGoParser::ID, 0);
}

GoGoParser::Inc_dec_opContext* GoGoParser::Inc_decContext::inc_dec_op() {
  return getRuleContext<GoGoParser::Inc_dec_opContext>(0);
}


size_t GoGoParser::Inc_decContext::getRuleIndex() const {
  return GoGoParser::RuleInc_dec;
}

antlrcpp::Any GoGoParser::Inc_decContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GoGoVisitor*>(visitor))
    return parserVisitor->visitInc_dec(this);
  else
    return visitor->visitChildren(this);
}

GoGoParser::Inc_decContext* GoGoParser::inc_dec() {
  Inc_decContext *_localctx = _tracker.createInstance<Inc_decContext>(_ctx, getState());
  enterRule(_localctx, 36, GoGoParser::RuleInc_dec);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(202);
    match(GoGoParser::ID);
    setState(203);
    inc_dec_op();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Rtrn_stmtContext ------------------------------------------------------------------

GoGoParser::Rtrn_stmtContext::Rtrn_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GoGoParser::Rtrn_stmtContext::RETURN() {
  return getToken(GoGoParser::RETURN, 0);
}

GoGoParser::ExprContext* GoGoParser::Rtrn_stmtContext::expr() {
  return getRuleContext<GoGoParser::ExprContext>(0);
}


size_t GoGoParser::Rtrn_stmtContext::getRuleIndex() const {
  return GoGoParser::RuleRtrn_stmt;
}

antlrcpp::Any GoGoParser::Rtrn_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GoGoVisitor*>(visitor))
    return parserVisitor->visitRtrn_stmt(this);
  else
    return visitor->visitChildren(this);
}

GoGoParser::Rtrn_stmtContext* GoGoParser::rtrn_stmt() {
  Rtrn_stmtContext *_localctx = _tracker.createInstance<Rtrn_stmtContext>(_ctx, getState());
  enterRule(_localctx, 38, GoGoParser::RuleRtrn_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(205);
    match(GoGoParser::RETURN);
    setState(206);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Mul_div_opContext ------------------------------------------------------------------

GoGoParser::Mul_div_opContext::Mul_div_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GoGoParser::Mul_div_opContext::MUL_OP() {
  return getToken(GoGoParser::MUL_OP, 0);
}

tree::TerminalNode* GoGoParser::Mul_div_opContext::DIV_OP() {
  return getToken(GoGoParser::DIV_OP, 0);
}


size_t GoGoParser::Mul_div_opContext::getRuleIndex() const {
  return GoGoParser::RuleMul_div_op;
}

antlrcpp::Any GoGoParser::Mul_div_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GoGoVisitor*>(visitor))
    return parserVisitor->visitMul_div_op(this);
  else
    return visitor->visitChildren(this);
}

GoGoParser::Mul_div_opContext* GoGoParser::mul_div_op() {
  Mul_div_opContext *_localctx = _tracker.createInstance<Mul_div_opContext>(_ctx, getState());
  enterRule(_localctx, 40, GoGoParser::RuleMul_div_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(208);
    _la = _input->LA(1);
    if (!(_la == GoGoParser::MUL_OP

    || _la == GoGoParser::DIV_OP)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Add_sub_opContext ------------------------------------------------------------------

GoGoParser::Add_sub_opContext::Add_sub_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GoGoParser::Add_sub_opContext::ADD_OP() {
  return getToken(GoGoParser::ADD_OP, 0);
}

tree::TerminalNode* GoGoParser::Add_sub_opContext::SUB_OP() {
  return getToken(GoGoParser::SUB_OP, 0);
}


size_t GoGoParser::Add_sub_opContext::getRuleIndex() const {
  return GoGoParser::RuleAdd_sub_op;
}

antlrcpp::Any GoGoParser::Add_sub_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GoGoVisitor*>(visitor))
    return parserVisitor->visitAdd_sub_op(this);
  else
    return visitor->visitChildren(this);
}

GoGoParser::Add_sub_opContext* GoGoParser::add_sub_op() {
  Add_sub_opContext *_localctx = _tracker.createInstance<Add_sub_opContext>(_ctx, getState());
  enterRule(_localctx, 42, GoGoParser::RuleAdd_sub_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(210);
    _la = _input->LA(1);
    if (!(_la == GoGoParser::ADD_OP

    || _la == GoGoParser::SUB_OP)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Rel_opContext ------------------------------------------------------------------

GoGoParser::Rel_opContext::Rel_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GoGoParser::Rel_opContext::EQ_OP() {
  return getToken(GoGoParser::EQ_OP, 0);
}

tree::TerminalNode* GoGoParser::Rel_opContext::NE_OP() {
  return getToken(GoGoParser::NE_OP, 0);
}

tree::TerminalNode* GoGoParser::Rel_opContext::LT_OP() {
  return getToken(GoGoParser::LT_OP, 0);
}

tree::TerminalNode* GoGoParser::Rel_opContext::LE_OP() {
  return getToken(GoGoParser::LE_OP, 0);
}

tree::TerminalNode* GoGoParser::Rel_opContext::GT_OP() {
  return getToken(GoGoParser::GT_OP, 0);
}

tree::TerminalNode* GoGoParser::Rel_opContext::GE_OP() {
  return getToken(GoGoParser::GE_OP, 0);
}


size_t GoGoParser::Rel_opContext::getRuleIndex() const {
  return GoGoParser::RuleRel_op;
}

antlrcpp::Any GoGoParser::Rel_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GoGoVisitor*>(visitor))
    return parserVisitor->visitRel_op(this);
  else
    return visitor->visitChildren(this);
}

GoGoParser::Rel_opContext* GoGoParser::rel_op() {
  Rel_opContext *_localctx = _tracker.createInstance<Rel_opContext>(_ctx, getState());
  enterRule(_localctx, 44, GoGoParser::RuleRel_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(212);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << GoGoParser::EQ_OP)
      | (1ULL << GoGoParser::NE_OP)
      | (1ULL << GoGoParser::LT_OP)
      | (1ULL << GoGoParser::LE_OP)
      | (1ULL << GoGoParser::GT_OP)
      | (1ULL << GoGoParser::GE_OP))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Inc_dec_opContext ------------------------------------------------------------------

GoGoParser::Inc_dec_opContext::Inc_dec_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GoGoParser::Inc_dec_opContext::INC_OP() {
  return getToken(GoGoParser::INC_OP, 0);
}

tree::TerminalNode* GoGoParser::Inc_dec_opContext::DEC_OP() {
  return getToken(GoGoParser::DEC_OP, 0);
}


size_t GoGoParser::Inc_dec_opContext::getRuleIndex() const {
  return GoGoParser::RuleInc_dec_op;
}

antlrcpp::Any GoGoParser::Inc_dec_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GoGoVisitor*>(visitor))
    return parserVisitor->visitInc_dec_op(this);
  else
    return visitor->visitChildren(this);
}

GoGoParser::Inc_dec_opContext* GoGoParser::inc_dec_op() {
  Inc_dec_opContext *_localctx = _tracker.createInstance<Inc_dec_opContext>(_ctx, getState());
  enterRule(_localctx, 46, GoGoParser::RuleInc_dec_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(214);
    _la = _input->LA(1);
    if (!(_la == GoGoParser::INC_OP

    || _la == GoGoParser::DEC_OP)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool GoGoParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 2: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);
    case 13: return if_stmtSempred(dynamic_cast<If_stmtContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool GoGoParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 6);
    case 1: return precpred(_ctx, 5);
    case 2: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool GoGoParser::if_stmtSempred(If_stmtContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 3: return precpred(_ctx, 2);
    case 4: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> GoGoParser::_decisionToDFA;
atn::PredictionContextCache GoGoParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN GoGoParser::_atn;
std::vector<uint16_t> GoGoParser::_serializedATN;

std::vector<std::string> GoGoParser::_ruleNames = {
  "prog", "stat", "expr", "variable", "number", "declaration", "declaration_implicit", 
  "func_definition", "func_call", "func_call_params", "param", "params", 
  "compound_stmt", "if_stmt", "else_stmt", "else_if_stmt", "while_loop_stmt", 
  "assignment_stmt", "inc_dec", "rtrn_stmt", "mul_div_op", "add_sub_op", 
  "rel_op", "inc_dec_op"
};

std::vector<std::string> GoGoParser::_literalNames = {
  "", "';'", "'('", "')'", "'='", "':='", "','", "'&'", "'{'", "'}'", "", 
  "'var'", "'func'", "'if'", "'else'", "'else if'", "'while'", "'return'", 
  "'*'", "'/'", "'+'", "'-'", "'=='", "'!='", "'<'", "'<='", "'>'", "'>='", 
  "'++'", "'--'"
};

std::vector<std::string> GoGoParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "TYPE", "VAR", "FUNC", "IF", "ELSE", 
  "ELSE_IF", "WHILE", "RETURN", "MUL_OP", "DIV_OP", "ADD_OP", "SUB_OP", 
  "EQ_OP", "NE_OP", "LT_OP", "LE_OP", "GT_OP", "GE_OP", "INC_OP", "DEC_OP", 
  "DOUBLE", "ID", "INT", "NEWLINE", "WS", "COMMENT"
};

dfa::Vocabulary GoGoParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> GoGoParser::_tokenNames;

GoGoParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x25, 0xdb, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 0x9, 
    0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 
    0x4, 0x19, 0x9, 0x19, 0x3, 0x2, 0x6, 0x2, 0x34, 0xa, 0x2, 0xd, 0x2, 
    0xe, 0x2, 0x35, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x50, 0xa, 0x3, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x5, 0x4, 0x59, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x7, 0x4, 0x67, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x6a, 0xb, 0x4, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x70, 0xa, 0x6, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x5, 0x9, 0x82, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 
    0xb, 0x8e, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x91, 0xb, 0xb, 0x5, 0xb, 0x93, 
    0xa, 0xb, 0x3, 0xc, 0x5, 0xc, 0x96, 0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x9e, 0xa, 0xd, 0xc, 0xd, 
    0xe, 0xd, 0xa1, 0xb, 0xd, 0x5, 0xd, 0xa3, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 
    0x7, 0xe, 0xa7, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0xaa, 0xb, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x5, 0xe, 0xae, 0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0xb9, 
    0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0xbc, 0xb, 0xf, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x2, 0x4, 0x6, 0x1c, 0x1a, 0x2, 0x4, 0x6, 0x8, 
    0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 
    0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x2, 0x7, 0x4, 0x2, 
    0x20, 0x20, 0x22, 0x22, 0x3, 0x2, 0x14, 0x15, 0x3, 0x2, 0x16, 0x17, 
    0x3, 0x2, 0x18, 0x1d, 0x3, 0x2, 0x1e, 0x1f, 0x2, 0xdc, 0x2, 0x33, 0x3, 
    0x2, 0x2, 0x2, 0x4, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x6, 0x58, 0x3, 0x2, 0x2, 
    0x2, 0x8, 0x6b, 0x3, 0x2, 0x2, 0x2, 0xa, 0x6f, 0x3, 0x2, 0x2, 0x2, 0xc, 
    0x71, 0x3, 0x2, 0x2, 0x2, 0xe, 0x77, 0x3, 0x2, 0x2, 0x2, 0x10, 0x7b, 
    0x3, 0x2, 0x2, 0x2, 0x12, 0x85, 0x3, 0x2, 0x2, 0x2, 0x14, 0x92, 0x3, 
    0x2, 0x2, 0x2, 0x16, 0x95, 0x3, 0x2, 0x2, 0x2, 0x18, 0xa2, 0x3, 0x2, 
    0x2, 0x2, 0x1a, 0xad, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xaf, 0x3, 0x2, 0x2, 
    0x2, 0x1e, 0xbd, 0x3, 0x2, 0x2, 0x2, 0x20, 0xc0, 0x3, 0x2, 0x2, 0x2, 
    0x22, 0xc4, 0x3, 0x2, 0x2, 0x2, 0x24, 0xc8, 0x3, 0x2, 0x2, 0x2, 0x26, 
    0xcc, 0x3, 0x2, 0x2, 0x2, 0x28, 0xcf, 0x3, 0x2, 0x2, 0x2, 0x2a, 0xd2, 
    0x3, 0x2, 0x2, 0x2, 0x2c, 0xd4, 0x3, 0x2, 0x2, 0x2, 0x2e, 0xd6, 0x3, 
    0x2, 0x2, 0x2, 0x30, 0xd8, 0x3, 0x2, 0x2, 0x2, 0x32, 0x34, 0x5, 0x4, 
    0x3, 0x2, 0x33, 0x32, 0x3, 0x2, 0x2, 0x2, 0x34, 0x35, 0x3, 0x2, 0x2, 
    0x2, 0x35, 0x33, 0x3, 0x2, 0x2, 0x2, 0x35, 0x36, 0x3, 0x2, 0x2, 0x2, 
    0x36, 0x3, 0x3, 0x2, 0x2, 0x2, 0x37, 0x38, 0x5, 0x26, 0x14, 0x2, 0x38, 
    0x39, 0x7, 0x3, 0x2, 0x2, 0x39, 0x50, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3b, 
    0x5, 0x6, 0x4, 0x2, 0x3b, 0x3c, 0x7, 0x3, 0x2, 0x2, 0x3c, 0x50, 0x3, 
    0x2, 0x2, 0x2, 0x3d, 0x3e, 0x5, 0x24, 0x13, 0x2, 0x3e, 0x3f, 0x7, 0x3, 
    0x2, 0x2, 0x3f, 0x50, 0x3, 0x2, 0x2, 0x2, 0x40, 0x41, 0x5, 0xc, 0x7, 
    0x2, 0x41, 0x42, 0x7, 0x3, 0x2, 0x2, 0x42, 0x50, 0x3, 0x2, 0x2, 0x2, 
    0x43, 0x44, 0x5, 0xe, 0x8, 0x2, 0x44, 0x45, 0x7, 0x3, 0x2, 0x2, 0x45, 
    0x50, 0x3, 0x2, 0x2, 0x2, 0x46, 0x50, 0x5, 0x1c, 0xf, 0x2, 0x47, 0x50, 
    0x5, 0x10, 0x9, 0x2, 0x48, 0x50, 0x5, 0x22, 0x12, 0x2, 0x49, 0x4a, 0x5, 
    0x12, 0xa, 0x2, 0x4a, 0x4b, 0x7, 0x3, 0x2, 0x2, 0x4b, 0x50, 0x3, 0x2, 
    0x2, 0x2, 0x4c, 0x4d, 0x5, 0x28, 0x15, 0x2, 0x4d, 0x4e, 0x7, 0x3, 0x2, 
    0x2, 0x4e, 0x50, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x37, 0x3, 0x2, 0x2, 0x2, 
    0x4f, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x4f, 
    0x40, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x43, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x46, 
    0x3, 0x2, 0x2, 0x2, 0x4f, 0x47, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x48, 0x3, 
    0x2, 0x2, 0x2, 0x4f, 0x49, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x4c, 0x3, 0x2, 
    0x2, 0x2, 0x50, 0x5, 0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x8, 0x4, 0x1, 
    0x2, 0x52, 0x59, 0x5, 0xa, 0x6, 0x2, 0x53, 0x59, 0x5, 0x8, 0x5, 0x2, 
    0x54, 0x55, 0x7, 0x4, 0x2, 0x2, 0x55, 0x56, 0x5, 0x6, 0x4, 0x2, 0x56, 
    0x57, 0x7, 0x5, 0x2, 0x2, 0x57, 0x59, 0x3, 0x2, 0x2, 0x2, 0x58, 0x51, 
    0x3, 0x2, 0x2, 0x2, 0x58, 0x53, 0x3, 0x2, 0x2, 0x2, 0x58, 0x54, 0x3, 
    0x2, 0x2, 0x2, 0x59, 0x68, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5b, 0xc, 0x8, 
    0x2, 0x2, 0x5b, 0x5c, 0x5, 0x2a, 0x16, 0x2, 0x5c, 0x5d, 0x5, 0x6, 0x4, 
    0x9, 0x5d, 0x67, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5f, 0xc, 0x7, 0x2, 0x2, 
    0x5f, 0x60, 0x5, 0x2c, 0x17, 0x2, 0x60, 0x61, 0x5, 0x6, 0x4, 0x8, 0x61, 
    0x67, 0x3, 0x2, 0x2, 0x2, 0x62, 0x63, 0xc, 0x3, 0x2, 0x2, 0x63, 0x64, 
    0x5, 0x2e, 0x18, 0x2, 0x64, 0x65, 0x5, 0x6, 0x4, 0x4, 0x65, 0x67, 0x3, 
    0x2, 0x2, 0x2, 0x66, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x66, 0x5e, 0x3, 0x2, 
    0x2, 0x2, 0x66, 0x62, 0x3, 0x2, 0x2, 0x2, 0x67, 0x6a, 0x3, 0x2, 0x2, 
    0x2, 0x68, 0x66, 0x3, 0x2, 0x2, 0x2, 0x68, 0x69, 0x3, 0x2, 0x2, 0x2, 
    0x69, 0x7, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x68, 0x3, 0x2, 0x2, 0x2, 0x6b, 
    0x6c, 0x7, 0x21, 0x2, 0x2, 0x6c, 0x9, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x70, 
    0x7, 0x22, 0x2, 0x2, 0x6e, 0x70, 0x7, 0x20, 0x2, 0x2, 0x6f, 0x6d, 0x3, 
    0x2, 0x2, 0x2, 0x6f, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x70, 0xb, 0x3, 0x2, 
    0x2, 0x2, 0x71, 0x72, 0x7, 0xd, 0x2, 0x2, 0x72, 0x73, 0x7, 0x21, 0x2, 
    0x2, 0x73, 0x74, 0x7, 0xc, 0x2, 0x2, 0x74, 0x75, 0x7, 0x6, 0x2, 0x2, 
    0x75, 0x76, 0x9, 0x2, 0x2, 0x2, 0x76, 0xd, 0x3, 0x2, 0x2, 0x2, 0x77, 
    0x78, 0x7, 0x21, 0x2, 0x2, 0x78, 0x79, 0x7, 0x7, 0x2, 0x2, 0x79, 0x7a, 
    0x9, 0x2, 0x2, 0x2, 0x7a, 0xf, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7c, 0x7, 
    0xe, 0x2, 0x2, 0x7c, 0x7d, 0x7, 0x21, 0x2, 0x2, 0x7d, 0x7e, 0x7, 0x4, 
    0x2, 0x2, 0x7e, 0x7f, 0x5, 0x18, 0xd, 0x2, 0x7f, 0x81, 0x7, 0x5, 0x2, 
    0x2, 0x80, 0x82, 0x7, 0xc, 0x2, 0x2, 0x81, 0x80, 0x3, 0x2, 0x2, 0x2, 
    0x81, 0x82, 0x3, 0x2, 0x2, 0x2, 0x82, 0x83, 0x3, 0x2, 0x2, 0x2, 0x83, 
    0x84, 0x5, 0x1a, 0xe, 0x2, 0x84, 0x11, 0x3, 0x2, 0x2, 0x2, 0x85, 0x86, 
    0x7, 0x21, 0x2, 0x2, 0x86, 0x87, 0x7, 0x4, 0x2, 0x2, 0x87, 0x88, 0x5, 
    0x14, 0xb, 0x2, 0x88, 0x89, 0x7, 0x5, 0x2, 0x2, 0x89, 0x13, 0x3, 0x2, 
    0x2, 0x2, 0x8a, 0x8f, 0x5, 0x6, 0x4, 0x2, 0x8b, 0x8c, 0x7, 0x8, 0x2, 
    0x2, 0x8c, 0x8e, 0x5, 0x6, 0x4, 0x2, 0x8d, 0x8b, 0x3, 0x2, 0x2, 0x2, 
    0x8e, 0x91, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x8f, 
    0x90, 0x3, 0x2, 0x2, 0x2, 0x90, 0x93, 0x3, 0x2, 0x2, 0x2, 0x91, 0x8f, 
    0x3, 0x2, 0x2, 0x2, 0x92, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x92, 0x93, 0x3, 
    0x2, 0x2, 0x2, 0x93, 0x15, 0x3, 0x2, 0x2, 0x2, 0x94, 0x96, 0x7, 0x9, 
    0x2, 0x2, 0x95, 0x94, 0x3, 0x2, 0x2, 0x2, 0x95, 0x96, 0x3, 0x2, 0x2, 
    0x2, 0x96, 0x97, 0x3, 0x2, 0x2, 0x2, 0x97, 0x98, 0x7, 0x21, 0x2, 0x2, 
    0x98, 0x99, 0x7, 0xc, 0x2, 0x2, 0x99, 0x17, 0x3, 0x2, 0x2, 0x2, 0x9a, 
    0x9f, 0x5, 0x16, 0xc, 0x2, 0x9b, 0x9c, 0x7, 0x8, 0x2, 0x2, 0x9c, 0x9e, 
    0x5, 0x16, 0xc, 0x2, 0x9d, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x9e, 0xa1, 0x3, 
    0x2, 0x2, 0x2, 0x9f, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa0, 0x3, 0x2, 
    0x2, 0x2, 0xa0, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa1, 0x9f, 0x3, 0x2, 0x2, 
    0x2, 0xa2, 0x9a, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa3, 0x3, 0x2, 0x2, 0x2, 
    0xa3, 0x19, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa8, 0x7, 0xa, 0x2, 0x2, 0xa5, 
    0xa7, 0x5, 0x4, 0x3, 0x2, 0xa6, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xaa, 
    0x3, 0x2, 0x2, 0x2, 0xa8, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa9, 0x3, 
    0x2, 0x2, 0x2, 0xa9, 0xab, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xa8, 0x3, 0x2, 
    0x2, 0x2, 0xab, 0xae, 0x7, 0xb, 0x2, 0x2, 0xac, 0xae, 0x5, 0x4, 0x3, 
    0x2, 0xad, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xad, 0xac, 0x3, 0x2, 0x2, 0x2, 
    0xae, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xb0, 0x8, 0xf, 0x1, 0x2, 0xb0, 
    0xb1, 0x7, 0xf, 0x2, 0x2, 0xb1, 0xb2, 0x5, 0x6, 0x4, 0x2, 0xb2, 0xb3, 
    0x5, 0x1a, 0xe, 0x2, 0xb3, 0xba, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb5, 0xc, 
    0x4, 0x2, 0x2, 0xb5, 0xb9, 0x5, 0x20, 0x11, 0x2, 0xb6, 0xb7, 0xc, 0x3, 
    0x2, 0x2, 0xb7, 0xb9, 0x5, 0x1e, 0x10, 0x2, 0xb8, 0xb4, 0x3, 0x2, 0x2, 
    0x2, 0xb8, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xbc, 0x3, 0x2, 0x2, 0x2, 
    0xba, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xbb, 
    0x1d, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xba, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xbe, 
    0x7, 0x10, 0x2, 0x2, 0xbe, 0xbf, 0x5, 0x1a, 0xe, 0x2, 0xbf, 0x1f, 0x3, 
    0x2, 0x2, 0x2, 0xc0, 0xc1, 0x7, 0x11, 0x2, 0x2, 0xc1, 0xc2, 0x5, 0x6, 
    0x4, 0x2, 0xc2, 0xc3, 0x5, 0x1a, 0xe, 0x2, 0xc3, 0x21, 0x3, 0x2, 0x2, 
    0x2, 0xc4, 0xc5, 0x7, 0x12, 0x2, 0x2, 0xc5, 0xc6, 0x5, 0x6, 0x4, 0x2, 
    0xc6, 0xc7, 0x5, 0x1a, 0xe, 0x2, 0xc7, 0x23, 0x3, 0x2, 0x2, 0x2, 0xc8, 
    0xc9, 0x7, 0x21, 0x2, 0x2, 0xc9, 0xca, 0x7, 0x6, 0x2, 0x2, 0xca, 0xcb, 
    0x5, 0x6, 0x4, 0x2, 0xcb, 0x25, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xcd, 0x7, 
    0x21, 0x2, 0x2, 0xcd, 0xce, 0x5, 0x30, 0x19, 0x2, 0xce, 0x27, 0x3, 0x2, 
    0x2, 0x2, 0xcf, 0xd0, 0x7, 0x13, 0x2, 0x2, 0xd0, 0xd1, 0x5, 0x6, 0x4, 
    0x2, 0xd1, 0x29, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd3, 0x9, 0x3, 0x2, 0x2, 
    0xd3, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd5, 0x9, 0x4, 0x2, 0x2, 0xd5, 
    0x2d, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd7, 0x9, 0x5, 0x2, 0x2, 0xd7, 0x2f, 
    0x3, 0x2, 0x2, 0x2, 0xd8, 0xd9, 0x9, 0x6, 0x2, 0x2, 0xd9, 0x31, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0x35, 0x4f, 0x58, 0x66, 0x68, 0x6f, 0x81, 0x8f, 
    0x92, 0x95, 0x9f, 0xa2, 0xa8, 0xad, 0xb8, 0xba, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

GoGoParser::Initializer GoGoParser::_init;
