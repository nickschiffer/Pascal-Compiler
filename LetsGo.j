.class public LetsGo
.super java/lang/Object

.field private static _runTimer LRunTimer;
.field private static _standardIn LPascalTextIn;
.field private static a I
.field private static b F
.field private static turkey I
.field private static gravy F
.field private static count I

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

; gravy:=2.56;

	ldc	2.56
	putstatic	LetsGo/gravy F

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

; ifa==(90-7){turkey=10;}

	getstatic	LetsGo/a I
	ldc	90
	ldc	7
	isub
	if_icmpeq L01
	iconst_0
	goto L02
L01:
	iconst_1
L02:
	ifeq L03

; turkey=10;

	ldc	10
	putstatic	LetsGo/turkey I
L03:

; ifgravy>6.34{a=a+10;}else{a=turkey*3;}

	getstatic	LetsGo/gravy F
	ldc	6.34
	fcmpg
	ifgt L04
	iconst_0
	goto L05
L04:
	iconst_1
L05:
	ifeq L06

; a=a+10;

	getstatic	LetsGo/a I
	ldc	10
	iadd
	putstatic	LetsGo/a I
	goto L07
L06:

; a=turkey*3;

	getstatic	LetsGo/turkey I
	ldc	3
	imul
	putstatic	LetsGo/a I
L07:

; varcountint=0;

	ldc	0
	putstatic	LetsGo/count I

; whilecount<=5{printf("The count is %d.\n",count);count=count+1;}

L08:
	getstatic	LetsGo/count I
	ldc	5
	if_icmple L09
	iconst_0
	goto L010
L09:
	iconst_1
L010:
	ifeq L011

; printf("The count is %d.\n",count);

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc 	"The count is %d.\n"
	iconst_1
	anewarray	java/lang/Object
	dup
	iconst_0
	getstatic	LetsGo/count I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	invokevirtual	java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop

; count=count+1;

	getstatic	LetsGo/count I
	ldc	1
	iadd
	putstatic	LetsGo/count I
	goto L08
L011:

; printf("a is %d\nb is %.2f\nturkey is %d\ngravy is %.2f\n",a,b,turkey,gravy);

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc 	"a is %d\nb is %.2f\nturkey is %d\ngravy is %.2f\n"
	iconst_4
	anewarray	java/lang/Object
	dup
	iconst_0
	getstatic	LetsGo/a I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	dup
	iconst_1
	getstatic	LetsGo/b F
	invokestatic	java/lang/Float.valueOf(F)Ljava/lang/Float;
	aastore
	dup
	iconst_2
	getstatic	LetsGo/turkey I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	dup
	iconst_3
	getstatic	LetsGo/gravy F
	invokestatic	java/lang/Float.valueOf(F)Ljava/lang/Float;
	aastore
	invokevirtual	java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop

; printf("Thats all folks\n");

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc 	"Thats all folks\n"
	iconst_0
	anewarray	java/lang/Object
	invokevirtual	java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop

	getstatic     LetsGo/_runTimer LRunTimer;
	invokevirtual RunTimer.printElapsedTime()V

	return

.limit locals 32
.limit stack 32
.end method
