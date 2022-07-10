#include "Queue.h"




void QueueInit(Queue* pq)
{
	assert(pq);
	pq->head = pq->tail = NULL;
}



void QueueDestroy(Queue* pq)
{
	assert(pq);
	QueueNode* cur = pq->head;

	while (cur!=NULL)
	{
		QueueNode* next = cur->next;
		free(cur);
		cur = next;
	}

	pq->head = pq->tail = NULL;
}


void QueuePush(Queue* pq,QDataType x)
{
	assert(pq);
	QueueNode* newnode = (QueueNode* )malloc(sizeof(QueueNode));
	newnode->data = x;
	newnode->next = NULL;

	if (pq->head==NULL)
	{
		pq->head = pq->tail = newnode;
	}
	else
	{
		pq->tail->next = newnode;
		pq->tail = newnode;
	}
}


void QueuePop(Queue* pq)
{
	assert(pq);
	assert(QueueEmpty(pq));

	QueueNode* headnext = pq->head->next;
	free(pq->head);

	pq->head = headnext;

	if (pq->head==NULL)
	{
		pq->tail = NULL;
	}

}

bool QueueEmpty(Queue* pq)
{
	assert(pq);
	return pq->head == NULL;
}

QDataType QueueFront(Queue* pq)
{
	assert(pq);
	assert(QueueEmpty(pq));
	return pq->head->data;
}

QDataType QueueBack(Queue* pq)
{
	assert(pq);
	assert(QueueEmpty(pq));
	return pq->tail->data;
}


int QueueSize(Queue* pq)
{
	QueueNode* cur = pq->head;
	int size = 0;
	while (cur!=NULL)
	{
		size++;
		cur = cur->next;
	}
	return size;
}