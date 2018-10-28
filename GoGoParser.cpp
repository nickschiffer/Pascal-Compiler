
// Generated from GoGo.g4 by ANTLR 4.7.1


#include "GoGoListener.h"

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

void GoGoParser::ProgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GoGoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProg(this);
}

void GoGoParser::ProgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GoGoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProg(this);
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
    setState(33); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(32);
      stat();
      setState(35); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << GoGoParser::T__4)
      | (1ULL << GoGoParser::T__12)
      | (1ULL << GoGoParser::T__15)
      | (1ULL << GoGoParser::T__21)
      | (1ULL << GoGoParser::T__24)
      | (1ULL << GoGoParser::DOUBLE)
      | (1ULL << GoGoParser::ID)
      | (1ULL << GoGoParser::INT)
      | (1ULL << GoGoParser::NEWLINE))) != 0));
   
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

tree::TerminalNode* GoGoParser::StatContext::NEWLINE() {
  return getToken(GoGoParser::NEWLINE, 0);
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


size_t GoGoParser::StatContext::getRuleIndex() const {
  return GoGoParser::RuleStat;
}

void GoGoParser::StatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GoGoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStat(this);
}

void GoGoParser::StatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GoGoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStat(this);
}

GoGoParser::StatContext* GoGoParser::stat() {
  StatContext *_localctx = _tracker.createInstance<StatContext>(_ctx, getState());
  enterRule(_localctx, 2, GoGoParser::RuleStat);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(53);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(37);
      inc_dec();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(43);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
      case 1: {
        setState(38);
        expr(0);
        setState(39);
        match(GoGoParser::NEWLINE);
        break;
      }

      case 2: {
        setState(41);
        assignment_stmt();
        break;
      }

      case 3: {
        setState(42);
        match(GoGoParser::NEWLINE);
        break;
      }

      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(45);
      declaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(46);
      declaration_implicit();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(47);
      if_stmt(0);
      setState(48);
      match(GoGoParser::NEWLINE);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(50);
      func_definition();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(51);
      while_loop_stmt();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(52);
      func_call();
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

tree::TerminalNode* GoGoParser::ExprContext::INT() {
  return getToken(GoGoParser::INT, 0);
}

tree::TerminalNode* GoGoParser::ExprContext::DOUBLE() {
  return getToken(GoGoParser::DOUBLE, 0);
}

tree::TerminalNode* GoGoParser::ExprContext::ID() {
  return getToken(GoGoParser::ID, 0);
}

std::vector<GoGoParser::ExprContext *> GoGoParser::ExprContext::expr() {
  return getRuleContexts<GoGoParser::ExprContext>();
}

GoGoParser::ExprContext* GoGoParser::ExprContext::expr(size_t i) {
  return getRuleContext<GoGoParser::ExprContext>(i);
}


size_t GoGoParser::ExprContext::getRuleIndex() const {
  return GoGoParser::RuleExpr;
}

void GoGoParser::ExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GoGoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr(this);
}

void GoGoParser::ExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GoGoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr(this);
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

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(63);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GoGoParser::INT: {
        setState(56);
        match(GoGoParser::INT);
        break;
      }

      case GoGoParser::DOUBLE: {
        setState(57);
        match(GoGoParser::DOUBLE);
        break;
      }

      case GoGoParser::ID: {
        setState(58);
        match(GoGoParser::ID);
        break;
      }

      case GoGoParser::T__4: {
        setState(59);
        match(GoGoParser::T__4);
        setState(60);
        expr(0);
        setState(61);
        match(GoGoParser::T__5);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(76);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(74);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(65);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(66);
          _la = _input->LA(1);
          if (!(_la == GoGoParser::T__0

          || _la == GoGoParser::T__1)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(67);
          expr(8);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(68);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(69);
          _la = _input->LA(1);
          if (!(_la == GoGoParser::T__2

          || _la == GoGoParser::T__3)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(70);
          expr(7);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(71);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(72);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << GoGoParser::T__6)
            | (1ULL << GoGoParser::T__7)
            | (1ULL << GoGoParser::T__8)
            | (1ULL << GoGoParser::T__9)
            | (1ULL << GoGoParser::T__10)
            | (1ULL << GoGoParser::T__11))) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(73);
          expr(2);
          break;
        }

        } 
      }
      setState(78);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
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

std::vector<tree::TerminalNode *> GoGoParser::DeclarationContext::NEWLINE() {
  return getTokens(GoGoParser::NEWLINE);
}

tree::TerminalNode* GoGoParser::DeclarationContext::NEWLINE(size_t i) {
  return getToken(GoGoParser::NEWLINE, i);
}


size_t GoGoParser::DeclarationContext::getRuleIndex() const {
  return GoGoParser::RuleDeclaration;
}

void GoGoParser::DeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GoGoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaration(this);
}

void GoGoParser::DeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GoGoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaration(this);
}

GoGoParser::DeclarationContext* GoGoParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 6, GoGoParser::RuleDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(79);
    match(GoGoParser::T__12);
    setState(80);
    match(GoGoParser::ID);
    setState(81);
    match(GoGoParser::TYPE);
    setState(82);
    match(GoGoParser::T__13);
    setState(83);
    _la = _input->LA(1);
    if (!(_la == GoGoParser::DOUBLE

    || _la == GoGoParser::INT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(85); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(84);
              match(GoGoParser::NEWLINE);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(87); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
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

std::vector<tree::TerminalNode *> GoGoParser::Declaration_implicitContext::NEWLINE() {
  return getTokens(GoGoParser::NEWLINE);
}

tree::TerminalNode* GoGoParser::Declaration_implicitContext::NEWLINE(size_t i) {
  return getToken(GoGoParser::NEWLINE, i);
}


size_t GoGoParser::Declaration_implicitContext::getRuleIndex() const {
  return GoGoParser::RuleDeclaration_implicit;
}

void GoGoParser::Declaration_implicitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GoGoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaration_implicit(this);
}

void GoGoParser::Declaration_implicitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GoGoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaration_implicit(this);
}

GoGoParser::Declaration_implicitContext* GoGoParser::declaration_implicit() {
  Declaration_implicitContext *_localctx = _tracker.createInstance<Declaration_implicitContext>(_ctx, getState());
  enterRule(_localctx, 8, GoGoParser::RuleDeclaration_implicit);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(89);
    match(GoGoParser::ID);
    setState(90);
    match(GoGoParser::T__14);
    setState(91);
    _la = _input->LA(1);
    if (!(_la == GoGoParser::DOUBLE

    || _la == GoGoParser::INT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(93); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(92);
              match(GoGoParser::NEWLINE);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(95); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
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

std::vector<tree::TerminalNode *> GoGoParser::Func_definitionContext::NEWLINE() {
  return getTokens(GoGoParser::NEWLINE);
}

tree::TerminalNode* GoGoParser::Func_definitionContext::NEWLINE(size_t i) {
  return getToken(GoGoParser::NEWLINE, i);
}

GoGoParser::ExprContext* GoGoParser::Func_definitionContext::expr() {
  return getRuleContext<GoGoParser::ExprContext>(0);
}


size_t GoGoParser::Func_definitionContext::getRuleIndex() const {
  return GoGoParser::RuleFunc_definition;
}

void GoGoParser::Func_definitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GoGoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunc_definition(this);
}

void GoGoParser::Func_definitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GoGoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunc_definition(this);
}

GoGoParser::Func_definitionContext* GoGoParser::func_definition() {
  Func_definitionContext *_localctx = _tracker.createInstance<Func_definitionContext>(_ctx, getState());
  enterRule(_localctx, 10, GoGoParser::RuleFunc_definition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(97);
    match(GoGoParser::T__15);
    setState(98);
    match(GoGoParser::ID);
    setState(99);
    match(GoGoParser::T__4);
    setState(100);
    params();
    setState(101);
    match(GoGoParser::T__5);
    setState(103);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == GoGoParser::TYPE) {
      setState(102);
      match(GoGoParser::TYPE);
    }
    setState(106); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(105);
              match(GoGoParser::NEWLINE);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(108); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(110);
    compound_stmt();
    setState(113);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      setState(111);
      match(GoGoParser::T__16);
      setState(112);
      expr(0);
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

void GoGoParser::Func_callContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GoGoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunc_call(this);
}

void GoGoParser::Func_callContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GoGoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunc_call(this);
}

GoGoParser::Func_callContext* GoGoParser::func_call() {
  Func_callContext *_localctx = _tracker.createInstance<Func_callContext>(_ctx, getState());
  enterRule(_localctx, 12, GoGoParser::RuleFunc_call);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(115);
    match(GoGoParser::ID);
    setState(116);
    match(GoGoParser::T__4);
    setState(117);
    func_call_params();
    setState(118);
    match(GoGoParser::T__5);
   
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

void GoGoParser::Func_call_paramsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GoGoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunc_call_params(this);
}

void GoGoParser::Func_call_paramsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GoGoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunc_call_params(this);
}

GoGoParser::Func_call_paramsContext* GoGoParser::func_call_params() {
  Func_call_paramsContext *_localctx = _tracker.createInstance<Func_call_paramsContext>(_ctx, getState());
  enterRule(_localctx, 14, GoGoParser::RuleFunc_call_params);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(128);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << GoGoParser::T__4)
      | (1ULL << GoGoParser::DOUBLE)
      | (1ULL << GoGoParser::ID)
      | (1ULL << GoGoParser::INT))) != 0)) {
      setState(120);
      expr(0);
      setState(125);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == GoGoParser::T__17) {
        setState(121);
        match(GoGoParser::T__17);
        setState(122);
        expr(0);
        setState(127);
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

void GoGoParser::ParamContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GoGoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParam(this);
}

void GoGoParser::ParamContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GoGoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParam(this);
}

GoGoParser::ParamContext* GoGoParser::param() {
  ParamContext *_localctx = _tracker.createInstance<ParamContext>(_ctx, getState());
  enterRule(_localctx, 16, GoGoParser::RuleParam);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(131);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == GoGoParser::T__18) {
      setState(130);
      match(GoGoParser::T__18);
    }
    setState(133);
    match(GoGoParser::ID);
    setState(134);
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

void GoGoParser::ParamsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GoGoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParams(this);
}

void GoGoParser::ParamsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GoGoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParams(this);
}

GoGoParser::ParamsContext* GoGoParser::params() {
  ParamsContext *_localctx = _tracker.createInstance<ParamsContext>(_ctx, getState());
  enterRule(_localctx, 18, GoGoParser::RuleParams);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(144);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == GoGoParser::T__18

    || _la == GoGoParser::ID) {
      setState(136);
      param();
      setState(141);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == GoGoParser::T__17) {
        setState(137);
        match(GoGoParser::T__17);
        setState(138);
        param();
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

//----------------- Compound_stmtContext ------------------------------------------------------------------

GoGoParser::Compound_stmtContext::Compound_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> GoGoParser::Compound_stmtContext::NEWLINE() {
  return getTokens(GoGoParser::NEWLINE);
}

tree::TerminalNode* GoGoParser::Compound_stmtContext::NEWLINE(size_t i) {
  return getToken(GoGoParser::NEWLINE, i);
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

void GoGoParser::Compound_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GoGoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompound_stmt(this);
}

void GoGoParser::Compound_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GoGoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompound_stmt(this);
}

GoGoParser::Compound_stmtContext* GoGoParser::compound_stmt() {
  Compound_stmtContext *_localctx = _tracker.createInstance<Compound_stmtContext>(_ctx, getState());
  enterRule(_localctx, 20, GoGoParser::RuleCompound_stmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(162);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GoGoParser::T__19: {
        enterOuterAlt(_localctx, 1);
        setState(146);
        match(GoGoParser::T__19);
        setState(150);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(147);
            match(GoGoParser::NEWLINE); 
          }
          setState(152);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
        }
        setState(154); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(153);
          stat();
          setState(156); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << GoGoParser::T__4)
          | (1ULL << GoGoParser::T__12)
          | (1ULL << GoGoParser::T__15)
          | (1ULL << GoGoParser::T__21)
          | (1ULL << GoGoParser::T__24)
          | (1ULL << GoGoParser::DOUBLE)
          | (1ULL << GoGoParser::ID)
          | (1ULL << GoGoParser::INT)
          | (1ULL << GoGoParser::NEWLINE))) != 0));
        setState(158);
        match(GoGoParser::T__20);
        break;
      }

      case GoGoParser::NEWLINE: {
        enterOuterAlt(_localctx, 2);
        setState(160);
        match(GoGoParser::NEWLINE);
        setState(161);
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

GoGoParser::ExprContext* GoGoParser::If_stmtContext::expr() {
  return getRuleContext<GoGoParser::ExprContext>(0);
}

GoGoParser::Compound_stmtContext* GoGoParser::If_stmtContext::compound_stmt() {
  return getRuleContext<GoGoParser::Compound_stmtContext>(0);
}

tree::TerminalNode* GoGoParser::If_stmtContext::NEWLINE() {
  return getToken(GoGoParser::NEWLINE, 0);
}

GoGoParser::If_stmtContext* GoGoParser::If_stmtContext::if_stmt() {
  return getRuleContext<GoGoParser::If_stmtContext>(0);
}

GoGoParser::Else_stmtContext* GoGoParser::If_stmtContext::else_stmt() {
  return getRuleContext<GoGoParser::Else_stmtContext>(0);
}


size_t GoGoParser::If_stmtContext::getRuleIndex() const {
  return GoGoParser::RuleIf_stmt;
}

void GoGoParser::If_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GoGoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_stmt(this);
}

void GoGoParser::If_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GoGoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_stmt(this);
}


GoGoParser::If_stmtContext* GoGoParser::if_stmt() {
   return if_stmt(0);
}

GoGoParser::If_stmtContext* GoGoParser::if_stmt(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  GoGoParser::If_stmtContext *_localctx = _tracker.createInstance<If_stmtContext>(_ctx, parentState);
  GoGoParser::If_stmtContext *previousContext = _localctx;
  size_t startState = 22;
  enterRecursionRule(_localctx, 22, GoGoParser::RuleIf_stmt, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(165);
    match(GoGoParser::T__21);
    setState(166);
    expr(0);
    setState(168);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      setState(167);
      match(GoGoParser::NEWLINE);
      break;
    }

    }
    setState(170);
    compound_stmt();
    _ctx->stop = _input->LT(-1);
    setState(184);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(182);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<If_stmtContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleIf_stmt);
          setState(172);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");

          setState(173);
          match(GoGoParser::T__22);
          setState(174);
          expr(0);
          setState(176);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
          case 1: {
            setState(175);
            match(GoGoParser::NEWLINE);
            break;
          }

          }
          setState(178);
          compound_stmt();
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
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
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

GoGoParser::Compound_stmtContext* GoGoParser::Else_stmtContext::compound_stmt() {
  return getRuleContext<GoGoParser::Compound_stmtContext>(0);
}

tree::TerminalNode* GoGoParser::Else_stmtContext::NEWLINE() {
  return getToken(GoGoParser::NEWLINE, 0);
}


size_t GoGoParser::Else_stmtContext::getRuleIndex() const {
  return GoGoParser::RuleElse_stmt;
}

void GoGoParser::Else_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GoGoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElse_stmt(this);
}

void GoGoParser::Else_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GoGoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElse_stmt(this);
}

GoGoParser::Else_stmtContext* GoGoParser::else_stmt() {
  Else_stmtContext *_localctx = _tracker.createInstance<Else_stmtContext>(_ctx, getState());
  enterRule(_localctx, 24, GoGoParser::RuleElse_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(187);
    match(GoGoParser::T__23);
    setState(189);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      setState(188);
      match(GoGoParser::NEWLINE);
      break;
    }

    }
    setState(191);
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

GoGoParser::ExprContext* GoGoParser::While_loop_stmtContext::expr() {
  return getRuleContext<GoGoParser::ExprContext>(0);
}

GoGoParser::Compound_stmtContext* GoGoParser::While_loop_stmtContext::compound_stmt() {
  return getRuleContext<GoGoParser::Compound_stmtContext>(0);
}

tree::TerminalNode* GoGoParser::While_loop_stmtContext::NEWLINE() {
  return getToken(GoGoParser::NEWLINE, 0);
}


size_t GoGoParser::While_loop_stmtContext::getRuleIndex() const {
  return GoGoParser::RuleWhile_loop_stmt;
}

void GoGoParser::While_loop_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GoGoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhile_loop_stmt(this);
}

void GoGoParser::While_loop_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GoGoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhile_loop_stmt(this);
}

GoGoParser::While_loop_stmtContext* GoGoParser::while_loop_stmt() {
  While_loop_stmtContext *_localctx = _tracker.createInstance<While_loop_stmtContext>(_ctx, getState());
  enterRule(_localctx, 26, GoGoParser::RuleWhile_loop_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(193);
    match(GoGoParser::T__24);
    setState(194);
    expr(0);

    setState(196);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      setState(195);
      match(GoGoParser::NEWLINE);
      break;
    }

    }
    setState(198);
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

void GoGoParser::Assignment_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GoGoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment_stmt(this);
}

void GoGoParser::Assignment_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GoGoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment_stmt(this);
}

GoGoParser::Assignment_stmtContext* GoGoParser::assignment_stmt() {
  Assignment_stmtContext *_localctx = _tracker.createInstance<Assignment_stmtContext>(_ctx, getState());
  enterRule(_localctx, 28, GoGoParser::RuleAssignment_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(200);
    match(GoGoParser::ID);
    setState(201);
    match(GoGoParser::T__13);
    setState(202);
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

std::vector<tree::TerminalNode *> GoGoParser::Inc_decContext::NEWLINE() {
  return getTokens(GoGoParser::NEWLINE);
}

tree::TerminalNode* GoGoParser::Inc_decContext::NEWLINE(size_t i) {
  return getToken(GoGoParser::NEWLINE, i);
}


size_t GoGoParser::Inc_decContext::getRuleIndex() const {
  return GoGoParser::RuleInc_dec;
}

void GoGoParser::Inc_decContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GoGoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInc_dec(this);
}

void GoGoParser::Inc_decContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GoGoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInc_dec(this);
}

GoGoParser::Inc_decContext* GoGoParser::inc_dec() {
  Inc_decContext *_localctx = _tracker.createInstance<Inc_decContext>(_ctx, getState());
  enterRule(_localctx, 30, GoGoParser::RuleInc_dec);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(204);
    match(GoGoParser::ID);
    setState(205);
    _la = _input->LA(1);
    if (!(_la == GoGoParser::T__25

    || _la == GoGoParser::T__26)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(207); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(206);
              match(GoGoParser::NEWLINE);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(209); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
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
    case 11: return if_stmtSempred(dynamic_cast<If_stmtContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool GoGoParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 7);
    case 1: return precpred(_ctx, 6);
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
  "prog", "stat", "expr", "declaration", "declaration_implicit", "func_definition", 
  "func_call", "func_call_params", "param", "params", "compound_stmt", "if_stmt", 
  "else_stmt", "while_loop_stmt", "assignment_stmt", "inc_dec"
};

std::vector<std::string> GoGoParser::_literalNames = {
  "", "'*'", "'/'", "'+'", "'-'", "'('", "')'", "'=='", "'>'", "'>='", "'<'", 
  "'<='", "'!='", "'var'", "'='", "':='", "'func'", "'return'", "','", "'&'", 
  "'{'", "'}'", "'if'", "'else if'", "'else'", "'while'", "'++'", "'--'"
};

std::vector<std::string> GoGoParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "TYPE", "DOUBLE", "ID", "INT", 
  "NEWLINE", "WS", "COMMENT"
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
    0x3, 0x24, 0xd6, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x3, 0x2, 
    0x6, 0x2, 0x24, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0x25, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x2e, 0xa, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x5, 0x3, 0x38, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x42, 0xa, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x7, 0x4, 0x4d, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x50, 0xb, 
    0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x6, 
    0x5, 0x58, 0xa, 0x5, 0xd, 0x5, 0xe, 0x5, 0x59, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x6, 0x6, 0x60, 0xa, 0x6, 0xd, 0x6, 0xe, 0x6, 0x61, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x6a, 
    0xa, 0x7, 0x3, 0x7, 0x6, 0x7, 0x6d, 0xa, 0x7, 0xd, 0x7, 0xe, 0x7, 0x6e, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x74, 0xa, 0x7, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 
    0x9, 0x7e, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x81, 0xb, 0x9, 0x5, 0x9, 0x83, 
    0xa, 0x9, 0x3, 0xa, 0x5, 0xa, 0x86, 0xa, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x8e, 0xa, 0xb, 0xc, 0xb, 
    0xe, 0xb, 0x91, 0xb, 0xb, 0x5, 0xb, 0x93, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 
    0x7, 0xc, 0x97, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x9a, 0xb, 0xc, 0x3, 0xc, 
    0x6, 0xc, 0x9d, 0xa, 0xc, 0xd, 0xc, 0xe, 0xc, 0x9e, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0xa5, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x5, 0xd, 0xab, 0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0xb3, 0xa, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0xb9, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 
    0xbc, 0xb, 0xd, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xc0, 0xa, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0xc7, 0xa, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x6, 0x11, 0xd2, 0xa, 0x11, 0xd, 0x11, 0xe, 0x11, 
    0xd3, 0x3, 0x11, 0x2, 0x4, 0x6, 0x18, 0x12, 0x2, 0x4, 0x6, 0x8, 0xa, 
    0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x2, 
    0x7, 0x3, 0x2, 0x3, 0x4, 0x3, 0x2, 0x5, 0x6, 0x3, 0x2, 0x9, 0xe, 0x4, 
    0x2, 0x1f, 0x1f, 0x21, 0x21, 0x3, 0x2, 0x1c, 0x1d, 0x2, 0xe9, 0x2, 0x23, 
    0x3, 0x2, 0x2, 0x2, 0x4, 0x37, 0x3, 0x2, 0x2, 0x2, 0x6, 0x41, 0x3, 0x2, 
    0x2, 0x2, 0x8, 0x51, 0x3, 0x2, 0x2, 0x2, 0xa, 0x5b, 0x3, 0x2, 0x2, 0x2, 
    0xc, 0x63, 0x3, 0x2, 0x2, 0x2, 0xe, 0x75, 0x3, 0x2, 0x2, 0x2, 0x10, 
    0x82, 0x3, 0x2, 0x2, 0x2, 0x12, 0x85, 0x3, 0x2, 0x2, 0x2, 0x14, 0x92, 
    0x3, 0x2, 0x2, 0x2, 0x16, 0xa4, 0x3, 0x2, 0x2, 0x2, 0x18, 0xa6, 0x3, 
    0x2, 0x2, 0x2, 0x1a, 0xbd, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xc3, 0x3, 0x2, 
    0x2, 0x2, 0x1e, 0xca, 0x3, 0x2, 0x2, 0x2, 0x20, 0xce, 0x3, 0x2, 0x2, 
    0x2, 0x22, 0x24, 0x5, 0x4, 0x3, 0x2, 0x23, 0x22, 0x3, 0x2, 0x2, 0x2, 
    0x24, 0x25, 0x3, 0x2, 0x2, 0x2, 0x25, 0x23, 0x3, 0x2, 0x2, 0x2, 0x25, 
    0x26, 0x3, 0x2, 0x2, 0x2, 0x26, 0x3, 0x3, 0x2, 0x2, 0x2, 0x27, 0x38, 
    0x5, 0x20, 0x11, 0x2, 0x28, 0x29, 0x5, 0x6, 0x4, 0x2, 0x29, 0x2a, 0x7, 
    0x22, 0x2, 0x2, 0x2a, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x2e, 0x5, 0x1e, 
    0x10, 0x2, 0x2c, 0x2e, 0x7, 0x22, 0x2, 0x2, 0x2d, 0x28, 0x3, 0x2, 0x2, 
    0x2, 0x2d, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2c, 0x3, 0x2, 0x2, 0x2, 
    0x2e, 0x38, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x38, 0x5, 0x8, 0x5, 0x2, 0x30, 
    0x38, 0x5, 0xa, 0x6, 0x2, 0x31, 0x32, 0x5, 0x18, 0xd, 0x2, 0x32, 0x33, 
    0x7, 0x22, 0x2, 0x2, 0x33, 0x38, 0x3, 0x2, 0x2, 0x2, 0x34, 0x38, 0x5, 
    0xc, 0x7, 0x2, 0x35, 0x38, 0x5, 0x1c, 0xf, 0x2, 0x36, 0x38, 0x5, 0xe, 
    0x8, 0x2, 0x37, 0x27, 0x3, 0x2, 0x2, 0x2, 0x37, 0x2d, 0x3, 0x2, 0x2, 
    0x2, 0x37, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x37, 0x30, 0x3, 0x2, 0x2, 0x2, 
    0x37, 0x31, 0x3, 0x2, 0x2, 0x2, 0x37, 0x34, 0x3, 0x2, 0x2, 0x2, 0x37, 
    0x35, 0x3, 0x2, 0x2, 0x2, 0x37, 0x36, 0x3, 0x2, 0x2, 0x2, 0x38, 0x5, 
    0x3, 0x2, 0x2, 0x2, 0x39, 0x3a, 0x8, 0x4, 0x1, 0x2, 0x3a, 0x42, 0x7, 
    0x21, 0x2, 0x2, 0x3b, 0x42, 0x7, 0x1f, 0x2, 0x2, 0x3c, 0x42, 0x7, 0x20, 
    0x2, 0x2, 0x3d, 0x3e, 0x7, 0x7, 0x2, 0x2, 0x3e, 0x3f, 0x5, 0x6, 0x4, 
    0x2, 0x3f, 0x40, 0x7, 0x8, 0x2, 0x2, 0x40, 0x42, 0x3, 0x2, 0x2, 0x2, 
    0x41, 0x39, 0x3, 0x2, 0x2, 0x2, 0x41, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x41, 
    0x3c, 0x3, 0x2, 0x2, 0x2, 0x41, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x42, 0x4e, 
    0x3, 0x2, 0x2, 0x2, 0x43, 0x44, 0xc, 0x9, 0x2, 0x2, 0x44, 0x45, 0x9, 
    0x2, 0x2, 0x2, 0x45, 0x4d, 0x5, 0x6, 0x4, 0xa, 0x46, 0x47, 0xc, 0x8, 
    0x2, 0x2, 0x47, 0x48, 0x9, 0x3, 0x2, 0x2, 0x48, 0x4d, 0x5, 0x6, 0x4, 
    0x9, 0x49, 0x4a, 0xc, 0x3, 0x2, 0x2, 0x4a, 0x4b, 0x9, 0x4, 0x2, 0x2, 
    0x4b, 0x4d, 0x5, 0x6, 0x4, 0x4, 0x4c, 0x43, 0x3, 0x2, 0x2, 0x2, 0x4c, 
    0x46, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x49, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x50, 
    0x3, 0x2, 0x2, 0x2, 0x4e, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4f, 0x3, 
    0x2, 0x2, 0x2, 0x4f, 0x7, 0x3, 0x2, 0x2, 0x2, 0x50, 0x4e, 0x3, 0x2, 
    0x2, 0x2, 0x51, 0x52, 0x7, 0xf, 0x2, 0x2, 0x52, 0x53, 0x7, 0x20, 0x2, 
    0x2, 0x53, 0x54, 0x7, 0x1e, 0x2, 0x2, 0x54, 0x55, 0x7, 0x10, 0x2, 0x2, 
    0x55, 0x57, 0x9, 0x5, 0x2, 0x2, 0x56, 0x58, 0x7, 0x22, 0x2, 0x2, 0x57, 
    0x56, 0x3, 0x2, 0x2, 0x2, 0x58, 0x59, 0x3, 0x2, 0x2, 0x2, 0x59, 0x57, 
    0x3, 0x2, 0x2, 0x2, 0x59, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x9, 0x3, 
    0x2, 0x2, 0x2, 0x5b, 0x5c, 0x7, 0x20, 0x2, 0x2, 0x5c, 0x5d, 0x7, 0x11, 
    0x2, 0x2, 0x5d, 0x5f, 0x9, 0x5, 0x2, 0x2, 0x5e, 0x60, 0x7, 0x22, 0x2, 
    0x2, 0x5f, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x60, 0x61, 0x3, 0x2, 0x2, 0x2, 
    0x61, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x61, 0x62, 0x3, 0x2, 0x2, 0x2, 0x62, 
    0xb, 0x3, 0x2, 0x2, 0x2, 0x63, 0x64, 0x7, 0x12, 0x2, 0x2, 0x64, 0x65, 
    0x7, 0x20, 0x2, 0x2, 0x65, 0x66, 0x7, 0x7, 0x2, 0x2, 0x66, 0x67, 0x5, 
    0x14, 0xb, 0x2, 0x67, 0x69, 0x7, 0x8, 0x2, 0x2, 0x68, 0x6a, 0x7, 0x1e, 
    0x2, 0x2, 0x69, 0x68, 0x3, 0x2, 0x2, 0x2, 0x69, 0x6a, 0x3, 0x2, 0x2, 
    0x2, 0x6a, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x6d, 0x7, 0x22, 0x2, 0x2, 
    0x6c, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x6e, 
    0x6c, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x70, 
    0x3, 0x2, 0x2, 0x2, 0x70, 0x73, 0x5, 0x16, 0xc, 0x2, 0x71, 0x72, 0x7, 
    0x13, 0x2, 0x2, 0x72, 0x74, 0x5, 0x6, 0x4, 0x2, 0x73, 0x71, 0x3, 0x2, 
    0x2, 0x2, 0x73, 0x74, 0x3, 0x2, 0x2, 0x2, 0x74, 0xd, 0x3, 0x2, 0x2, 
    0x2, 0x75, 0x76, 0x7, 0x20, 0x2, 0x2, 0x76, 0x77, 0x7, 0x7, 0x2, 0x2, 
    0x77, 0x78, 0x5, 0x10, 0x9, 0x2, 0x78, 0x79, 0x7, 0x8, 0x2, 0x2, 0x79, 
    0xf, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7f, 0x5, 0x6, 0x4, 0x2, 0x7b, 0x7c, 
    0x7, 0x14, 0x2, 0x2, 0x7c, 0x7e, 0x5, 0x6, 0x4, 0x2, 0x7d, 0x7b, 0x3, 
    0x2, 0x2, 0x2, 0x7e, 0x81, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x7d, 0x3, 0x2, 
    0x2, 0x2, 0x7f, 0x80, 0x3, 0x2, 0x2, 0x2, 0x80, 0x83, 0x3, 0x2, 0x2, 
    0x2, 0x81, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x82, 0x7a, 0x3, 0x2, 0x2, 0x2, 
    0x82, 0x83, 0x3, 0x2, 0x2, 0x2, 0x83, 0x11, 0x3, 0x2, 0x2, 0x2, 0x84, 
    0x86, 0x7, 0x15, 0x2, 0x2, 0x85, 0x84, 0x3, 0x2, 0x2, 0x2, 0x85, 0x86, 
    0x3, 0x2, 0x2, 0x2, 0x86, 0x87, 0x3, 0x2, 0x2, 0x2, 0x87, 0x88, 0x7, 
    0x20, 0x2, 0x2, 0x88, 0x89, 0x7, 0x1e, 0x2, 0x2, 0x89, 0x13, 0x3, 0x2, 
    0x2, 0x2, 0x8a, 0x8f, 0x5, 0x12, 0xa, 0x2, 0x8b, 0x8c, 0x7, 0x14, 0x2, 
    0x2, 0x8c, 0x8e, 0x5, 0x12, 0xa, 0x2, 0x8d, 0x8b, 0x3, 0x2, 0x2, 0x2, 
    0x8e, 0x91, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x8f, 
    0x90, 0x3, 0x2, 0x2, 0x2, 0x90, 0x93, 0x3, 0x2, 0x2, 0x2, 0x91, 0x8f, 
    0x3, 0x2, 0x2, 0x2, 0x92, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x92, 0x93, 0x3, 
    0x2, 0x2, 0x2, 0x93, 0x15, 0x3, 0x2, 0x2, 0x2, 0x94, 0x98, 0x7, 0x16, 
    0x2, 0x2, 0x95, 0x97, 0x7, 0x22, 0x2, 0x2, 0x96, 0x95, 0x3, 0x2, 0x2, 
    0x2, 0x97, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x98, 0x96, 0x3, 0x2, 0x2, 0x2, 
    0x98, 0x99, 0x3, 0x2, 0x2, 0x2, 0x99, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x9a, 
    0x98, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x9d, 0x5, 0x4, 0x3, 0x2, 0x9c, 0x9b, 
    0x3, 0x2, 0x2, 0x2, 0x9d, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x9c, 0x3, 
    0x2, 0x2, 0x2, 0x9e, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa0, 0x3, 0x2, 
    0x2, 0x2, 0xa0, 0xa1, 0x7, 0x17, 0x2, 0x2, 0xa1, 0xa5, 0x3, 0x2, 0x2, 
    0x2, 0xa2, 0xa3, 0x7, 0x22, 0x2, 0x2, 0xa3, 0xa5, 0x5, 0x4, 0x3, 0x2, 
    0xa4, 0x94, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa5, 
    0x17, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa7, 0x8, 0xd, 0x1, 0x2, 0xa7, 0xa8, 
    0x7, 0x18, 0x2, 0x2, 0xa8, 0xaa, 0x5, 0x6, 0x4, 0x2, 0xa9, 0xab, 0x7, 
    0x22, 0x2, 0x2, 0xaa, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xab, 0x3, 0x2, 
    0x2, 0x2, 0xab, 0xac, 0x3, 0x2, 0x2, 0x2, 0xac, 0xad, 0x5, 0x16, 0xc, 
    0x2, 0xad, 0xba, 0x3, 0x2, 0x2, 0x2, 0xae, 0xaf, 0xc, 0x4, 0x2, 0x2, 
    0xaf, 0xb0, 0x7, 0x19, 0x2, 0x2, 0xb0, 0xb2, 0x5, 0x6, 0x4, 0x2, 0xb1, 
    0xb3, 0x7, 0x22, 0x2, 0x2, 0xb2, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb3, 
    0x3, 0x2, 0x2, 0x2, 0xb3, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb5, 0x5, 
    0x16, 0xc, 0x2, 0xb5, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb7, 0xc, 0x3, 
    0x2, 0x2, 0xb7, 0xb9, 0x5, 0x1a, 0xe, 0x2, 0xb8, 0xae, 0x3, 0x2, 0x2, 
    0x2, 0xb8, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xbc, 0x3, 0x2, 0x2, 0x2, 
    0xba, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xbb, 
    0x19, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xba, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xbf, 
    0x7, 0x1a, 0x2, 0x2, 0xbe, 0xc0, 0x7, 0x22, 0x2, 0x2, 0xbf, 0xbe, 0x3, 
    0x2, 0x2, 0x2, 0xbf, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xc1, 0x3, 0x2, 
    0x2, 0x2, 0xc1, 0xc2, 0x5, 0x16, 0xc, 0x2, 0xc2, 0x1b, 0x3, 0x2, 0x2, 
    0x2, 0xc3, 0xc4, 0x7, 0x1b, 0x2, 0x2, 0xc4, 0xc6, 0x5, 0x6, 0x4, 0x2, 
    0xc5, 0xc7, 0x7, 0x22, 0x2, 0x2, 0xc6, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc6, 
    0xc7, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xc9, 
    0x5, 0x16, 0xc, 0x2, 0xc9, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcb, 0x7, 
    0x20, 0x2, 0x2, 0xcb, 0xcc, 0x7, 0x10, 0x2, 0x2, 0xcc, 0xcd, 0x5, 0x6, 
    0x4, 0x2, 0xcd, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcf, 0x7, 0x20, 0x2, 
    0x2, 0xcf, 0xd1, 0x9, 0x6, 0x2, 0x2, 0xd0, 0xd2, 0x7, 0x22, 0x2, 0x2, 
    0xd1, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd3, 
    0xd1, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd4, 0x21, 
    0x3, 0x2, 0x2, 0x2, 0x1c, 0x25, 0x2d, 0x37, 0x41, 0x4c, 0x4e, 0x59, 
    0x61, 0x69, 0x6e, 0x73, 0x7f, 0x82, 0x85, 0x8f, 0x92, 0x98, 0x9e, 0xa4, 
    0xaa, 0xb2, 0xb8, 0xba, 0xbf, 0xc6, 0xd3, 
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
