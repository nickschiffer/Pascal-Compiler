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

; a=(3+5*(9-1)*2);

	ldc	3
	ldc	5
	ldc	9
	ldc	1
	isub
	imul
	ldc	2
	imul
	iadd
	putstatic	LetsGo/a I

; ifa==(419+6){a=10;}

	getstatic	LetsGo/a I
	ldc	419
	ldc	6
	iadd
	if_icmpeq L01
	iconst_0
	goto L02
L01:
	iconst_1
L02:
	ifeq L03

; a=10;

	ldc	10
	putstatic	LetsGo/a I
L03:

; ifturkey>12{a=a+1;}else{a=a+2;}

	getstatic	LetsGo/turkey I
	ldc	12
	if_icmpgt L04
	iconst_0
	goto L05
L04:
	iconst_1
L05:
	ifeq L06

; a=a+1;

	getstatic	LetsGo/a I
	ldc	1
	iadd
	putstatic	LetsGo/a I
	goto L07
L06:

; a=a+2;

	getstatic	LetsGo/a I
	ldc	2
	iadd
	putstatic	LetsGo/a I
L07:

; whilea>=10{a=a+1;}

L08:
	getstatic	LetsGo/a I
	ldc	10
	if_icmpge L09
	iconst_0
	goto L010
L09:
	iconst_1
L010:
	ifeq L011

; a=a+1;

	getstatic	LetsGo/a I
	ldc	1
	iadd
	putstatic	LetsGo/a I
L011:

	getstatic     LetsGo/_runTimer LRunTimer;
	invokevirtual RunTimer.printElapsedTime()V

	return

.limit locals 32
.limit stack 32
.end method
