#
# Makefile for Chapter 10
#
# Copyright (c) 2018 by Ronald Mak
# For instructional purposes only.  No warranties.
#
OUTPUT = GoGo
SRCS =  main.cpp \
		GoGoBaseVisitor.cpp \
		GoGoLexer.cpp \
		GoGoParser.cpp \
		GoGoVisitor.cpp \
		Pass1Visitor.cpp \
        Pass2Visitor.cpp \
        wci/Globals.cpp \
        wci/intermediate/ICodeFactory.cpp \
        wci/intermediate/SymTabFactory.cpp \
        wci/intermediate/TypeFactory.cpp \
        wci/intermediate/icodeimpl/ICodeImpl.cpp \
        wci/intermediate/icodeimpl/ICodeNodeImpl.cpp \
        wci/intermediate/symtabimpl/Predefined.cpp \
        wci/intermediate/symtabimpl/SymTabEntryImpl.cpp \
        wci/intermediate/symtabimpl/SymTabImpl.cpp \
        wci/intermediate/symtabimpl/SymTabStackImpl.cpp \
        wci/intermediate/typeimpl/TypeChecker.cpp \
        wci/intermediate/typeimpl/TypeSpecImpl.cpp \
        wci/util/CrossReferencer.cpp \
        wci/util/ParseTreePrinter.cpp

OBJS = $(SRCS:.cpp=.o)
CC = g++

INCLUDE_DIR = /usr/include/antlr4-runtime

INCLUDE_LIB = /usr/lib

LIB = antlr4-runtime

CFLAGS = -g -w -std=c++0x -I$(INCLUDE_DIR) -L$(INCLUDE_LIB) -l$(LIB)

GoGo : $(SRCS)
	$(CC) -o $(OUTPUT) $(CFLAGS) $(SRCS)
