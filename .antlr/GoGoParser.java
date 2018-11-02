// Generated from /home/nick/Documents/CMPE152/Pascal-Compiler/GoGo.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class GoGoParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.7.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		TYPE=10, VAR=11, FUNC=12, IF=13, ELSE=14, ELSE_IF=15, WHILE=16, RETURN=17, 
		MUL_OP=18, DIV_OP=19, ADD_OP=20, SUB_OP=21, EQ_OP=22, NE_OP=23, LT_OP=24, 
		LE_OP=25, GT_OP=26, GE_OP=27, INC_OP=28, DEC_OP=29, DOUBLE=30, ID=31, 
		INT=32, NEWLINE=33, WS=34;
	public static final int
		RULE_prog = 0, RULE_stat = 1, RULE_expr = 2, RULE_declaration = 3, RULE_declaration_implicit = 4, 
		RULE_func_definition = 5, RULE_func_call = 6, RULE_func_call_params = 7, 
		RULE_param = 8, RULE_params = 9, RULE_compound_stmt = 10, RULE_if_stmt = 11, 
		RULE_else_stmt = 12, RULE_else_if_stmt = 13, RULE_while_loop_stmt = 14, 
		RULE_assignment_stmt = 15, RULE_inc_dec = 16, RULE_rtrn_stmt = 17, RULE_mul_div_op = 18, 
		RULE_add_sub_op = 19, RULE_rel_op = 20, RULE_inc_dec_op = 21;
	public static final String[] ruleNames = {
		"prog", "stat", "expr", "declaration", "declaration_implicit", "func_definition", 
		"func_call", "func_call_params", "param", "params", "compound_stmt", "if_stmt", 
		"else_stmt", "else_if_stmt", "while_loop_stmt", "assignment_stmt", "inc_dec", 
		"rtrn_stmt", "mul_div_op", "add_sub_op", "rel_op", "inc_dec_op"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "';'", "'('", "')'", "'='", "':='", "','", "'&'", "'{'", "'}'", 
		null, "'var'", "'func'", "'if'", "'else'", "'else if'", "'while'", "'return'", 
		"'*'", "'/'", "'+'", "'-'", "'=='", "'!='", "'<'", "'<='", "'>'", "'>='", 
		"'++'", "'--'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, null, null, null, null, null, null, null, null, null, "TYPE", "VAR", 
		"FUNC", "IF", "ELSE", "ELSE_IF", "WHILE", "RETURN", "MUL_OP", "DIV_OP", 
		"ADD_OP", "SUB_OP", "EQ_OP", "NE_OP", "LT_OP", "LE_OP", "GT_OP", "GE_OP", 
		"INC_OP", "DEC_OP", "DOUBLE", "ID", "INT", "NEWLINE", "WS"
	};
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "GoGo.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public GoGoParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}
	public static class ProgContext extends ParserRuleContext {
		public List<StatContext> stat() {
			return getRuleContexts(StatContext.class);
		}
		public StatContext stat(int i) {
			return getRuleContext(StatContext.class,i);
		}
		public ProgContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_prog; }
	}

	public final ProgContext prog() throws RecognitionException {
		ProgContext _localctx = new ProgContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_prog);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(45); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(44);
				stat();
				}
				}
				setState(47); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__1) | (1L << VAR) | (1L << FUNC) | (1L << IF) | (1L << WHILE) | (1L << RETURN) | (1L << DOUBLE) | (1L << ID) | (1L << INT))) != 0) );
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StatContext extends ParserRuleContext {
		public Inc_decContext inc_dec() {
			return getRuleContext(Inc_decContext.class,0);
		}
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public Assignment_stmtContext assignment_stmt() {
			return getRuleContext(Assignment_stmtContext.class,0);
		}
		public DeclarationContext declaration() {
			return getRuleContext(DeclarationContext.class,0);
		}
		public Declaration_implicitContext declaration_implicit() {
			return getRuleContext(Declaration_implicitContext.class,0);
		}
		public If_stmtContext if_stmt() {
			return getRuleContext(If_stmtContext.class,0);
		}
		public Func_definitionContext func_definition() {
			return getRuleContext(Func_definitionContext.class,0);
		}
		public While_loop_stmtContext while_loop_stmt() {
			return getRuleContext(While_loop_stmtContext.class,0);
		}
		public Func_callContext func_call() {
			return getRuleContext(Func_callContext.class,0);
		}
		public Rtrn_stmtContext rtrn_stmt() {
			return getRuleContext(Rtrn_stmtContext.class,0);
		}
		public StatContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stat; }
	}

	public final StatContext stat() throws RecognitionException {
		StatContext _localctx = new StatContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_stat);
		try {
			setState(73);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,1,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(49);
				inc_dec();
				setState(50);
				match(T__0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(52);
				expr(0);
				setState(53);
				match(T__0);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(55);
				assignment_stmt();
				setState(56);
				match(T__0);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(58);
				declaration();
				setState(59);
				match(T__0);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(61);
				declaration_implicit();
				setState(62);
				match(T__0);
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(64);
				if_stmt(0);
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(65);
				func_definition();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(66);
				while_loop_stmt();
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(67);
				func_call();
				setState(68);
				match(T__0);
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(70);
				rtrn_stmt();
				setState(71);
				match(T__0);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExprContext extends ParserRuleContext {
		public TerminalNode INT() { return getToken(GoGoParser.INT, 0); }
		public TerminalNode DOUBLE() { return getToken(GoGoParser.DOUBLE, 0); }
		public TerminalNode ID() { return getToken(GoGoParser.ID, 0); }
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public Mul_div_opContext mul_div_op() {
			return getRuleContext(Mul_div_opContext.class,0);
		}
		public Add_sub_opContext add_sub_op() {
			return getRuleContext(Add_sub_opContext.class,0);
		}
		public Rel_opContext rel_op() {
			return getRuleContext(Rel_opContext.class,0);
		}
		public ExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expr; }
	}

	public final ExprContext expr() throws RecognitionException {
		return expr(0);
	}

	private ExprContext expr(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ExprContext _localctx = new ExprContext(_ctx, _parentState);
		ExprContext _prevctx = _localctx;
		int _startState = 4;
		enterRecursionRule(_localctx, 4, RULE_expr, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(83);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case INT:
				{
				setState(76);
				match(INT);
				}
				break;
			case DOUBLE:
				{
				setState(77);
				match(DOUBLE);
				}
				break;
			case ID:
				{
				setState(78);
				match(ID);
				}
				break;
			case T__1:
				{
				setState(79);
				match(T__1);
				setState(80);
				expr(0);
				setState(81);
				match(T__2);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(99);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,4,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(97);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,3,_ctx) ) {
					case 1:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(85);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(86);
						mul_div_op();
						setState(87);
						expr(8);
						}
						break;
					case 2:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(89);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(90);
						add_sub_op();
						setState(91);
						expr(7);
						}
						break;
					case 3:
						{
						_localctx = new ExprContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(93);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(94);
						rel_op();
						setState(95);
						expr(2);
						}
						break;
					}
					} 
				}
				setState(101);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,4,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class DeclarationContext extends ParserRuleContext {
		public TerminalNode VAR() { return getToken(GoGoParser.VAR, 0); }
		public TerminalNode ID() { return getToken(GoGoParser.ID, 0); }
		public TerminalNode TYPE() { return getToken(GoGoParser.TYPE, 0); }
		public TerminalNode INT() { return getToken(GoGoParser.INT, 0); }
		public TerminalNode DOUBLE() { return getToken(GoGoParser.DOUBLE, 0); }
		public DeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declaration; }
	}

	public final DeclarationContext declaration() throws RecognitionException {
		DeclarationContext _localctx = new DeclarationContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_declaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(102);
			match(VAR);
			setState(103);
			match(ID);
			setState(104);
			match(TYPE);
			setState(105);
			match(T__3);
			setState(106);
			_la = _input.LA(1);
			if ( !(_la==DOUBLE || _la==INT) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Declaration_implicitContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(GoGoParser.ID, 0); }
		public TerminalNode INT() { return getToken(GoGoParser.INT, 0); }
		public TerminalNode DOUBLE() { return getToken(GoGoParser.DOUBLE, 0); }
		public Declaration_implicitContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declaration_implicit; }
	}

	public final Declaration_implicitContext declaration_implicit() throws RecognitionException {
		Declaration_implicitContext _localctx = new Declaration_implicitContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_declaration_implicit);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(108);
			match(ID);
			setState(109);
			match(T__4);
			setState(110);
			_la = _input.LA(1);
			if ( !(_la==DOUBLE || _la==INT) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Func_definitionContext extends ParserRuleContext {
		public TerminalNode FUNC() { return getToken(GoGoParser.FUNC, 0); }
		public TerminalNode ID() { return getToken(GoGoParser.ID, 0); }
		public ParamsContext params() {
			return getRuleContext(ParamsContext.class,0);
		}
		public Compound_stmtContext compound_stmt() {
			return getRuleContext(Compound_stmtContext.class,0);
		}
		public TerminalNode TYPE() { return getToken(GoGoParser.TYPE, 0); }
		public Func_definitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_func_definition; }
	}

	public final Func_definitionContext func_definition() throws RecognitionException {
		Func_definitionContext _localctx = new Func_definitionContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_func_definition);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(112);
			match(FUNC);
			setState(113);
			match(ID);
			setState(114);
			match(T__1);
			setState(115);
			params();
			setState(116);
			match(T__2);
			setState(118);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==TYPE) {
				{
				setState(117);
				match(TYPE);
				}
			}

			setState(120);
			compound_stmt();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Func_callContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(GoGoParser.ID, 0); }
		public Func_call_paramsContext func_call_params() {
			return getRuleContext(Func_call_paramsContext.class,0);
		}
		public Func_callContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_func_call; }
	}

	public final Func_callContext func_call() throws RecognitionException {
		Func_callContext _localctx = new Func_callContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_func_call);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(122);
			match(ID);
			setState(123);
			match(T__1);
			setState(124);
			func_call_params();
			setState(125);
			match(T__2);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Func_call_paramsContext extends ParserRuleContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public Func_call_paramsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_func_call_params; }
	}

	public final Func_call_paramsContext func_call_params() throws RecognitionException {
		Func_call_paramsContext _localctx = new Func_call_paramsContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_func_call_params);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(135);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__1) | (1L << DOUBLE) | (1L << ID) | (1L << INT))) != 0)) {
				{
				setState(127);
				expr(0);
				setState(132);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__5) {
					{
					{
					setState(128);
					match(T__5);
					setState(129);
					expr(0);
					}
					}
					setState(134);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ParamContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(GoGoParser.ID, 0); }
		public TerminalNode TYPE() { return getToken(GoGoParser.TYPE, 0); }
		public ParamContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_param; }
	}

	public final ParamContext param() throws RecognitionException {
		ParamContext _localctx = new ParamContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_param);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(138);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__6) {
				{
				setState(137);
				match(T__6);
				}
			}

			setState(140);
			match(ID);
			setState(141);
			match(TYPE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ParamsContext extends ParserRuleContext {
		public List<ParamContext> param() {
			return getRuleContexts(ParamContext.class);
		}
		public ParamContext param(int i) {
			return getRuleContext(ParamContext.class,i);
		}
		public ParamsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_params; }
	}

	public final ParamsContext params() throws RecognitionException {
		ParamsContext _localctx = new ParamsContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_params);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(151);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__6 || _la==ID) {
				{
				setState(143);
				param();
				setState(148);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__5) {
					{
					{
					setState(144);
					match(T__5);
					setState(145);
					param();
					}
					}
					setState(150);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Compound_stmtContext extends ParserRuleContext {
		public List<StatContext> stat() {
			return getRuleContexts(StatContext.class);
		}
		public StatContext stat(int i) {
			return getRuleContext(StatContext.class,i);
		}
		public Compound_stmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_compound_stmt; }
	}

	public final Compound_stmtContext compound_stmt() throws RecognitionException {
		Compound_stmtContext _localctx = new Compound_stmtContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_compound_stmt);
		int _la;
		try {
			setState(162);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__7:
				enterOuterAlt(_localctx, 1);
				{
				setState(153);
				match(T__7);
				setState(157);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__1) | (1L << VAR) | (1L << FUNC) | (1L << IF) | (1L << WHILE) | (1L << RETURN) | (1L << DOUBLE) | (1L << ID) | (1L << INT))) != 0)) {
					{
					{
					setState(154);
					stat();
					}
					}
					setState(159);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(160);
				match(T__8);
				}
				break;
			case T__1:
			case VAR:
			case FUNC:
			case IF:
			case WHILE:
			case RETURN:
			case DOUBLE:
			case ID:
			case INT:
				enterOuterAlt(_localctx, 2);
				{
				setState(161);
				stat();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class If_stmtContext extends ParserRuleContext {
		public TerminalNode IF() { return getToken(GoGoParser.IF, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public Compound_stmtContext compound_stmt() {
			return getRuleContext(Compound_stmtContext.class,0);
		}
		public If_stmtContext if_stmt() {
			return getRuleContext(If_stmtContext.class,0);
		}
		public Else_if_stmtContext else_if_stmt() {
			return getRuleContext(Else_if_stmtContext.class,0);
		}
		public Else_stmtContext else_stmt() {
			return getRuleContext(Else_stmtContext.class,0);
		}
		public If_stmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_if_stmt; }
	}

	public final If_stmtContext if_stmt() throws RecognitionException {
		return if_stmt(0);
	}

	private If_stmtContext if_stmt(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		If_stmtContext _localctx = new If_stmtContext(_ctx, _parentState);
		If_stmtContext _prevctx = _localctx;
		int _startState = 22;
		enterRecursionRule(_localctx, 22, RULE_if_stmt, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(165);
			match(IF);
			setState(166);
			expr(0);
			setState(167);
			compound_stmt();
			}
			_ctx.stop = _input.LT(-1);
			setState(175);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,14,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(173);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,13,_ctx) ) {
					case 1:
						{
						_localctx = new If_stmtContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_if_stmt);
						setState(169);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						{
						setState(170);
						else_if_stmt();
						}
						}
						break;
					case 2:
						{
						_localctx = new If_stmtContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_if_stmt);
						setState(171);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(172);
						else_stmt();
						}
						break;
					}
					} 
				}
				setState(177);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,14,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class Else_stmtContext extends ParserRuleContext {
		public TerminalNode ELSE() { return getToken(GoGoParser.ELSE, 0); }
		public Compound_stmtContext compound_stmt() {
			return getRuleContext(Compound_stmtContext.class,0);
		}
		public Else_stmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_else_stmt; }
	}

	public final Else_stmtContext else_stmt() throws RecognitionException {
		Else_stmtContext _localctx = new Else_stmtContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_else_stmt);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(178);
			match(ELSE);
			setState(179);
			compound_stmt();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Else_if_stmtContext extends ParserRuleContext {
		public TerminalNode ELSE_IF() { return getToken(GoGoParser.ELSE_IF, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public Compound_stmtContext compound_stmt() {
			return getRuleContext(Compound_stmtContext.class,0);
		}
		public Else_if_stmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_else_if_stmt; }
	}

	public final Else_if_stmtContext else_if_stmt() throws RecognitionException {
		Else_if_stmtContext _localctx = new Else_if_stmtContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_else_if_stmt);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(181);
			match(ELSE_IF);
			setState(182);
			expr(0);
			setState(183);
			compound_stmt();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class While_loop_stmtContext extends ParserRuleContext {
		public TerminalNode WHILE() { return getToken(GoGoParser.WHILE, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public Compound_stmtContext compound_stmt() {
			return getRuleContext(Compound_stmtContext.class,0);
		}
		public While_loop_stmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_while_loop_stmt; }
	}

	public final While_loop_stmtContext while_loop_stmt() throws RecognitionException {
		While_loop_stmtContext _localctx = new While_loop_stmtContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_while_loop_stmt);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(185);
			match(WHILE);
			setState(186);
			expr(0);
			{
			setState(187);
			compound_stmt();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Assignment_stmtContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(GoGoParser.ID, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public Assignment_stmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_assignment_stmt; }
	}

	public final Assignment_stmtContext assignment_stmt() throws RecognitionException {
		Assignment_stmtContext _localctx = new Assignment_stmtContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_assignment_stmt);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(189);
			match(ID);
			setState(190);
			match(T__3);
			setState(191);
			expr(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Inc_decContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(GoGoParser.ID, 0); }
		public Inc_dec_opContext inc_dec_op() {
			return getRuleContext(Inc_dec_opContext.class,0);
		}
		public Inc_decContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_inc_dec; }
	}

	public final Inc_decContext inc_dec() throws RecognitionException {
		Inc_decContext _localctx = new Inc_decContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_inc_dec);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(193);
			match(ID);
			setState(194);
			inc_dec_op();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Rtrn_stmtContext extends ParserRuleContext {
		public TerminalNode RETURN() { return getToken(GoGoParser.RETURN, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public Rtrn_stmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_rtrn_stmt; }
	}

	public final Rtrn_stmtContext rtrn_stmt() throws RecognitionException {
		Rtrn_stmtContext _localctx = new Rtrn_stmtContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_rtrn_stmt);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(196);
			match(RETURN);
			setState(197);
			expr(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Mul_div_opContext extends ParserRuleContext {
		public TerminalNode MUL_OP() { return getToken(GoGoParser.MUL_OP, 0); }
		public TerminalNode DIV_OP() { return getToken(GoGoParser.DIV_OP, 0); }
		public Mul_div_opContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_mul_div_op; }
	}

	public final Mul_div_opContext mul_div_op() throws RecognitionException {
		Mul_div_opContext _localctx = new Mul_div_opContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_mul_div_op);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(199);
			_la = _input.LA(1);
			if ( !(_la==MUL_OP || _la==DIV_OP) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Add_sub_opContext extends ParserRuleContext {
		public TerminalNode ADD_OP() { return getToken(GoGoParser.ADD_OP, 0); }
		public TerminalNode SUB_OP() { return getToken(GoGoParser.SUB_OP, 0); }
		public Add_sub_opContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_add_sub_op; }
	}

	public final Add_sub_opContext add_sub_op() throws RecognitionException {
		Add_sub_opContext _localctx = new Add_sub_opContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_add_sub_op);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(201);
			_la = _input.LA(1);
			if ( !(_la==ADD_OP || _la==SUB_OP) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Rel_opContext extends ParserRuleContext {
		public TerminalNode EQ_OP() { return getToken(GoGoParser.EQ_OP, 0); }
		public TerminalNode NE_OP() { return getToken(GoGoParser.NE_OP, 0); }
		public TerminalNode LT_OP() { return getToken(GoGoParser.LT_OP, 0); }
		public TerminalNode LE_OP() { return getToken(GoGoParser.LE_OP, 0); }
		public TerminalNode GT_OP() { return getToken(GoGoParser.GT_OP, 0); }
		public TerminalNode GE_OP() { return getToken(GoGoParser.GE_OP, 0); }
		public Rel_opContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_rel_op; }
	}

	public final Rel_opContext rel_op() throws RecognitionException {
		Rel_opContext _localctx = new Rel_opContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_rel_op);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(203);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << EQ_OP) | (1L << NE_OP) | (1L << LT_OP) | (1L << LE_OP) | (1L << GT_OP) | (1L << GE_OP))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Inc_dec_opContext extends ParserRuleContext {
		public TerminalNode INC_OP() { return getToken(GoGoParser.INC_OP, 0); }
		public TerminalNode DEC_OP() { return getToken(GoGoParser.DEC_OP, 0); }
		public Inc_dec_opContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_inc_dec_op; }
	}

	public final Inc_dec_opContext inc_dec_op() throws RecognitionException {
		Inc_dec_opContext _localctx = new Inc_dec_opContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_inc_dec_op);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(205);
			_la = _input.LA(1);
			if ( !(_la==INC_OP || _la==DEC_OP) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 2:
			return expr_sempred((ExprContext)_localctx, predIndex);
		case 11:
			return if_stmt_sempred((If_stmtContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean expr_sempred(ExprContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 7);
		case 1:
			return precpred(_ctx, 6);
		case 2:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean if_stmt_sempred(If_stmtContext _localctx, int predIndex) {
		switch (predIndex) {
		case 3:
			return precpred(_ctx, 2);
		case 4:
			return precpred(_ctx, 1);
		}
		return true;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3$\u00d2\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\3\2\6\2\60\n\2\r\2"+
		"\16\2\61\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3"+
		"\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\5\3L\n\3\3\4\3\4\3\4\3\4\3\4\3\4\3"+
		"\4\3\4\5\4V\n\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\7\4d\n"+
		"\4\f\4\16\4g\13\4\3\5\3\5\3\5\3\5\3\5\3\5\3\6\3\6\3\6\3\6\3\7\3\7\3\7"+
		"\3\7\3\7\3\7\5\7y\n\7\3\7\3\7\3\b\3\b\3\b\3\b\3\b\3\t\3\t\3\t\7\t\u0085"+
		"\n\t\f\t\16\t\u0088\13\t\5\t\u008a\n\t\3\n\5\n\u008d\n\n\3\n\3\n\3\n\3"+
		"\13\3\13\3\13\7\13\u0095\n\13\f\13\16\13\u0098\13\13\5\13\u009a\n\13\3"+
		"\f\3\f\7\f\u009e\n\f\f\f\16\f\u00a1\13\f\3\f\3\f\5\f\u00a5\n\f\3\r\3\r"+
		"\3\r\3\r\3\r\3\r\3\r\3\r\3\r\7\r\u00b0\n\r\f\r\16\r\u00b3\13\r\3\16\3"+
		"\16\3\16\3\17\3\17\3\17\3\17\3\20\3\20\3\20\3\20\3\21\3\21\3\21\3\21\3"+
		"\22\3\22\3\22\3\23\3\23\3\23\3\24\3\24\3\25\3\25\3\26\3\26\3\27\3\27\3"+
		"\27\2\4\6\30\30\2\4\6\b\n\f\16\20\22\24\26\30\32\34\36 \"$&(*,\2\7\4\2"+
		"  \"\"\3\2\24\25\3\2\26\27\3\2\30\35\3\2\36\37\2\u00d5\2/\3\2\2\2\4K\3"+
		"\2\2\2\6U\3\2\2\2\bh\3\2\2\2\nn\3\2\2\2\fr\3\2\2\2\16|\3\2\2\2\20\u0089"+
		"\3\2\2\2\22\u008c\3\2\2\2\24\u0099\3\2\2\2\26\u00a4\3\2\2\2\30\u00a6\3"+
		"\2\2\2\32\u00b4\3\2\2\2\34\u00b7\3\2\2\2\36\u00bb\3\2\2\2 \u00bf\3\2\2"+
		"\2\"\u00c3\3\2\2\2$\u00c6\3\2\2\2&\u00c9\3\2\2\2(\u00cb\3\2\2\2*\u00cd"+
		"\3\2\2\2,\u00cf\3\2\2\2.\60\5\4\3\2/.\3\2\2\2\60\61\3\2\2\2\61/\3\2\2"+
		"\2\61\62\3\2\2\2\62\3\3\2\2\2\63\64\5\"\22\2\64\65\7\3\2\2\65L\3\2\2\2"+
		"\66\67\5\6\4\2\678\7\3\2\28L\3\2\2\29:\5 \21\2:;\7\3\2\2;L\3\2\2\2<=\5"+
		"\b\5\2=>\7\3\2\2>L\3\2\2\2?@\5\n\6\2@A\7\3\2\2AL\3\2\2\2BL\5\30\r\2CL"+
		"\5\f\7\2DL\5\36\20\2EF\5\16\b\2FG\7\3\2\2GL\3\2\2\2HI\5$\23\2IJ\7\3\2"+
		"\2JL\3\2\2\2K\63\3\2\2\2K\66\3\2\2\2K9\3\2\2\2K<\3\2\2\2K?\3\2\2\2KB\3"+
		"\2\2\2KC\3\2\2\2KD\3\2\2\2KE\3\2\2\2KH\3\2\2\2L\5\3\2\2\2MN\b\4\1\2NV"+
		"\7\"\2\2OV\7 \2\2PV\7!\2\2QR\7\4\2\2RS\5\6\4\2ST\7\5\2\2TV\3\2\2\2UM\3"+
		"\2\2\2UO\3\2\2\2UP\3\2\2\2UQ\3\2\2\2Ve\3\2\2\2WX\f\t\2\2XY\5&\24\2YZ\5"+
		"\6\4\nZd\3\2\2\2[\\\f\b\2\2\\]\5(\25\2]^\5\6\4\t^d\3\2\2\2_`\f\3\2\2`"+
		"a\5*\26\2ab\5\6\4\4bd\3\2\2\2cW\3\2\2\2c[\3\2\2\2c_\3\2\2\2dg\3\2\2\2"+
		"ec\3\2\2\2ef\3\2\2\2f\7\3\2\2\2ge\3\2\2\2hi\7\r\2\2ij\7!\2\2jk\7\f\2\2"+
		"kl\7\6\2\2lm\t\2\2\2m\t\3\2\2\2no\7!\2\2op\7\7\2\2pq\t\2\2\2q\13\3\2\2"+
		"\2rs\7\16\2\2st\7!\2\2tu\7\4\2\2uv\5\24\13\2vx\7\5\2\2wy\7\f\2\2xw\3\2"+
		"\2\2xy\3\2\2\2yz\3\2\2\2z{\5\26\f\2{\r\3\2\2\2|}\7!\2\2}~\7\4\2\2~\177"+
		"\5\20\t\2\177\u0080\7\5\2\2\u0080\17\3\2\2\2\u0081\u0086\5\6\4\2\u0082"+
		"\u0083\7\b\2\2\u0083\u0085\5\6\4\2\u0084\u0082\3\2\2\2\u0085\u0088\3\2"+
		"\2\2\u0086\u0084\3\2\2\2\u0086\u0087\3\2\2\2\u0087\u008a\3\2\2\2\u0088"+
		"\u0086\3\2\2\2\u0089\u0081\3\2\2\2\u0089\u008a\3\2\2\2\u008a\21\3\2\2"+
		"\2\u008b\u008d\7\t\2\2\u008c\u008b\3\2\2\2\u008c\u008d\3\2\2\2\u008d\u008e"+
		"\3\2\2\2\u008e\u008f\7!\2\2\u008f\u0090\7\f\2\2\u0090\23\3\2\2\2\u0091"+
		"\u0096\5\22\n\2\u0092\u0093\7\b\2\2\u0093\u0095\5\22\n\2\u0094\u0092\3"+
		"\2\2\2\u0095\u0098\3\2\2\2\u0096\u0094\3\2\2\2\u0096\u0097\3\2\2\2\u0097"+
		"\u009a\3\2\2\2\u0098\u0096\3\2\2\2\u0099\u0091\3\2\2\2\u0099\u009a\3\2"+
		"\2\2\u009a\25\3\2\2\2\u009b\u009f\7\n\2\2\u009c\u009e\5\4\3\2\u009d\u009c"+
		"\3\2\2\2\u009e\u00a1\3\2\2\2\u009f\u009d\3\2\2\2\u009f\u00a0\3\2\2\2\u00a0"+
		"\u00a2\3\2\2\2\u00a1\u009f\3\2\2\2\u00a2\u00a5\7\13\2\2\u00a3\u00a5\5"+
		"\4\3\2\u00a4\u009b\3\2\2\2\u00a4\u00a3\3\2\2\2\u00a5\27\3\2\2\2\u00a6"+
		"\u00a7\b\r\1\2\u00a7\u00a8\7\17\2\2\u00a8\u00a9\5\6\4\2\u00a9\u00aa\5"+
		"\26\f\2\u00aa\u00b1\3\2\2\2\u00ab\u00ac\f\4\2\2\u00ac\u00b0\5\34\17\2"+
		"\u00ad\u00ae\f\3\2\2\u00ae\u00b0\5\32\16\2\u00af\u00ab\3\2\2\2\u00af\u00ad"+
		"\3\2\2\2\u00b0\u00b3\3\2\2\2\u00b1\u00af\3\2\2\2\u00b1\u00b2\3\2\2\2\u00b2"+
		"\31\3\2\2\2\u00b3\u00b1\3\2\2\2\u00b4\u00b5\7\20\2\2\u00b5\u00b6\5\26"+
		"\f\2\u00b6\33\3\2\2\2\u00b7\u00b8\7\21\2\2\u00b8\u00b9\5\6\4\2\u00b9\u00ba"+
		"\5\26\f\2\u00ba\35\3\2\2\2\u00bb\u00bc\7\22\2\2\u00bc\u00bd\5\6\4\2\u00bd"+
		"\u00be\5\26\f\2\u00be\37\3\2\2\2\u00bf\u00c0\7!\2\2\u00c0\u00c1\7\6\2"+
		"\2\u00c1\u00c2\5\6\4\2\u00c2!\3\2\2\2\u00c3\u00c4\7!\2\2\u00c4\u00c5\5"+
		",\27\2\u00c5#\3\2\2\2\u00c6\u00c7\7\23\2\2\u00c7\u00c8\5\6\4\2\u00c8%"+
		"\3\2\2\2\u00c9\u00ca\t\3\2\2\u00ca\'\3\2\2\2\u00cb\u00cc\t\4\2\2\u00cc"+
		")\3\2\2\2\u00cd\u00ce\t\5\2\2\u00ce+\3\2\2\2\u00cf\u00d0\t\6\2\2\u00d0"+
		"-\3\2\2\2\21\61KUcex\u0086\u0089\u008c\u0096\u0099\u009f\u00a4\u00af\u00b1";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}