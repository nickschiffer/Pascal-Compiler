.class public LetsGo
.super java/lang/Object

.field private static _runTimer LRunTimer;
.field private static _standardIn LPascalTextIn;
.field private static hello F
.field private static world I
.field private static sum I

.method public <init>()V

	aload_0
	invokenonvirtual    java/lang/Object/<init>()V
	return

.limit locals 1
.limit stack 1
.end method

.method private static add(II)I
.var 0 is a I 
.var 1 is b I 
.var 2 is test I 

; vartestint=5;

	ldc	5
	istore_2

; returna+b;

	fload_0
	fload_1
	????
	?????

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

; varhellodouble=6.5;

	ldc	6.5
	putstatic	LetsGo/hello F

; varworldint=10;

	ldc	10
	putstatic	LetsGo/world I

; varsumint=0;

	ldc	0
	putstatic	LetsGo/sum I

; world=world+1;

	getstatic	LetsGo/world I
	ldc	1
	iadd
	putstatic	LetsGo/world I

; sum=add(world,5);

	getstatic	LetsGo/world ?
	ldc	5
	invokestatic LetsGo/add(??)I
	putstatic	LetsGo/sum I

; printf("The sum is %d\n",sum);

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc 	"The sum is %d\n"
	iconst_1
	anewarray	java/lang/Object
	dup
	iconst_0
	getstatic	LetsGo/sum I
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
