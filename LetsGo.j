.class public LetsGo
.super java/lang/Object

.field private static _runTimer LRunTimer;
.field private static _standardIn LPascalTextIn;
.field private static hello I
.field private static world I

.method public <init>()V

	aload_0
	invokenonvirtual    java/lang/Object/<init>()V
	return

.limit locals 1
.limit stack 1
.end method

.method private static chad(IF)F
.var 0 is a I 
.var 1 is b F 
.var 2 is c I 
.var 3 is d F 

; varcint=0;

	ldc	0
	istore_2

; varddouble=1.2;

	ldc	1.2
	fstore_3

; c=a+2*5;

	iload_0
	ldc	2
	ldc	5
	imul
	iadd
	istore_2

; d=b;

	fload_1
	fstore_3

; hello=5;

	ldc	5
	putstatic	LetsGo/hello I

; returnd;

	fload_3
	freturn

.limit stack 16
.limit locals 4
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

; varhelloint=6;

	ldc	6
	putstatic	LetsGo/hello I

; varworldint=10;

	ldc	10
	putstatic	LetsGo/world I

; while(hello<world){hello=hello+1;printf("Tick\n");}

L01:
	getstatic	LetsGo/hello I
	getstatic	LetsGo/world I
	if_icmplt L02
	iconst_0
	goto L03
L02:
	iconst_1
L03:
	ifeq L04

; hello=hello+1;

	getstatic	LetsGo/hello I
	ldc	1
	iadd
	putstatic	LetsGo/hello I

; printf("Tick\n");

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc 	"Tick\n"
	iconst_0
	anewarray	java/lang/Object
	invokevirtual	java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop
	goto L01
L04:

	getstatic     LetsGo/_runTimer LRunTimer;
	invokevirtual RunTimer.printElapsedTime()V

	return

.limit locals 32
.limit stack 32
.end method
