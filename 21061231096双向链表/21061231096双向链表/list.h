#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef int LTDateType;

typedef struct listNode
{
	LTDateType data;
	struct ListNode* prev;
	struct ListNode* next;
}LTNode;


void ListPrint(LTNode* phead);


LTNode* ListInit();


void ListPushBack(LTNode* phead,LTDateType x);


void ListPopBack(LTNode* phead);

void ListPushFront(LTNode* phead,LTDateType x);

void ListPopFront(LTNode* phead);

void ListInsert(LTNode* pos,LTDateType x);


void ListErase(LTNode* pos);
