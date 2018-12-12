.class public LetsGo
.super java/lang/Object

.field private static _runTimer LRunTimer;
.field private static _standardIn LPascalTextIn;
.field private static num I
.field private static flag I
.field private static temp I
.field private static i I

.method public <init>()V

	aload_0
	invokenonvirtual    java/lang/Object/<init>()V
	return

.limit locals 1
.limit stack 1
.end method

.method private static mod(II)I
.var 0 is number I 
.var 1 is divisor I 

; while(number>=divisor){number=number-divisor;}

L01:
	iload_0
	iload_1
	if_icmpge L02
	iconst_0
	goto L03
L02:
	iconst_1
L03:
	ifeq L04

; number=number-divisor;

	iload_0
	iload_1
	isub
	istore_0
	goto L01
L04:

; returnnumber;

	iload_0
	ireturn

.limit stack 16
.limit locals 2
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

; num:=17;

	ldc	17
	putstatic	LetsGo/num I

; flag:=0;

	ldc	0
	putstatic	LetsGo/flag I

; temp:=0;

	ldc	0
	putstatic	LetsGo/temp I

; i:=2;

	ldc	2
	putstatic	LetsGo/i I

; while(i<=(num/2)){temp=mod(num,i);if(temp==0){flag=1;i=1000000;}i=i+1;}

L05:
	getstatic	LetsGo/i I
	getstatic	LetsGo/num I
	ldc	2
	idiv
	if_icmple L06
	iconst_0
	goto L07
L06:
	iconst_1
L07:
	ifeq L08

; temp=mod(num,i);

	getstatic	LetsGo/num I
	getstatic	LetsGo/i I
	invokestatic LetsGo/mod(II)I
	putstatic	LetsGo/temp I

; if(temp==0){flag=1;i=1000000;}

	getstatic	LetsGo/temp I
	ldc	0
	if_icmpeq L09
	iconst_0
	goto L010
L09:
	iconst_1
L010:
	ifeq L011

; flag=1;

	ldc	1
	putstatic	LetsGo/flag I

; i=1000000;

	ldc	1000000
	putstatic	LetsGo/i I
L011:

; i=i+1;

	getstatic	LetsGo/i I
	ldc	1
	iadd
	putstatic	LetsGo/i I
	goto L05
L08:

; if(flag==0){printf("%d is a prime number.\n",num);}else{printf("%d is not a prime number.\n",num);}

	getstatic	LetsGo/flag I
	ldc	0
	if_icmpeq L012
	iconst_0
	goto L013
L012:
	iconst_1
L013:
	ifeq L015

; printf("%d is a prime number.\n",num);

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc 	"%d is a prime number.\n"
	iconst_1
	anewarray	java/lang/Object
	dup
	iconst_0
	getstatic	LetsGo/num I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	invokevirtual	java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop
	goto L014
L015:

; printf("%d is not a prime number.\n",num);

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc 	"%d is not a prime number.\n"
	iconst_1
	anewarray	java/lang/Object
	dup
	iconst_0
	getstatic	LetsGo/num I
	invokestatic	java/lang/Integer.valueOf(I)Ljava/lang/Integer;
	aastore
	invokevirtual	java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop
L014:

	getstatic     LetsGo/_runTimer LRunTimer;
	invokevirtual RunTimer.printElapsedTime()V

	return

.limit locals 32
.limit stack 32
.end method
