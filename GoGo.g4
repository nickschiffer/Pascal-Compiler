grammar GoGo;

/** The start rule; begin parsing here. */
//TODO: Add Increment
prog:   stat+ ; 

stat:   inc_dec ';'
    |   expr ';'          
    |   assignment_stmt ';'
    |   declaration ';'
    |   declaration_implicit ';'
    |   if_stmt
    |   func_definition 
    |   while_loop_stmt    
    |   func_call ';'
    |	rtrn_stmt ';'         
    ;

expr:   expr mul_div_op expr   
    |   expr add_sub_op expr   
    |   INT
    |   DOUBLE                    
    |   ID                    
    |   '(' expr ')'
    |   expr rel_op  expr  
    ;

declaration: VAR ID TYPE '=' (INT | DOUBLE) ; //from GO
declaration_implicit: ID ':='  (INT | DOUBLE) ; //from GO

func_definition: FUNC ID '(' params ')' TYPE? compound_stmt; // from GO
func_call: ID '('func_call_params')';
func_call_params: (expr (',' expr)*)?;

param: '&'? ID TYPE ;
params: (param (',' param)*)? ;

compound_stmt: '{' stat* '}' | stat;

if_stmt: IF expr compound_stmt
        | if_stmt (else_if_stmt)
        | if_stmt else_stmt
        ;

else_stmt: ELSE compound_stmt ;
else_if_stmt: ELSE_IF expr compound_stmt ;
while_loop_stmt: WHILE expr (compound_stmt) ; //From C++

assignment_stmt: ID '=' expr ;

inc_dec: ID inc_dec_op ;

rtrn_stmt: RETURN expr ;



mul_div_op: MUL_OP | DIV_OP;
add_sub_op: ADD_OP | SUB_OP;
rel_op:     EQ_OP | NE_OP | LT_OP | LE_OP | GT_OP | GE_OP; 
inc_dec_op: INC_OP | DEC_OP;


TYPE: 'int' | 'double' ;
VAR: 'var';
FUNC: 'func';
IF: 'if';
ELSE: 'else';
ELSE_IF: 'else if';
WHILE: 'while';
RETURN: 'return';




MUL_OP: '*';
DIV_OP: '/';

ADD_OP: '+';
SUB_OP: '-';

EQ_OP: '==';
NE_OP: '!=';
LT_OP: '<';
LE_OP: '<=';
GT_OP: '>';
GE_OP: '>=';

INC_OP: '++';
DEC_OP: '--';


DOUBLE:   INT '.' INT;      // match double datatype
ID  :   [a-zA-Z]+ ;         // match identifiers <label id="code.tour.EXPR.3"/>
INT :   [0-9]+ ;            // match integers
NEWLINE : '\r'? '\n' -> skip ;        // return newlines to parser (is end-statement signal)
WS  :   ([ \t]+ | ' '+) -> skip ;    // toss out whitespace
//COMMENT: ('//' .* NEWLINE | '/*' .* '*/') -> skip ; //skip comments