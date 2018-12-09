.class public LetsGo
.super java/lang/Object

.field private static _runTimer LRunTimer;
.field private static _standardIn LPascalTextIn;
.field private static a I
.field private static b I

.method public <init>()V

	aload_0
	invokenonvirtual    java/lang/Object/<init>()V
	return

.limit locals 1
.limit stack 1
.end method

.method private static factorial(I)I
.var 0 is n I 
.var 1 is c I 
.var 2 is fact I 

; varcint=1;

	ldc	1
	istore_1

; varfactint=1;

	ldc	1
	istore_2

; while(c<=n){fact=fact*c;c=c+1;}

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

; fact=fact*c;

	iload_2
	iload_1
	imul
	istore_2

; c=c+1;

	iload_1
	ldc	1
	iadd
	istore_1
	goto L01
L04:

; returnfact;

	iload_2
	ireturn

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

; b:=0;

	ldc	0
	putstatic	LetsGo/b I

; b=factorial(a);

	getstatic	LetsGo/a I
	invokestatic LetsGo/factorial(I)I
	putstatic	LetsGo/b I

; printf("factorial of %d = %d\n",a,b);

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc 	"factorial of %d = %d\n"
	iconst_2
	anewarray	java/lang/Object
	dup
	iconst_0
	getstatic	LetsGo/a I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	dup
	iconst_1
	getstatic	LetsGo/b I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	invokevirtual	java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop

	getstatic     LetsGo/_runTimer LRunTimer;
	invokevirtual RunTimer.printElapsedTime()V

	return

.limit locals 32
.limit stack 32
.end method
