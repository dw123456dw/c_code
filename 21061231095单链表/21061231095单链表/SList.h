#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef int SLDataType;

typedef struct SListNode
{
	SLDataType data;
	struct SListNode* next;
}SLDNode;

//打印
void SListPrint(SLDNode* phead);

//尾插
void SListPushBack(SLDNode** phead,SLDataType x);

//头插
void SListPushFront(SLDNode** pphead,SLDataType x);

//尾删
void SListPopBack(SLDNode** pphead);

//头删
void SListPopFront(SLDNode** pphead);

//查找
SLDNode* SListFind(SLDNode* pphead,SLDataType x);

//前插
void SlistInsertBefor(SLDNode** pphead,SLDNode* pos,SLDataType x);

//后插
void SListInsertAfter(SLDNode* pos, SLDataType x);

//删除pos位置元素
void SListErase(SLDNode** pphead,SLDNode* pos);

//销毁
void SListDestroy(SLDNode** pphead);