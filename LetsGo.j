.class public LetsGo
.super java/lang/Object

.field private static _runTimer LRunTimer;
.field private static _standardIn LPascalTextIn;
.field private static a I

.method public <init>()V

	aload_0
	invokenonvirtual    java/lang/Object/<init>()V
	return

.limit locals 1
.limit stack 1
.end method

.method private static pyramid(I)V
.var 0 is rows I 
.var 1 is i I 
.var 2 is j I 

; variint=1;

	ldc	1
	istore_1

; varjint=1;

	ldc	1
	istore_2

; while(i<=rows){j=1;while(j<=i){printf("*",j);j=j+1;}printf("\n");i=i+1;}

L01:
	iload_1
	iload_0
	if_icmple L02
	iconst_0
	goto L03
L02:
	iconst_1
L03:
	ifeq L04

; j=1;

	ldc	1
	istore_2

; while(j<=i){printf("*",j);j=j+1;}

L05:
	iload_2
	iload_1
	if_icmple L06
	iconst_0
	goto L07
L06:
	iconst_1
L07:
	ifeq L08

; printf("*",j);

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc 	"*"
	iconst_1
	anewarray	java/lang/Object
	dup
	iconst_0
	iload_2
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	invokevirtual	java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop

; j=j+1;

	iload_2
	ldc	1
	iadd
	istore_2
	goto L05
L08:

; printf("\n");

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc 	"\n"
	iconst_0
	anewarray	java/lang/Object
	invokevirtual	java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop

; i=i+1;

	iload_1
	ldc	1
	iadd
	istore_1
	goto L01
L04:

	return

.limit stack 16
.limit locals 3
.end method

.method public static main([Ljava/lang/String;)V

	new RunTimer
	dup
	invokenonvirtual RunTimer/<init>()V
	putstatic        LetsGo/_runTimer LRunTimer;
	new PascalTextIn
	dup
	invokenonvirtual PascalTextIn/<init>()V
	putstatic        LetsGo/_standardIn LPascalTextIn;

; a:=5;

	ldc	5
	putstatic	LetsGo/a I

; pyramid(a);

	getstatic	LetsGo/a I
	invokestatic LetsGo/pyramid(I)V

	getstatic     LetsGo/_runTimer LRunTimer;
	invokevirtual RunTimer.printElapsedTime()V

	return

.limit locals 32
.limit stack 32
.end method
