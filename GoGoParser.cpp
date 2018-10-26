
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
    setState(31); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(30);
      stat();
      setState(33); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << GoGoParser::T__0)
      | (1ULL << GoGoParser::T__2)
      | (1ULL << GoGoParser::T__3)
      | (1ULL << GoGoParser::T__14)
      | (1ULL << GoGoParser::T__17)
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

GoGoParser::If_stmtContext* GoGoParser::StatContext::if_stmt() {
  return getRuleContext<GoGoParser::If_stmtContext>(0);
}

GoGoParser::Func_defintionContext* GoGoParser::StatContext::func_defintion() {
  return getRuleContext<GoGoParser::Func_defintionContext>(0);
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
    setState(49);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(40);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
      case 1: {
        setState(35);
        expr(0);
        setState(36);
        match(GoGoParser::NEWLINE);
        break;
      }

      case 2: {
        setState(38);
        assignment_stmt();
        break;
      }

      case 3: {
        setState(39);
        match(GoGoParser::NEWLINE);
        break;
      }

      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(42);
      declaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(43);
      if_stmt(0);
      setState(44);
      match(GoGoParser::NEWLINE);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(46);
      func_defintion();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(47);
      while_loop_stmt();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(48);
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

tree::TerminalNode* GoGoParser::DeclarationContext::NEWLINE() {
  return getToken(GoGoParser::NEWLINE, 0);
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
  enterRule(_localctx, 4, GoGoParser::RuleDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(51);
    match(GoGoParser::T__0);
    setState(52);
    match(GoGoParser::ID);
    setState(53);
    match(GoGoParser::TYPE);
    setState(54);
    match(GoGoParser::T__1);
    setState(55);
    _la = _input->LA(1);
    if (!(_la == GoGoParser::DOUBLE

    || _la == GoGoParser::INT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(56);
    match(GoGoParser::NEWLINE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_defintionContext ------------------------------------------------------------------

GoGoParser::Func_defintionContext::Func_defintionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GoGoParser::Func_defintionContext::ID() {
  return getToken(GoGoParser::ID, 0);
}

GoGoParser::ParamsContext* GoGoParser::Func_defintionContext::params() {
  return getRuleContext<GoGoParser::ParamsContext>(0);
}

GoGoParser::Compound_stmtContext* GoGoParser::Func_defintionContext::compound_stmt() {
  return getRuleContext<GoGoParser::Compound_stmtContext>(0);
}

tree::TerminalNode* GoGoParser::Func_defintionContext::TYPE() {
  return getToken(GoGoParser::TYPE, 0);
}

tree::TerminalNode* GoGoParser::Func_defintionContext::NEWLINE() {
  return getToken(GoGoParser::NEWLINE, 0);
}

GoGoParser::Return_stmtContext* GoGoParser::Func_defintionContext::return_stmt() {
  return getRuleContext<GoGoParser::Return_stmtContext>(0);
}


size_t GoGoParser::Func_defintionContext::getRuleIndex() const {
  return GoGoParser::RuleFunc_defintion;
}

void GoGoParser::Func_defintionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GoGoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunc_defintion(this);
}

void GoGoParser::Func_defintionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GoGoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunc_defintion(this);
}

GoGoParser::Func_defintionContext* GoGoParser::func_defintion() {
  Func_defintionContext *_localctx = _tracker.createInstance<Func_defintionContext>(_ctx, getState());
  enterRule(_localctx, 6, GoGoParser::RuleFunc_defintion);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(58);
    match(GoGoParser::T__2);
    setState(59);
    match(GoGoParser::ID);
    setState(60);
    match(GoGoParser::T__3);
    setState(61);
    params();
    setState(62);
    match(GoGoParser::T__4);
    setState(64);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == GoGoParser::TYPE) {
      setState(63);
      match(GoGoParser::TYPE);
    }
    setState(67);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == GoGoParser::NEWLINE) {
      setState(66);
      match(GoGoParser::NEWLINE);
    }
    setState(69);
    compound_stmt();
    setState(71);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == GoGoParser::T__18) {
      setState(70);
      return_stmt();
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
  enterRule(_localctx, 8, GoGoParser::RuleFunc_call);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(73);
    match(GoGoParser::ID);
    setState(74);
    match(GoGoParser::T__3);
    setState(75);
    func_call_params();
    setState(76);
    match(GoGoParser::T__4);
   
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
  enterRule(_localctx, 10, GoGoParser::RuleFunc_call_params);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(86);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << GoGoParser::T__3)
      | (1ULL << GoGoParser::DOUBLE)
      | (1ULL << GoGoParser::ID)
      | (1ULL << GoGoParser::INT))) != 0)) {
      setState(78);
      expr(0);
      setState(83);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == GoGoParser::T__5) {
        setState(79);
        match(GoGoParser::T__5);
        setState(80);
        expr(0);
        setState(85);
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
  enterRule(_localctx, 12, GoGoParser::RuleParam);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(89);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == GoGoParser::T__6) {
      setState(88);
      match(GoGoParser::T__6);
    }
    setState(91);
    match(GoGoParser::ID);
    setState(92);
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
  enterRule(_localctx, 14, GoGoParser::RuleParams);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(102);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == GoGoParser::T__6

    || _la == GoGoParser::ID) {
      setState(94);
      param();
      setState(99);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == GoGoParser::T__5) {
        setState(95);
        match(GoGoParser::T__5);
        setState(96);
        param();
        setState(101);
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

tree::TerminalNode* GoGoParser::Compound_stmtContext::NEWLINE() {
  return getToken(GoGoParser::NEWLINE, 0);
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
  enterRule(_localctx, 16, GoGoParser::RuleCompound_stmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(104);
    match(GoGoParser::T__7);
    setState(106);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      setState(105);
      match(GoGoParser::NEWLINE);
      break;
    }

    }
    setState(109); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(108);
      stat();
      setState(111); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << GoGoParser::T__0)
      | (1ULL << GoGoParser::T__2)
      | (1ULL << GoGoParser::T__3)
      | (1ULL << GoGoParser::T__14)
      | (1ULL << GoGoParser::T__17)
      | (1ULL << GoGoParser::DOUBLE)
      | (1ULL << GoGoParser::ID)
      | (1ULL << GoGoParser::INT)
      | (1ULL << GoGoParser::NEWLINE))) != 0));
    setState(113);
    match(GoGoParser::T__8);
   
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
  size_t startState = 18;
  enterRecursionRule(_localctx, 18, GoGoParser::RuleExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(123);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GoGoParser::INT: {
        setState(116);
        match(GoGoParser::INT);
        break;
      }

      case GoGoParser::DOUBLE: {
        setState(117);
        match(GoGoParser::DOUBLE);
        break;
      }

      case GoGoParser::ID: {
        setState(118);
        match(GoGoParser::ID);
        break;
      }

      case GoGoParser::T__3: {
        setState(119);
        match(GoGoParser::T__3);
        setState(120);
        expr(0);
        setState(121);
        match(GoGoParser::T__4);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(136);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(134);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(125);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(126);
          _la = _input->LA(1);
          if (!(_la == GoGoParser::T__9

          || _la == GoGoParser::T__10)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(127);
          expr(8);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(128);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(129);
          _la = _input->LA(1);
          if (!(_la == GoGoParser::T__11

          || _la == GoGoParser::T__12)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(130);
          expr(7);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(131);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(132);
          match(GoGoParser::T__13);
          setState(133);
          expr(2);
          break;
        }

        } 
      }
      setState(138);
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
  size_t startState = 20;
  enterRecursionRule(_localctx, 20, GoGoParser::RuleIf_stmt, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(140);
    match(GoGoParser::T__14);
    setState(141);
    expr(0);
    setState(143);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == GoGoParser::NEWLINE) {
      setState(142);
      match(GoGoParser::NEWLINE);
    }
    setState(145);
    compound_stmt();
    _ctx->stop = _input->LT(-1);
    setState(159);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(157);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<If_stmtContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleIf_stmt);
          setState(147);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");

          setState(148);
          match(GoGoParser::T__15);
          setState(149);
          expr(0);
          setState(151);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == GoGoParser::NEWLINE) {
            setState(150);
            match(GoGoParser::NEWLINE);
          }
          setState(153);
          compound_stmt();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<If_stmtContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleIf_stmt);
          setState(155);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(156);
          else_stmt();
          break;
        }

        } 
      }
      setState(161);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
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
  enterRule(_localctx, 22, GoGoParser::RuleElse_stmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(162);
    match(GoGoParser::T__16);
    setState(164);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == GoGoParser::NEWLINE) {
      setState(163);
      match(GoGoParser::NEWLINE);
    }
    setState(166);
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
  enterRule(_localctx, 24, GoGoParser::RuleWhile_loop_stmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(168);
    match(GoGoParser::T__17);
    setState(169);
    expr(0);

    setState(171);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == GoGoParser::NEWLINE) {
      setState(170);
      match(GoGoParser::NEWLINE);
    }
    setState(173);
    compound_stmt();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Return_stmtContext ------------------------------------------------------------------

GoGoParser::Return_stmtContext::Return_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GoGoParser::StatContext* GoGoParser::Return_stmtContext::stat() {
  return getRuleContext<GoGoParser::StatContext>(0);
}


size_t GoGoParser::Return_stmtContext::getRuleIndex() const {
  return GoGoParser::RuleReturn_stmt;
}

void GoGoParser::Return_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GoGoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturn_stmt(this);
}

void GoGoParser::Return_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GoGoListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturn_stmt(this);
}

GoGoParser::Return_stmtContext* GoGoParser::return_stmt() {
  Return_stmtContext *_localctx = _tracker.createInstance<Return_stmtContext>(_ctx, getState());
  enterRule(_localctx, 26, GoGoParser::RuleReturn_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(175);
    match(GoGoParser::T__18);
    setState(176);
    stat();
   
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
    setState(178);
    match(GoGoParser::ID);
    setState(179);
    match(GoGoParser::T__1);
    setState(180);
    expr(0);
   
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
    case 9: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);
    case 10: return if_stmtSempred(dynamic_cast<If_stmtContext *>(context), predicateIndex);

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
  "prog", "stat", "declaration", "func_defintion", "func_call", "func_call_params", 
  "param", "params", "compound_stmt", "expr", "if_stmt", "else_stmt", "while_loop_stmt", 
  "return_stmt", "assignment_stmt"
};

std::vector<std::string> GoGoParser::_literalNames = {
  "", "'var'", "'='", "'func'", "'('", "')'", "','", "'&'", "'{'", "'}'", 
  "'*'", "'/'", "'+'", "'-'", "'=='", "'if'", "'else if'", "'else'", "'while'", 
  "'return'"
};

std::vector<std::string> GoGoParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "TYPE", "DOUBLE", "ID", "INT", "NEWLINE", "WS"
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
    0x3, 0x1b, 0xb9, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x3, 0x2, 0x6, 0x2, 0x22, 0xa, 
    0x2, 0xd, 0x2, 0xe, 0x2, 0x23, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x5, 0x3, 0x2b, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x34, 0xa, 0x3, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x43, 0xa, 
    0x5, 0x3, 0x5, 0x5, 0x5, 0x46, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 
    0x4a, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x54, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 
    0x57, 0xb, 0x7, 0x5, 0x7, 0x59, 0xa, 0x7, 0x3, 0x8, 0x5, 0x8, 0x5c, 
    0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x7, 0x9, 0x64, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x67, 0xb, 0x9, 0x5, 0x9, 
    0x69, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x6d, 0xa, 0xa, 0x3, 0xa, 
    0x6, 0xa, 0x70, 0xa, 0xa, 0xd, 0xa, 0xe, 0xa, 0x71, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x5, 0xb, 0x7e, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x89, 
    0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x8c, 0xb, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x5, 0xc, 0x92, 0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x9a, 0xa, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0xa0, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 
    0xa3, 0xb, 0xc, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0xa7, 0xa, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xae, 0xa, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x2, 0x4, 0x14, 0x16, 0x11, 0x2, 0x4, 0x6, 
    0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 
    0x2, 0x5, 0x4, 0x2, 0x17, 0x17, 0x19, 0x19, 0x3, 0x2, 0xc, 0xd, 0x3, 
    0x2, 0xe, 0xf, 0x2, 0xc7, 0x2, 0x21, 0x3, 0x2, 0x2, 0x2, 0x4, 0x33, 
    0x3, 0x2, 0x2, 0x2, 0x6, 0x35, 0x3, 0x2, 0x2, 0x2, 0x8, 0x3c, 0x3, 0x2, 
    0x2, 0x2, 0xa, 0x4b, 0x3, 0x2, 0x2, 0x2, 0xc, 0x58, 0x3, 0x2, 0x2, 0x2, 
    0xe, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x10, 0x68, 0x3, 0x2, 0x2, 0x2, 0x12, 
    0x6a, 0x3, 0x2, 0x2, 0x2, 0x14, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x16, 0x8d, 
    0x3, 0x2, 0x2, 0x2, 0x18, 0xa4, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xaa, 0x3, 
    0x2, 0x2, 0x2, 0x1c, 0xb1, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xb4, 0x3, 0x2, 
    0x2, 0x2, 0x20, 0x22, 0x5, 0x4, 0x3, 0x2, 0x21, 0x20, 0x3, 0x2, 0x2, 
    0x2, 0x22, 0x23, 0x3, 0x2, 0x2, 0x2, 0x23, 0x21, 0x3, 0x2, 0x2, 0x2, 
    0x23, 0x24, 0x3, 0x2, 0x2, 0x2, 0x24, 0x3, 0x3, 0x2, 0x2, 0x2, 0x25, 
    0x26, 0x5, 0x14, 0xb, 0x2, 0x26, 0x27, 0x7, 0x1a, 0x2, 0x2, 0x27, 0x2b, 
    0x3, 0x2, 0x2, 0x2, 0x28, 0x2b, 0x5, 0x1e, 0x10, 0x2, 0x29, 0x2b, 0x7, 
    0x1a, 0x2, 0x2, 0x2a, 0x25, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x28, 0x3, 0x2, 
    0x2, 0x2, 0x2a, 0x29, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x34, 0x3, 0x2, 0x2, 
    0x2, 0x2c, 0x34, 0x5, 0x6, 0x4, 0x2, 0x2d, 0x2e, 0x5, 0x16, 0xc, 0x2, 
    0x2e, 0x2f, 0x7, 0x1a, 0x2, 0x2, 0x2f, 0x34, 0x3, 0x2, 0x2, 0x2, 0x30, 
    0x34, 0x5, 0x8, 0x5, 0x2, 0x31, 0x34, 0x5, 0x1a, 0xe, 0x2, 0x32, 0x34, 
    0x5, 0xa, 0x6, 0x2, 0x33, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x33, 0x2c, 0x3, 
    0x2, 0x2, 0x2, 0x33, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x33, 0x30, 0x3, 0x2, 
    0x2, 0x2, 0x33, 0x31, 0x3, 0x2, 0x2, 0x2, 0x33, 0x32, 0x3, 0x2, 0x2, 
    0x2, 0x34, 0x5, 0x3, 0x2, 0x2, 0x2, 0x35, 0x36, 0x7, 0x3, 0x2, 0x2, 
    0x36, 0x37, 0x7, 0x18, 0x2, 0x2, 0x37, 0x38, 0x7, 0x16, 0x2, 0x2, 0x38, 
    0x39, 0x7, 0x4, 0x2, 0x2, 0x39, 0x3a, 0x9, 0x2, 0x2, 0x2, 0x3a, 0x3b, 
    0x7, 0x1a, 0x2, 0x2, 0x3b, 0x7, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3d, 0x7, 
    0x5, 0x2, 0x2, 0x3d, 0x3e, 0x7, 0x18, 0x2, 0x2, 0x3e, 0x3f, 0x7, 0x6, 
    0x2, 0x2, 0x3f, 0x40, 0x5, 0x10, 0x9, 0x2, 0x40, 0x42, 0x7, 0x7, 0x2, 
    0x2, 0x41, 0x43, 0x7, 0x16, 0x2, 0x2, 0x42, 0x41, 0x3, 0x2, 0x2, 0x2, 
    0x42, 0x43, 0x3, 0x2, 0x2, 0x2, 0x43, 0x45, 0x3, 0x2, 0x2, 0x2, 0x44, 
    0x46, 0x7, 0x1a, 0x2, 0x2, 0x45, 0x44, 0x3, 0x2, 0x2, 0x2, 0x45, 0x46, 
    0x3, 0x2, 0x2, 0x2, 0x46, 0x47, 0x3, 0x2, 0x2, 0x2, 0x47, 0x49, 0x5, 
    0x12, 0xa, 0x2, 0x48, 0x4a, 0x5, 0x1c, 0xf, 0x2, 0x49, 0x48, 0x3, 0x2, 
    0x2, 0x2, 0x49, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x9, 0x3, 0x2, 0x2, 
    0x2, 0x4b, 0x4c, 0x7, 0x18, 0x2, 0x2, 0x4c, 0x4d, 0x7, 0x6, 0x2, 0x2, 
    0x4d, 0x4e, 0x5, 0xc, 0x7, 0x2, 0x4e, 0x4f, 0x7, 0x7, 0x2, 0x2, 0x4f, 
    0xb, 0x3, 0x2, 0x2, 0x2, 0x50, 0x55, 0x5, 0x14, 0xb, 0x2, 0x51, 0x52, 
    0x7, 0x8, 0x2, 0x2, 0x52, 0x54, 0x5, 0x14, 0xb, 0x2, 0x53, 0x51, 0x3, 
    0x2, 0x2, 0x2, 0x54, 0x57, 0x3, 0x2, 0x2, 0x2, 0x55, 0x53, 0x3, 0x2, 
    0x2, 0x2, 0x55, 0x56, 0x3, 0x2, 0x2, 0x2, 0x56, 0x59, 0x3, 0x2, 0x2, 
    0x2, 0x57, 0x55, 0x3, 0x2, 0x2, 0x2, 0x58, 0x50, 0x3, 0x2, 0x2, 0x2, 
    0x58, 0x59, 0x3, 0x2, 0x2, 0x2, 0x59, 0xd, 0x3, 0x2, 0x2, 0x2, 0x5a, 
    0x5c, 0x7, 0x9, 0x2, 0x2, 0x5b, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5c, 
    0x3, 0x2, 0x2, 0x2, 0x5c, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5e, 0x7, 
    0x18, 0x2, 0x2, 0x5e, 0x5f, 0x7, 0x16, 0x2, 0x2, 0x5f, 0xf, 0x3, 0x2, 
    0x2, 0x2, 0x60, 0x65, 0x5, 0xe, 0x8, 0x2, 0x61, 0x62, 0x7, 0x8, 0x2, 
    0x2, 0x62, 0x64, 0x5, 0xe, 0x8, 0x2, 0x63, 0x61, 0x3, 0x2, 0x2, 0x2, 
    0x64, 0x67, 0x3, 0x2, 0x2, 0x2, 0x65, 0x63, 0x3, 0x2, 0x2, 0x2, 0x65, 
    0x66, 0x3, 0x2, 0x2, 0x2, 0x66, 0x69, 0x3, 0x2, 0x2, 0x2, 0x67, 0x65, 
    0x3, 0x2, 0x2, 0x2, 0x68, 0x60, 0x3, 0x2, 0x2, 0x2, 0x68, 0x69, 0x3, 
    0x2, 0x2, 0x2, 0x69, 0x11, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6c, 0x7, 0xa, 
    0x2, 0x2, 0x6b, 0x6d, 0x7, 0x1a, 0x2, 0x2, 0x6c, 0x6b, 0x3, 0x2, 0x2, 
    0x2, 0x6c, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6f, 0x3, 0x2, 0x2, 0x2, 
    0x6e, 0x70, 0x5, 0x4, 0x3, 0x2, 0x6f, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x70, 
    0x71, 0x3, 0x2, 0x2, 0x2, 0x71, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x71, 0x72, 
    0x3, 0x2, 0x2, 0x2, 0x72, 0x73, 0x3, 0x2, 0x2, 0x2, 0x73, 0x74, 0x7, 
    0xb, 0x2, 0x2, 0x74, 0x13, 0x3, 0x2, 0x2, 0x2, 0x75, 0x76, 0x8, 0xb, 
    0x1, 0x2, 0x76, 0x7e, 0x7, 0x19, 0x2, 0x2, 0x77, 0x7e, 0x7, 0x17, 0x2, 
    0x2, 0x78, 0x7e, 0x7, 0x18, 0x2, 0x2, 0x79, 0x7a, 0x7, 0x6, 0x2, 0x2, 
    0x7a, 0x7b, 0x5, 0x14, 0xb, 0x2, 0x7b, 0x7c, 0x7, 0x7, 0x2, 0x2, 0x7c, 
    0x7e, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x75, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x77, 
    0x3, 0x2, 0x2, 0x2, 0x7d, 0x78, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x79, 0x3, 
    0x2, 0x2, 0x2, 0x7e, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x80, 0xc, 0x9, 
    0x2, 0x2, 0x80, 0x81, 0x9, 0x3, 0x2, 0x2, 0x81, 0x89, 0x5, 0x14, 0xb, 
    0xa, 0x82, 0x83, 0xc, 0x8, 0x2, 0x2, 0x83, 0x84, 0x9, 0x4, 0x2, 0x2, 
    0x84, 0x89, 0x5, 0x14, 0xb, 0x9, 0x85, 0x86, 0xc, 0x3, 0x2, 0x2, 0x86, 
    0x87, 0x7, 0x10, 0x2, 0x2, 0x87, 0x89, 0x5, 0x14, 0xb, 0x4, 0x88, 0x7f, 
    0x3, 0x2, 0x2, 0x2, 0x88, 0x82, 0x3, 0x2, 0x2, 0x2, 0x88, 0x85, 0x3, 
    0x2, 0x2, 0x2, 0x89, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x88, 0x3, 0x2, 
    0x2, 0x2, 0x8a, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x15, 0x3, 0x2, 0x2, 
    0x2, 0x8c, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8e, 0x8, 0xc, 0x1, 0x2, 
    0x8e, 0x8f, 0x7, 0x11, 0x2, 0x2, 0x8f, 0x91, 0x5, 0x14, 0xb, 0x2, 0x90, 
    0x92, 0x7, 0x1a, 0x2, 0x2, 0x91, 0x90, 0x3, 0x2, 0x2, 0x2, 0x91, 0x92, 
    0x3, 0x2, 0x2, 0x2, 0x92, 0x93, 0x3, 0x2, 0x2, 0x2, 0x93, 0x94, 0x5, 
    0x12, 0xa, 0x2, 0x94, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x95, 0x96, 0xc, 0x4, 
    0x2, 0x2, 0x96, 0x97, 0x7, 0x12, 0x2, 0x2, 0x97, 0x99, 0x5, 0x14, 0xb, 
    0x2, 0x98, 0x9a, 0x7, 0x1a, 0x2, 0x2, 0x99, 0x98, 0x3, 0x2, 0x2, 0x2, 
    0x99, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x9b, 
    0x9c, 0x5, 0x12, 0xa, 0x2, 0x9c, 0xa0, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9e, 
    0xc, 0x3, 0x2, 0x2, 0x9e, 0xa0, 0x5, 0x18, 0xd, 0x2, 0x9f, 0x95, 0x3, 
    0x2, 0x2, 0x2, 0x9f, 0x9d, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa3, 0x3, 0x2, 
    0x2, 0x2, 0xa1, 0x9f, 0x3, 0x2, 0x2, 0x2, 0xa1, 0xa2, 0x3, 0x2, 0x2, 
    0x2, 0xa2, 0x17, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa1, 0x3, 0x2, 0x2, 0x2, 
    0xa4, 0xa6, 0x7, 0x13, 0x2, 0x2, 0xa5, 0xa7, 0x7, 0x1a, 0x2, 0x2, 0xa6, 
    0xa5, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa8, 
    0x3, 0x2, 0x2, 0x2, 0xa8, 0xa9, 0x5, 0x12, 0xa, 0x2, 0xa9, 0x19, 0x3, 
    0x2, 0x2, 0x2, 0xaa, 0xab, 0x7, 0x14, 0x2, 0x2, 0xab, 0xad, 0x5, 0x14, 
    0xb, 0x2, 0xac, 0xae, 0x7, 0x1a, 0x2, 0x2, 0xad, 0xac, 0x3, 0x2, 0x2, 
    0x2, 0xad, 0xae, 0x3, 0x2, 0x2, 0x2, 0xae, 0xaf, 0x3, 0x2, 0x2, 0x2, 
    0xaf, 0xb0, 0x5, 0x12, 0xa, 0x2, 0xb0, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xb1, 
    0xb2, 0x7, 0x15, 0x2, 0x2, 0xb2, 0xb3, 0x5, 0x4, 0x3, 0x2, 0xb3, 0x1d, 
    0x3, 0x2, 0x2, 0x2, 0xb4, 0xb5, 0x7, 0x18, 0x2, 0x2, 0xb5, 0xb6, 0x7, 
    0x4, 0x2, 0x2, 0xb6, 0xb7, 0x5, 0x14, 0xb, 0x2, 0xb7, 0x1f, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0x23, 0x2a, 0x33, 0x42, 0x45, 0x49, 0x55, 0x58, 0x5b, 
    0x65, 0x68, 0x6c, 0x71, 0x7d, 0x88, 0x8a, 0x91, 0x99, 0x9f, 0xa1, 0xa6, 
    0xad, 
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
