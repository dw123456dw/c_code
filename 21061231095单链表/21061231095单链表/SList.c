#include "SList.h"

void SListPrint(SLDNode* phead)
{
	SLDNode* cur = phead;
	while (cur!=NULL)
	{
		printf("%d->",cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}

SLDNode* SListCreat(SLDataType x)
{
	//创建一个节点
	SLDNode* newnode = (SLDNode*)malloc(sizeof(SLDNode));
	if (newnode != NULL)
	{
		newnode->data = x;
		newnode->next = NULL;
	}
	else
	{
		exit(-1);
	}
	return newnode;
}

//尾插
void SListPushBack(SLDNode** pphead,SLDataType x)
{
	//创建一个节点
	SLDNode* newnode = SListCreat(x);
	//先判断有节点没有
	if (*pphead==NULL)
	{
		*pphead = newnode;
	}
	else
	{
		SLDNode* cur = *pphead;
		while (cur->next!=NULL)
		{
			cur = cur->next;
		}
		cur->next = newnode;
	}
}

//头插
void SListPushFront(SLDNode** pphead, SLDataType x)
{
	SLDNode* newnode = SListCreat(x);
	if (*pphead==NULL)
	{
		*pphead = newnode;
	}
	else
	{
		newnode->next = *pphead;
		*pphead = newnode;
	}
}

//尾删
void SListPopBack(SLDNode** pphead)
{
	//如果为空表
	if (*pphead==NULL)
	{

		return ;
	}
	//如果有一个节点
	if ((*pphead)->next==NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else//2个节点以上
	{
		//记录上一个节点的地址
		SLDNode* prev = NULL;
		SLDNode* cur = *pphead;
		while (cur->next != NULL)
		{
			prev = cur;
			cur = cur->next;
		}
		free(cur);
		cur = NULL;
		prev->next = NULL;
	}
}

//头删
void SListPopFront(SLDNode** pphead)
{
	if (*pphead == NULL)
	{
		return;
	}
	SLDNode* tmp = NULL;
	tmp = (*pphead)->next;
	free(*pphead);
	*pphead = tmp;
}

//查找
SLDNode* SListFind(SLDNode* pphead,SLDataType x)
{
	SLDNode* cur = pphead;
	while (cur)
	{
		if (cur->data==x)
		{
			return cur;
		}
		else
		{
			cur = cur->next;
		}
	}
	return NULL;
}

//在pos之前插入x
void SlistInsertBefor(SLDNode** pphead, SLDNode* pos, SLDataType x)
{
	SLDNode* newnode = SListCreat(x);
	if ((*pphead)->data==pos->data)
	{
		newnode->next = *pphead;
		*pphead = newnode;
	}
	else
	{
		//找到pos前一个位置
		SLDNode* posprev = *pphead;
		while (posprev->next != pos)
		{
			posprev = posprev->next;
		}
		posprev->next = newnode;
		newnode->next = pos;
	}
}


void SListInsertAfter(SLDNode* pos, SLDataType x)
{
	SLDNode* newnode = SListCreat(x);

	newnode->next = pos->next;
	pos->next = newnode;
}


void SListErase(SLDNode** pphead, SLDNode* pos)
{
	if (*pphead==pos)
	{
		SLDNode* tmp = NULL;
		tmp = (*pphead)->next;
		free(*pphead);
		*pphead = tmp;
	}
	else
	{
		SLDNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		prev->next=pos->next;
		free(pos);
	}
}

void SListDestroy(SLDNode** pphead)
{
	SLDNode* cur = *pphead;

	while (cur)
	{
		SLDNode* next = cur->next;
		free(cur);
		cur = next;
	}
	*pphead = NULL;
}