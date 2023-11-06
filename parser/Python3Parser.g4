parser grammar Python3Parser;

options {
  tokenVocab = Python3Lexer;
}

file_input: (NEWLINE | stmt)* EOF;

stmt: simple_stmt | compound_stmt;

compound_stmt: if_stmt | while_stmt | funcdef ;
if_stmt: 'if' expr ':' suite ('elif' expr ':' suite)* ('else' ':' suite)?;
while_stmt: 'while' expr ':' suite;
suite: simple_stmt | NEWLINE INDENT stmt+ DEDENT;

//funcdef: 'def' NAME parameters ':' suite;
//parameters: '(' typedargslist? ')';
//typedargslist: (tfpdef ('=' expr)? (',' tfpdef ('=' expr)?)*);
//tfpdef: NAME ;
funcdef: 'def' NAME '(' funcdef_args ')' ':' suite;
funcdef_args: (funcdef_arg (',' funcdef_arg)* (',')?)?;
funcdef_arg: (NAME | NAME '=' expr);

simple_stmt: small_stmt  NEWLINE;
small_stmt: expr_stmt | flow_stmt;

flow_stmt: break_stmt | continue_stmt | return_stmt;
break_stmt: 'break';
continue_stmt: 'continue';
return_stmt: 'return' (rvalue_tuple)?;

expr_stmt: augassign_stmt | assign_stmt;
rvalue_tuple: expr (',' expr)* (',')?;
assign_stmt: (lvalue_tuple '=')* rvalue_tuple;
augassign_stmt: lvalue augassign expr;

augassign: ('+=' | '-=' | '*=' | '/=' | '//=' | '%=' );

expr: or_test ;
or_test: and_test ('or' and_test)*;
and_test: not_test ('and' not_test)*;
not_test: 'not' not_test | comparison;
comparison: arith_expr (comp_op arith_expr)*;
comp_op: '<'|'>'|'=='|'>='|'<=' | '!=';
arith_expr: term (addorsub_op term)*;
addorsub_op: '+'|'-';
term: factor (muldivmod_op factor)*;
muldivmod_op: '*'|'/'|'//'|'%';
factor: ('+'|'-') factor | atom;

atom: (NAME | NUMBER | STRING+| 'None' | 'True' | 'False' | ('(' expr ')') | function_call);
//atom: (NAME | INTEGER | FLOAT_NUMBER | STRING+| 'None' | 'True' | 'False' | ('(' expr ')') | function_call);
//atom_test: (NAME | INTEGER | STRING+| 'None' | 'True' | 'False' | ('(' expr ')') | function_call);
arglist: (argument (',' argument)*  (',')?)?;
argument: ( expr |
            NAME '=' expr );

function_call: (builtin_function | lvalue) '(' arglist ')';

lvalue_tuple: '(' lvalue_tuple ')' | lvalue (',' lvalue)* (',')?;
lvalue: '(' lvalue ')' | NAME;
builtin_function: (print_function | int_function | bool_function | str_function | float_function);
print_function: 'print';
int_function: 'int';
bool_function: 'bool';
str_function: 'str';
float_function: 'float';