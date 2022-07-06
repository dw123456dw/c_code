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

//��ӡ
void SListPrint(SLDNode* phead);

//β��
void SListPushBack(SLDNode** phead,SLDataType x);

//ͷ��
void SListPushFront(SLDNode** pphead,SLDataType x);

//βɾ
void SListPopBack(SLDNode** pphead);

//ͷɾ
void SListPopFront(SLDNode** pphead);

//����
SLDNode* SListFind(SLDNode* pphead,SLDataType x);

//ǰ��
void SlistInsertBefor(SLDNode** pphead,SLDNode* pos,SLDataType x);

//���
void SListInsertAfter(SLDNode* pos, SLDataType x);

//ɾ��posλ��Ԫ��
void SListErase(SLDNode** pphead,SLDNode* pos);

//����
void SListDestroy(SLDNode** pphead);