grammar GoGo;

/** The start rule; begin parsing here. */
//TODO: Add Increment
prog:   stat+ ; 

stat:   (expr NEWLINE                
    |   assignment_stmt        
    |   NEWLINE)
    |   declaration
    |   if_stmt NEWLINE
    |   func_defintion
    |   while_loop_stmt    
    |   func_call              
    ;

declaration: 'var' ID TYPE '=' (INT | DOUBLE) NEWLINE
            ; //from GO

func_defintion: 'func' ID '(' params ')' TYPE? NEWLINE? compound_stmt return_stmt?; // from GO

func_call: ID '('func_call_params')';
func_call_params: (expr (',' expr)*)?;

param: '&'? ID TYPE ;
params: (param (',' param)*)? ;

compound_stmt: '{' NEWLINE? stat+ '}' ;

expr:   expr ('*'|'/') expr   
    |   expr ('+'|'-') expr   
    |   INT
    |   DOUBLE                    
    |   ID                    
    |   '(' expr ')'
    |   expr '==' expr         
    ;

if_stmt: 'if' expr NEWLINE? compound_stmt
        | if_stmt ('else if' expr NEWLINE? compound_stmt )
        | if_stmt else_stmt ;

else_stmt: 'else' NEWLINE? compound_stmt ;

while_loop_stmt: 'while' expr (NEWLINE? compound_stmt ); //From C++

return_stmt: 'return' stat;




assignment_stmt: ID '=' expr;



TYPE: 'int' | 'double' ;
DOUBLE:   INT '.' INT;      // match double datatype
ID  :   [a-zA-Z]+ ;         // match identifiers <label id="code.tour.EXPR.3"/>
INT :   [0-9]+ ;            // match integers
NEWLINE:'\r'? '\n' ;        // return newlines to parser (is end-statement signal)
WS  :   [ \t]+ -> skip ;    // toss out whitespace
