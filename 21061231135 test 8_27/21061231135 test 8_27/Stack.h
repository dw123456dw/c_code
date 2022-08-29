#pragma once
#include <stdio.h>
#include <stdlib.h>




typedef struct stack
{
	int data;
	struct stack* next;
}Stack;



Stack* StackInit();

void StackPush(Stack* Top,int x);

int StackPop(Stack* Top);

void StackPrint(Stack* Top);