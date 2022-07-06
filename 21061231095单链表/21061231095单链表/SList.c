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
	//����һ���ڵ�
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

//β��
void SListPushBack(SLDNode** pphead,SLDataType x)
{
	//����һ���ڵ�
	SLDNode* newnode = SListCreat(x);
	//���ж��нڵ�û��
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

//ͷ��
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

//βɾ
void SListPopBack(SLDNode** pphead)
{
	//���Ϊ�ձ�
	if (*pphead==NULL)
	{

		return ;
	}
	//�����һ���ڵ�
	if ((*pphead)->next==NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else//2���ڵ�����
	{
		//��¼��һ���ڵ�ĵ�ַ
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

//ͷɾ
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

//����
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

//��pos֮ǰ����x
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
		//�ҵ�posǰһ��λ��
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