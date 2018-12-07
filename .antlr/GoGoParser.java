// Generated from /home/chad/Documents/Pascal-Compiler/GoGo.g4 by ANTLR 4.7.1
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
		PRINT=18, PRINTF=19, MUL_OP=20, DIV_OP=21, ADD_OP=22, SUB_OP=23, EQ_OP=24, 
		NE_OP=25, LT_OP=26, LE_OP=27, GT_OP=28, GE_OP=29, INC_OP=30, DEC_OP=31, 
		DOUBLE=32, ID=33, INT=34, STRING=35, NEWLINE=36, WS=37, COMMENT=38;
	public static final int
		RULE_prog = 0, RULE_main = 1, RULE_stat = 2, RULE_expr = 3, RULE_variable = 4, 
		RULE_number = 5, RULE_declaration = 6, RULE_declaration_implicit = 7, 
		RULE_func_definition = 8, RULE_func_call = 9, RULE_func_call_params = 10, 
		RULE_param = 11, RULE_params = 12, RULE_compound_stmt = 13, RULE_if_stmt = 14, 
		RULE_else_stmt = 15, RULE_else_if_stmt = 16, RULE_while_loop_stmt = 17, 
		RULE_assignment_stmt = 18, RULE_inc_dec = 19, RULE_rtrn_stmt = 20, RULE_print_stmt = 21, 
		RULE_printf_stmt = 22, RULE_mul_div_op = 23, RULE_add_sub_op = 24, RULE_rel_op = 25, 
		RULE_inc_dec_op = 26;
	public static final String[] ruleNames = {
		"prog", "main", "stat", "expr", "variable", "number", "declaration", "declaration_implicit", 
		"func_definition", "func_call", "func_call_params", "param", "params", 
		"compound_stmt", "if_stmt", "else_stmt", "else_if_stmt", "while_loop_stmt", 
		"assignment_stmt", "inc_dec", "rtrn_stmt", "print_stmt", "printf_stmt", 
		"mul_div_op", "add_sub_op", "rel_op", "inc_dec_op"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "';'", "'('", "')'", "'='", "':='", "','", "'&'", "'{'", "'}'", 
		null, "'var'", "'func'", "'if'", "'else'", "'else if'", "'while'", "'return'", 
		"'print'", "'printf'", "'*'", "'/'", "'+'", "'-'", "'=='", "'!='", "'<'", 
		"'<='", "'>'", "'>='", "'++'", "'--'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, null, null, null, null, null, null, null, null, null, "TYPE", "VAR", 
		"FUNC", "IF", "ELSE", "ELSE_IF", "WHILE", "RETURN", "PRINT", "PRINTF", 
		"MUL_OP", "DIV_OP", "ADD_OP", "SUB_OP", "EQ_OP", "NE_OP", "LT_OP", "LE_OP", 
		"GT_OP", "GE_OP", "INC_OP", "DEC_OP", "DOUBLE", "ID", "INT", "STRING", 
		"NEWLINE", "WS", "COMMENT"
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
		public MainContext main() {
			return getRuleContext(MainContext.class,0);
		}
		public List<Func_definitionContext> func_definition() {
			return getRuleContexts(Func_definitionContext.class);
		}
		public Func_definitionContext func_definition(int i) {
			return getRuleContext(Func_definitionContext.class,i);
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
			setState(57);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==FUNC) {
				{
				{
				setState(54);
				func_definition();
				}
				}
				setState(59);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(60);
			main();
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

	public static class MainContext extends ParserRuleContext {
		public List<StatContext> stat() {
			return getRuleContexts(StatContext.class);
		}
		public StatContext stat(int i) {
			return getRuleContext(StatContext.class,i);
		}
		public MainContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_main; }
	}

	public final MainContext main() throws RecognitionException {
		MainContext _localctx = new MainContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_main);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(63); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(62);
				stat();
				}
				}
				setState(65); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__1) | (1L << VAR) | (1L << IF) | (1L << WHILE) | (1L << RETURN) | (1L << PRINT) | (1L << PRINTF) | (1L << DOUBLE) | (1L << ID) | (1L << INT))) != 0) );
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
		public While_loop_stmtContext while_loop_stmt() {
			return getRuleContext(While_loop_stmtContext.class,0);
		}
		public Func_callContext func_call() {
			return getRuleContext(Func_callContext.class,0);
		}
		public Rtrn_stmtContext rtrn_stmt() {
			return getRuleContext(Rtrn_stmtContext.class,0);
		}
		public Printf_stmtContext printf_stmt() {
			return getRuleContext(Printf_stmtContext.class,0);
		}
		public Print_stmtContext print_stmt() {
			return getRuleContext(Print_stmtContext.class,0);
		}
		public StatContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stat; }
	}

	public final StatContext stat() throws RecognitionException {
		StatContext _localctx = new StatContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_stat);
		try {
			setState(96);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,2,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(67);
				inc_dec();
				setState(68);
				match(T__0);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(70);
				expr(0);
				setState(71);
				match(T__0);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(73);
				assignment_stmt();
				setState(74);
				match(T__0);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(76);
				declaration();
				setState(77);
				match(T__0);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(79);
				declaration_implicit();
				setState(80);
				match(T__0);
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(82);
				if_stmt();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(83);
				while_loop_stmt();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(84);
				func_call();
				setState(85);
				match(T__0);
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(87);
				rtrn_stmt();
				setState(88);
				match(T__0);
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(90);
				printf_stmt();
				setState(91);
				match(T__0);
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(93);
				print_stmt();
				setState(94);
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
		public TypeSpec * type = nullptr;
		public ExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expr; }
	 
		public ExprContext() { }
		public void copyFrom(ExprContext ctx) {
			super.copyFrom(ctx);
			this.type = ctx.type;
		}
	}
	public static class VarExprContext extends ExprContext {
		public VariableContext variable() {
			return getRuleContext(VariableContext.class,0);
		}
		public VarExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class ParensContext extends ExprContext {
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public ParensContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class MulDivContext extends ExprContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public Mul_div_opContext mul_div_op() {
			return getRuleContext(Mul_div_opContext.class,0);
		}
		public MulDivContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class AddSubContext extends ExprContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public Add_sub_opContext add_sub_op() {
			return getRuleContext(Add_sub_opContext.class,0);
		}
		public AddSubContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class NumberExprContext extends ExprContext {
		public NumberContext number() {
			return getRuleContext(NumberContext.class,0);
		}
		public NumberExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class RelativeContext extends ExprContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public Rel_opContext rel_op() {
			return getRuleContext(Rel_opContext.class,0);
		}
		public RelativeContext(ExprContext ctx) { copyFrom(ctx); }
	}

	public final ExprContext expr() throws RecognitionException {
		return expr(0);
	}

	private ExprContext expr(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ExprContext _localctx = new ExprContext(_ctx, _parentState);
		ExprContext _prevctx = _localctx;
		int _startState = 6;
		enterRecursionRule(_localctx, 6, RULE_expr, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(105);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case DOUBLE:
			case INT:
				{
				_localctx = new NumberExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(99);
				number();
				}
				break;
			case ID:
				{
				_localctx = new VarExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(100);
				variable();
				}
				break;
			case T__1:
				{
				_localctx = new ParensContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(101);
				match(T__1);
				setState(102);
				expr(0);
				setState(103);
				match(T__2);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(121);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,5,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(119);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,4,_ctx) ) {
					case 1:
						{
						_localctx = new MulDivContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(107);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(108);
						mul_div_op();
						setState(109);
						expr(7);
						}
						break;
					case 2:
						{
						_localctx = new AddSubContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(111);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(112);
						add_sub_op();
						setState(113);
						expr(6);
						}
						break;
					case 3:
						{
						_localctx = new RelativeContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(115);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(116);
						rel_op();
						setState(117);
						expr(2);
						}
						break;
					}
					} 
				}
				setState(123);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,5,_ctx);
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

	public static class VariableContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(GoGoParser.ID, 0); }
		public VariableContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_variable; }
	}

	public final VariableContext variable() throws RecognitionException {
		VariableContext _localctx = new VariableContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_variable);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(124);
			match(ID);
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

	public static class NumberContext extends ParserRuleContext {
		public TypeSpec * type = nullptr;
		public NumberContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_number; }
	 
		public NumberContext() { }
		public void copyFrom(NumberContext ctx) {
			super.copyFrom(ctx);
			this.type = ctx.type;
		}
	}
	public static class DoubleConstContext extends NumberContext {
		public TerminalNode DOUBLE() { return getToken(GoGoParser.DOUBLE, 0); }
		public DoubleConstContext(NumberContext ctx) { copyFrom(ctx); }
	}
	public static class IntegerConstContext extends NumberContext {
		public TerminalNode INT() { return getToken(GoGoParser.INT, 0); }
		public IntegerConstContext(NumberContext ctx) { copyFrom(ctx); }
	}

	public final NumberContext number() throws RecognitionException {
		NumberContext _localctx = new NumberContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_number);
		try {
			setState(128);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case INT:
				_localctx = new IntegerConstContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(126);
				match(INT);
				}
				break;
			case DOUBLE:
				_localctx = new DoubleConstContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(127);
				match(DOUBLE);
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
		enterRule(_localctx, 12, RULE_declaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(130);
			match(VAR);
			setState(131);
			match(ID);
			setState(132);
			match(TYPE);
			setState(133);
			match(T__3);
			setState(134);
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
		enterRule(_localctx, 14, RULE_declaration_implicit);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(136);
			match(ID);
			setState(137);
			match(T__4);
			setState(138);
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
		enterRule(_localctx, 16, RULE_func_definition);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(140);
			match(FUNC);
			setState(141);
			match(ID);
			setState(142);
			match(T__1);
			setState(143);
			params();
			setState(144);
			match(T__2);
			setState(146);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==TYPE) {
				{
				setState(145);
				match(TYPE);
				}
			}

			setState(148);
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
		enterRule(_localctx, 18, RULE_func_call);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(150);
			match(ID);
			setState(151);
			match(T__1);
			setState(152);
			func_call_params();
			setState(153);
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
		enterRule(_localctx, 20, RULE_func_call_params);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(163);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__1) | (1L << DOUBLE) | (1L << ID) | (1L << INT))) != 0)) {
				{
				setState(155);
				expr(0);
				setState(160);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__5) {
					{
					{
					setState(156);
					match(T__5);
					setState(157);
					expr(0);
					}
					}
					setState(162);
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
		enterRule(_localctx, 22, RULE_param);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(166);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__6) {
				{
				setState(165);
				match(T__6);
				}
			}

			setState(168);
			match(ID);
			setState(169);
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
		enterRule(_localctx, 24, RULE_params);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(179);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__6 || _la==ID) {
				{
				setState(171);
				param();
				setState(176);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__5) {
					{
					{
					setState(172);
					match(T__5);
					setState(173);
					param();
					}
					}
					setState(178);
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
		enterRule(_localctx, 26, RULE_compound_stmt);
		int _la;
		try {
			setState(190);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__7:
				enterOuterAlt(_localctx, 1);
				{
				setState(181);
				match(T__7);
				setState(185);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__1) | (1L << VAR) | (1L << IF) | (1L << WHILE) | (1L << RETURN) | (1L << PRINT) | (1L << PRINTF) | (1L << DOUBLE) | (1L << ID) | (1L << INT))) != 0)) {
					{
					{
					setState(182);
					stat();
					}
					}
					setState(187);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(188);
				match(T__8);
				}
				break;
			case T__1:
			case VAR:
			case IF:
			case WHILE:
			case RETURN:
			case PRINT:
			case PRINTF:
			case DOUBLE:
			case ID:
			case INT:
				enterOuterAlt(_localctx, 2);
				{
				setState(189);
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
		public Else_stmtContext else_stmt() {
			return getRuleContext(Else_stmtContext.class,0);
		}
		public List<Else_if_stmtContext> else_if_stmt() {
			return getRuleContexts(Else_if_stmtContext.class);
		}
		public Else_if_stmtContext else_if_stmt(int i) {
			return getRuleContext(Else_if_stmtContext.class,i);
		}
		public If_stmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_if_stmt; }
	}

	public final If_stmtContext if_stmt() throws RecognitionException {
		If_stmtContext _localctx = new If_stmtContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_if_stmt);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(192);
			match(IF);
			setState(193);
			expr(0);
			setState(194);
			compound_stmt();
			setState(202);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,16,_ctx) ) {
			case 1:
				{
				setState(198);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==ELSE_IF) {
					{
					{
					setState(195);
					else_if_stmt();
					}
					}
					setState(200);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(201);
				else_stmt();
				}
				break;
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
		enterRule(_localctx, 30, RULE_else_stmt);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(204);
			match(ELSE);
			setState(205);
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
		enterRule(_localctx, 32, RULE_else_if_stmt);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(207);
			match(ELSE_IF);
			setState(208);
			expr(0);
			setState(209);
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
		enterRule(_localctx, 34, RULE_while_loop_stmt);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(211);
			match(WHILE);
			setState(212);
			expr(0);
			{
			setState(213);
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
		enterRule(_localctx, 36, RULE_assignment_stmt);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(215);
			match(ID);
			setState(216);
			match(T__3);
			setState(217);
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
		enterRule(_localctx, 38, RULE_inc_dec);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(219);
			match(ID);
			setState(220);
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
		enterRule(_localctx, 40, RULE_rtrn_stmt);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(222);
			match(RETURN);
			setState(223);
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

	public static class Print_stmtContext extends ParserRuleContext {
		public TerminalNode PRINT() { return getToken(GoGoParser.PRINT, 0); }
		public TerminalNode STRING() { return getToken(GoGoParser.STRING, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public Print_stmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_print_stmt; }
	}

	public final Print_stmtContext print_stmt() throws RecognitionException {
		Print_stmtContext _localctx = new Print_stmtContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_print_stmt);
		int _la;
		try {
			setState(236);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,18,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(225);
				match(PRINT);
				setState(226);
				match(T__1);
				setState(228);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==STRING) {
					{
					setState(227);
					match(STRING);
					}
				}

				setState(230);
				match(T__2);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(231);
				match(PRINT);
				setState(232);
				match(T__1);
				setState(233);
				expr(0);
				setState(234);
				match(T__2);
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

	public static class Printf_stmtContext extends ParserRuleContext {
		public TerminalNode PRINTF() { return getToken(GoGoParser.PRINTF, 0); }
		public TerminalNode STRING() { return getToken(GoGoParser.STRING, 0); }
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public Printf_stmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_printf_stmt; }
	}

	public final Printf_stmtContext printf_stmt() throws RecognitionException {
		Printf_stmtContext _localctx = new Printf_stmtContext(_ctx, getState());
		enterRule(_localctx, 44, RULE_printf_stmt);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(238);
			match(PRINTF);
			setState(239);
			match(T__1);
			setState(240);
			match(STRING);
			setState(245);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__5) {
				{
				{
				setState(241);
				match(T__5);
				setState(242);
				expr(0);
				}
				}
				setState(247);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(248);
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
		enterRule(_localctx, 46, RULE_mul_div_op);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(250);
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
		enterRule(_localctx, 48, RULE_add_sub_op);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(252);
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
		enterRule(_localctx, 50, RULE_rel_op);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(254);
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
		enterRule(_localctx, 52, RULE_inc_dec_op);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(256);
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
		case 3:
			return expr_sempred((ExprContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean expr_sempred(ExprContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 6);
		case 1:
			return precpred(_ctx, 5);
		case 2:
			return precpred(_ctx, 1);
		}
		return true;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3(\u0105\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\3\2\7\2:\n\2\f\2\16\2=\13\2\3\2\3\2\3\3"+
		"\6\3B\n\3\r\3\16\3C\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3"+
		"\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\5\4"+
		"c\n\4\3\5\3\5\3\5\3\5\3\5\3\5\3\5\5\5l\n\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5"+
		"\3\5\3\5\3\5\3\5\3\5\7\5z\n\5\f\5\16\5}\13\5\3\6\3\6\3\7\3\7\5\7\u0083"+
		"\n\7\3\b\3\b\3\b\3\b\3\b\3\b\3\t\3\t\3\t\3\t\3\n\3\n\3\n\3\n\3\n\3\n\5"+
		"\n\u0095\n\n\3\n\3\n\3\13\3\13\3\13\3\13\3\13\3\f\3\f\3\f\7\f\u00a1\n"+
		"\f\f\f\16\f\u00a4\13\f\5\f\u00a6\n\f\3\r\5\r\u00a9\n\r\3\r\3\r\3\r\3\16"+
		"\3\16\3\16\7\16\u00b1\n\16\f\16\16\16\u00b4\13\16\5\16\u00b6\n\16\3\17"+
		"\3\17\7\17\u00ba\n\17\f\17\16\17\u00bd\13\17\3\17\3\17\5\17\u00c1\n\17"+
		"\3\20\3\20\3\20\3\20\7\20\u00c7\n\20\f\20\16\20\u00ca\13\20\3\20\5\20"+
		"\u00cd\n\20\3\21\3\21\3\21\3\22\3\22\3\22\3\22\3\23\3\23\3\23\3\23\3\24"+
		"\3\24\3\24\3\24\3\25\3\25\3\25\3\26\3\26\3\26\3\27\3\27\3\27\5\27\u00e7"+
		"\n\27\3\27\3\27\3\27\3\27\3\27\3\27\5\27\u00ef\n\27\3\30\3\30\3\30\3\30"+
		"\3\30\7\30\u00f6\n\30\f\30\16\30\u00f9\13\30\3\30\3\30\3\31\3\31\3\32"+
		"\3\32\3\33\3\33\3\34\3\34\3\34\2\3\b\35\2\4\6\b\n\f\16\20\22\24\26\30"+
		"\32\34\36 \"$&(*,.\60\62\64\66\2\7\4\2\"\"$$\3\2\26\27\3\2\30\31\3\2\32"+
		"\37\3\2 !\2\u0108\2;\3\2\2\2\4A\3\2\2\2\6b\3\2\2\2\bk\3\2\2\2\n~\3\2\2"+
		"\2\f\u0082\3\2\2\2\16\u0084\3\2\2\2\20\u008a\3\2\2\2\22\u008e\3\2\2\2"+
		"\24\u0098\3\2\2\2\26\u00a5\3\2\2\2\30\u00a8\3\2\2\2\32\u00b5\3\2\2\2\34"+
		"\u00c0\3\2\2\2\36\u00c2\3\2\2\2 \u00ce\3\2\2\2\"\u00d1\3\2\2\2$\u00d5"+
		"\3\2\2\2&\u00d9\3\2\2\2(\u00dd\3\2\2\2*\u00e0\3\2\2\2,\u00ee\3\2\2\2."+
		"\u00f0\3\2\2\2\60\u00fc\3\2\2\2\62\u00fe\3\2\2\2\64\u0100\3\2\2\2\66\u0102"+
		"\3\2\2\28:\5\22\n\298\3\2\2\2:=\3\2\2\2;9\3\2\2\2;<\3\2\2\2<>\3\2\2\2"+
		"=;\3\2\2\2>?\5\4\3\2?\3\3\2\2\2@B\5\6\4\2A@\3\2\2\2BC\3\2\2\2CA\3\2\2"+
		"\2CD\3\2\2\2D\5\3\2\2\2EF\5(\25\2FG\7\3\2\2Gc\3\2\2\2HI\5\b\5\2IJ\7\3"+
		"\2\2Jc\3\2\2\2KL\5&\24\2LM\7\3\2\2Mc\3\2\2\2NO\5\16\b\2OP\7\3\2\2Pc\3"+
		"\2\2\2QR\5\20\t\2RS\7\3\2\2Sc\3\2\2\2Tc\5\36\20\2Uc\5$\23\2VW\5\24\13"+
		"\2WX\7\3\2\2Xc\3\2\2\2YZ\5*\26\2Z[\7\3\2\2[c\3\2\2\2\\]\5.\30\2]^\7\3"+
		"\2\2^c\3\2\2\2_`\5,\27\2`a\7\3\2\2ac\3\2\2\2bE\3\2\2\2bH\3\2\2\2bK\3\2"+
		"\2\2bN\3\2\2\2bQ\3\2\2\2bT\3\2\2\2bU\3\2\2\2bV\3\2\2\2bY\3\2\2\2b\\\3"+
		"\2\2\2b_\3\2\2\2c\7\3\2\2\2de\b\5\1\2el\5\f\7\2fl\5\n\6\2gh\7\4\2\2hi"+
		"\5\b\5\2ij\7\5\2\2jl\3\2\2\2kd\3\2\2\2kf\3\2\2\2kg\3\2\2\2l{\3\2\2\2m"+
		"n\f\b\2\2no\5\60\31\2op\5\b\5\tpz\3\2\2\2qr\f\7\2\2rs\5\62\32\2st\5\b"+
		"\5\btz\3\2\2\2uv\f\3\2\2vw\5\64\33\2wx\5\b\5\4xz\3\2\2\2ym\3\2\2\2yq\3"+
		"\2\2\2yu\3\2\2\2z}\3\2\2\2{y\3\2\2\2{|\3\2\2\2|\t\3\2\2\2}{\3\2\2\2~\177"+
		"\7#\2\2\177\13\3\2\2\2\u0080\u0083\7$\2\2\u0081\u0083\7\"\2\2\u0082\u0080"+
		"\3\2\2\2\u0082\u0081\3\2\2\2\u0083\r\3\2\2\2\u0084\u0085\7\r\2\2\u0085"+
		"\u0086\7#\2\2\u0086\u0087\7\f\2\2\u0087\u0088\7\6\2\2\u0088\u0089\t\2"+
		"\2\2\u0089\17\3\2\2\2\u008a\u008b\7#\2\2\u008b\u008c\7\7\2\2\u008c\u008d"+
		"\t\2\2\2\u008d\21\3\2\2\2\u008e\u008f\7\16\2\2\u008f\u0090\7#\2\2\u0090"+
		"\u0091\7\4\2\2\u0091\u0092\5\32\16\2\u0092\u0094\7\5\2\2\u0093\u0095\7"+
		"\f\2\2\u0094\u0093\3\2\2\2\u0094\u0095\3\2\2\2\u0095\u0096\3\2\2\2\u0096"+
		"\u0097\5\34\17\2\u0097\23\3\2\2\2\u0098\u0099\7#\2\2\u0099\u009a\7\4\2"+
		"\2\u009a\u009b\5\26\f\2\u009b\u009c\7\5\2\2\u009c\25\3\2\2\2\u009d\u00a2"+
		"\5\b\5\2\u009e\u009f\7\b\2\2\u009f\u00a1\5\b\5\2\u00a0\u009e\3\2\2\2\u00a1"+
		"\u00a4\3\2\2\2\u00a2\u00a0\3\2\2\2\u00a2\u00a3\3\2\2\2\u00a3\u00a6\3\2"+
		"\2\2\u00a4\u00a2\3\2\2\2\u00a5\u009d\3\2\2\2\u00a5\u00a6\3\2\2\2\u00a6"+
		"\27\3\2\2\2\u00a7\u00a9\7\t\2\2\u00a8\u00a7\3\2\2\2\u00a8\u00a9\3\2\2"+
		"\2\u00a9\u00aa\3\2\2\2\u00aa\u00ab\7#\2\2\u00ab\u00ac\7\f\2\2\u00ac\31"+
		"\3\2\2\2\u00ad\u00b2\5\30\r\2\u00ae\u00af\7\b\2\2\u00af\u00b1\5\30\r\2"+
		"\u00b0\u00ae\3\2\2\2\u00b1\u00b4\3\2\2\2\u00b2\u00b0\3\2\2\2\u00b2\u00b3"+
		"\3\2\2\2\u00b3\u00b6\3\2\2\2\u00b4\u00b2\3\2\2\2\u00b5\u00ad\3\2\2\2\u00b5"+
		"\u00b6\3\2\2\2\u00b6\33\3\2\2\2\u00b7\u00bb\7\n\2\2\u00b8\u00ba\5\6\4"+
		"\2\u00b9\u00b8\3\2\2\2\u00ba\u00bd\3\2\2\2\u00bb\u00b9\3\2\2\2\u00bb\u00bc"+
		"\3\2\2\2\u00bc\u00be\3\2\2\2\u00bd\u00bb\3\2\2\2\u00be\u00c1\7\13\2\2"+
		"\u00bf\u00c1\5\6\4\2\u00c0\u00b7\3\2\2\2\u00c0\u00bf\3\2\2\2\u00c1\35"+
		"\3\2\2\2\u00c2\u00c3\7\17\2\2\u00c3\u00c4\5\b\5\2\u00c4\u00cc\5\34\17"+
		"\2\u00c5\u00c7\5\"\22\2\u00c6\u00c5\3\2\2\2\u00c7\u00ca\3\2\2\2\u00c8"+
		"\u00c6\3\2\2\2\u00c8\u00c9\3\2\2\2\u00c9\u00cb\3\2\2\2\u00ca\u00c8\3\2"+
		"\2\2\u00cb\u00cd\5 \21\2\u00cc\u00c8\3\2\2\2\u00cc\u00cd\3\2\2\2\u00cd"+
		"\37\3\2\2\2\u00ce\u00cf\7\20\2\2\u00cf\u00d0\5\34\17\2\u00d0!\3\2\2\2"+
		"\u00d1\u00d2\7\21\2\2\u00d2\u00d3\5\b\5\2\u00d3\u00d4\5\34\17\2\u00d4"+
		"#\3\2\2\2\u00d5\u00d6\7\22\2\2\u00d6\u00d7\5\b\5\2\u00d7\u00d8\5\34\17"+
		"\2\u00d8%\3\2\2\2\u00d9\u00da\7#\2\2\u00da\u00db\7\6\2\2\u00db\u00dc\5"+
		"\b\5\2\u00dc\'\3\2\2\2\u00dd\u00de\7#\2\2\u00de\u00df\5\66\34\2\u00df"+
		")\3\2\2\2\u00e0\u00e1\7\23\2\2\u00e1\u00e2\5\b\5\2\u00e2+\3\2\2\2\u00e3"+
		"\u00e4\7\24\2\2\u00e4\u00e6\7\4\2\2\u00e5\u00e7\7%\2\2\u00e6\u00e5\3\2"+
		"\2\2\u00e6\u00e7\3\2\2\2\u00e7\u00e8\3\2\2\2\u00e8\u00ef\7\5\2\2\u00e9"+
		"\u00ea\7\24\2\2\u00ea\u00eb\7\4\2\2\u00eb\u00ec\5\b\5\2\u00ec\u00ed\7"+
		"\5\2\2\u00ed\u00ef\3\2\2\2\u00ee\u00e3\3\2\2\2\u00ee\u00e9\3\2\2\2\u00ef"+
		"-\3\2\2\2\u00f0\u00f1\7\25\2\2\u00f1\u00f2\7\4\2\2\u00f2\u00f7\7%\2\2"+
		"\u00f3\u00f4\7\b\2\2\u00f4\u00f6\5\b\5\2\u00f5\u00f3\3\2\2\2\u00f6\u00f9"+
		"\3\2\2\2\u00f7\u00f5\3\2\2\2\u00f7\u00f8\3\2\2\2\u00f8\u00fa\3\2\2\2\u00f9"+
		"\u00f7\3\2\2\2\u00fa\u00fb\7\5\2\2\u00fb/\3\2\2\2\u00fc\u00fd\t\3\2\2"+
		"\u00fd\61\3\2\2\2\u00fe\u00ff\t\4\2\2\u00ff\63\3\2\2\2\u0100\u0101\t\5"+
		"\2\2\u0101\65\3\2\2\2\u0102\u0103\t\6\2\2\u0103\67\3\2\2\2\26;Cbky{\u0082"+
		"\u0094\u00a2\u00a5\u00a8\u00b2\u00b5\u00bb\u00c0\u00c8\u00cc\u00e6\u00ee"+
		"\u00f7";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}