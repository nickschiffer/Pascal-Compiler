// Generated from GoGo.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link GoGoParser}.
 */
public interface GoGoListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link GoGoParser#prog}.
	 * @param ctx the parse tree
	 */
	void enterProg(GoGoParser.ProgContext ctx);
	/**
	 * Exit a parse tree produced by {@link GoGoParser#prog}.
	 * @param ctx the parse tree
	 */
	void exitProg(GoGoParser.ProgContext ctx);
	/**
	 * Enter a parse tree produced by {@link GoGoParser#stat}.
	 * @param ctx the parse tree
	 */
	void enterStat(GoGoParser.StatContext ctx);
	/**
	 * Exit a parse tree produced by {@link GoGoParser#stat}.
	 * @param ctx the parse tree
	 */
	void exitStat(GoGoParser.StatContext ctx);
	/**
	 * Enter a parse tree produced by {@link GoGoParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterExpr(GoGoParser.ExprContext ctx);
	/**
	 * Exit a parse tree produced by {@link GoGoParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitExpr(GoGoParser.ExprContext ctx);
	/**
	 * Enter a parse tree produced by {@link GoGoParser#declaration}.
	 * @param ctx the parse tree
	 */
	void enterDeclaration(GoGoParser.DeclarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link GoGoParser#declaration}.
	 * @param ctx the parse tree
	 */
	void exitDeclaration(GoGoParser.DeclarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link GoGoParser#declaration_implicit}.
	 * @param ctx the parse tree
	 */
	void enterDeclaration_implicit(GoGoParser.Declaration_implicitContext ctx);
	/**
	 * Exit a parse tree produced by {@link GoGoParser#declaration_implicit}.
	 * @param ctx the parse tree
	 */
	void exitDeclaration_implicit(GoGoParser.Declaration_implicitContext ctx);
	/**
	 * Enter a parse tree produced by {@link GoGoParser#func_definition}.
	 * @param ctx the parse tree
	 */
	void enterFunc_definition(GoGoParser.Func_definitionContext ctx);
	/**
	 * Exit a parse tree produced by {@link GoGoParser#func_definition}.
	 * @param ctx the parse tree
	 */
	void exitFunc_definition(GoGoParser.Func_definitionContext ctx);
	/**
	 * Enter a parse tree produced by {@link GoGoParser#func_call}.
	 * @param ctx the parse tree
	 */
	void enterFunc_call(GoGoParser.Func_callContext ctx);
	/**
	 * Exit a parse tree produced by {@link GoGoParser#func_call}.
	 * @param ctx the parse tree
	 */
	void exitFunc_call(GoGoParser.Func_callContext ctx);
	/**
	 * Enter a parse tree produced by {@link GoGoParser#func_call_params}.
	 * @param ctx the parse tree
	 */
	void enterFunc_call_params(GoGoParser.Func_call_paramsContext ctx);
	/**
	 * Exit a parse tree produced by {@link GoGoParser#func_call_params}.
	 * @param ctx the parse tree
	 */
	void exitFunc_call_params(GoGoParser.Func_call_paramsContext ctx);
	/**
	 * Enter a parse tree produced by {@link GoGoParser#param}.
	 * @param ctx the parse tree
	 */
	void enterParam(GoGoParser.ParamContext ctx);
	/**
	 * Exit a parse tree produced by {@link GoGoParser#param}.
	 * @param ctx the parse tree
	 */
	void exitParam(GoGoParser.ParamContext ctx);
	/**
	 * Enter a parse tree produced by {@link GoGoParser#params}.
	 * @param ctx the parse tree
	 */
	void enterParams(GoGoParser.ParamsContext ctx);
	/**
	 * Exit a parse tree produced by {@link GoGoParser#params}.
	 * @param ctx the parse tree
	 */
	void exitParams(GoGoParser.ParamsContext ctx);
	/**
	 * Enter a parse tree produced by {@link GoGoParser#compound_stmt}.
	 * @param ctx the parse tree
	 */
	void enterCompound_stmt(GoGoParser.Compound_stmtContext ctx);
	/**
	 * Exit a parse tree produced by {@link GoGoParser#compound_stmt}.
	 * @param ctx the parse tree
	 */
	void exitCompound_stmt(GoGoParser.Compound_stmtContext ctx);
	/**
	 * Enter a parse tree produced by {@link GoGoParser#if_stmt}.
	 * @param ctx the parse tree
	 */
	void enterIf_stmt(GoGoParser.If_stmtContext ctx);
	/**
	 * Exit a parse tree produced by {@link GoGoParser#if_stmt}.
	 * @param ctx the parse tree
	 */
	void exitIf_stmt(GoGoParser.If_stmtContext ctx);
	/**
	 * Enter a parse tree produced by {@link GoGoParser#else_stmt}.
	 * @param ctx the parse tree
	 */
	void enterElse_stmt(GoGoParser.Else_stmtContext ctx);
	/**
	 * Exit a parse tree produced by {@link GoGoParser#else_stmt}.
	 * @param ctx the parse tree
	 */
	void exitElse_stmt(GoGoParser.Else_stmtContext ctx);
	/**
	 * Enter a parse tree produced by {@link GoGoParser#while_loop_stmt}.
	 * @param ctx the parse tree
	 */
	void enterWhile_loop_stmt(GoGoParser.While_loop_stmtContext ctx);
	/**
	 * Exit a parse tree produced by {@link GoGoParser#while_loop_stmt}.
	 * @param ctx the parse tree
	 */
	void exitWhile_loop_stmt(GoGoParser.While_loop_stmtContext ctx);
	/**
	 * Enter a parse tree produced by {@link GoGoParser#assignment_stmt}.
	 * @param ctx the parse tree
	 */
	void enterAssignment_stmt(GoGoParser.Assignment_stmtContext ctx);
	/**
	 * Exit a parse tree produced by {@link GoGoParser#assignment_stmt}.
	 * @param ctx the parse tree
	 */
	void exitAssignment_stmt(GoGoParser.Assignment_stmtContext ctx);
	/**
	 * Enter a parse tree produced by {@link GoGoParser#inc_dec}.
	 * @param ctx the parse tree
	 */
	void enterInc_dec(GoGoParser.Inc_decContext ctx);
	/**
	 * Exit a parse tree produced by {@link GoGoParser#inc_dec}.
	 * @param ctx the parse tree
	 */
	void exitInc_dec(GoGoParser.Inc_decContext ctx);
}