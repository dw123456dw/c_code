#include "list.h"



LTNode* ListInit()
{
	LTNode* phead = (LTNode* )malloc(sizeof(LTNode));
	phead->next =phead;
	phead->prev = phead;
	return phead;
}




void ListPushBack(LTNode* phead,LTDateType x)
{
	assert(phead);


	ListInsert(phead,x);
	//LTNode* tail = phead->prev;
	//LTNode* newNode = (LTNode* )malloc(sizeof(LTNode));


	//newNode->data = x;


	//tail->next = newNode;
	//newNode->prev = tail;
	//newNode->next = phead;
	//phead->prev = newNode;
}



void ListPrint(LTNode* phead)
{
	LTNode* cur = phead->next;
	while (cur!=phead)
	{
		printf("%d ",cur->data);
		cur = cur->next;
	}
	printf("\n");
}


void ListPopBack(LTNode* phead)
{
	//·ÀÖ¹É¾³ýÉÚ±øÎ»
	assert(phead);
	assert(phead->next!=phead);


	ListErase(phead->prev);
	//LTNode* tail = phead->prev;
	//LTNode* back = tail->prev;
	//free(tail);

	//back->next = phead;
	//phead->prev = back;
}




void ListPushFront(LTNode* phead,LTDateType x)
{
	ListInsert(phead->next,x);
	//LTNode* newhead = (LTNode* )malloc(sizeof(LTNode));
	//LTNode* next = phead->next;
	//newhead->data = x;


	//phead->next = newhead;
	//newhead->prev = phead;
	//newhead->next = next;
	//next->prev = newhead;
}

void ListPopFront(LTNode* phead)
{

	ListErase(phead->next);
	//LTNode* n1 = phead->next;
	//LTNode* n2 = n1->next;

	//phead->next = n2;
	//n2->prev = phead;
	//free(n1);
}


void ListInsert(LTNode* pos, LTDateType x)
{
	assert(pos);
	LTNode* newhead = (LTNode* )malloc(sizeof(LTNode));
	newhead->data = x;

	LTNode* posPrev = pos->prev;
	posPrev->next = newhead;
	newhead->prev = posPrev;

	newhead->next = pos;
	pos->prev = newhead;
}


void ListErase(LTNode* pos)
{
	assert(pos);
	LTNode* next = pos->next;
	LTNode* prev = pos->prev;

	prev->next = next;
	next->prev = prev;

	free(pos);
}