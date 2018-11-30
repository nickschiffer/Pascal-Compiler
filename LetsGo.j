.class public LetsGo
.super java/lang/Object

.field private static _runTimer LRunTimer;
.field private static _standardIn LPascalTextIn;
.field private static a I
.field private static b F

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

; printf("Hello %d, %f",a,b);

	getstatic	java/lang/System/out Ljava/io/PrintStream;
	ldc 	"Hello %d, %f"
	iconst_2
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
	invokevirtual	java/io/PrintStream.printf(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;
	pop

	getstatic     LetsGo/_runTimer LRunTimer;
	invokevirtual RunTimer.printElapsedTime()V

	return

.limit locals 32
.limit stack 32
.end method
