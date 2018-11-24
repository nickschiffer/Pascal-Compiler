.class public LetsGo
.super java/lang/Object

.field private static _runTimer LRunTimer;
.field private static _standardIn LPascalTextIn;
.field private static a I
.field private static b F
.field private static turkey I
.field private static chicken F

.method public <init>()V

	aload_0
	invokenonvirtual    java/lang/Object/<init>()V
	return

.limit locals 1
.limit stack 1
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

; varaint=415;

	ldc	415
	putstatic	LetsGo/a I

; varbdouble=3.14;

	ldc	3.14
	putstatic	LetsGo/b F

; turkey:=99;

	ldc	99
	putstatic	LetsGo/turkey I

; chicken:=2.56;

	ldc	2.56
	putstatic	LetsGo/chicken F

; b=8*5+5;

	ldc	8
	ldc	5
	imul
	ldc	5
	iadd
	putstatic	LetsGo/b I

; a=3*6;

	ldc	3
	ldc	6
	imul
	putstatic	LetsGo/a I

; c=turkey/a;

	getstatic	LetsGo/turkey I
	getstatic	LetsGo/a I
	idpv
	putstatic	LetsGo/c I

	getstatic     LetsGo/_runTimer LRunTimer;
	invokevirtual RunTimer.printElapsedTime()V

	return

.limit locals 32
.limit stack 32
.end method
