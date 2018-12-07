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
.field private static c I
.field private static d F

.method static chad(IF)I
.var 0 is I a
.var 1 is F b
.var 2 is I c
.var 3 is F d

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

; returnhello;

	getstatic	LetsGo/hello I
	ireturn

.method static palmer(FII)F
.var 0 is F w
.var 1 is I p
.var 2 is I l

; if(p==l){w=hello;}

	iload_1
	iload_2
	if_icmpeq L01
	iconst_0
	goto L02
L01:
	iconst_1
L02:
	ifeq L03

; w=hello;

	getstatic	LetsGo/hello I
	istore_0
L03:

; returnw;

	fload_0
	freturn

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

L04:
	getstatic	LetsGo/hello I
	getstatic	LetsGo/world I
	if_icmplt L05
	iconst_0
	goto L06
L05:
	iconst_1
L06:
	ifeq L07

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
	goto L04
L07:

	getstatic     LetsGo/_runTimer LRunTimer;
	invokevirtual RunTimer.printElapsedTime()V

	return

.limit locals 32
.limit stack 32
.end method
