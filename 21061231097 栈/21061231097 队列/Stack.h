#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>



typedef int STDataType;

typedef struct Stack
{
	STDataType* a;
	int Top;
	int Capacity;
}ST;


void StackInit(ST* ps);

void StackDestroy(ST* ps);

void StackPush(ST* ps,STDataType x);

void StackPop(ST*  ps);

STDataType STackTop(ST* ps);

int StackSize(ST* ps);

bool StackEmpty(ST* ps);