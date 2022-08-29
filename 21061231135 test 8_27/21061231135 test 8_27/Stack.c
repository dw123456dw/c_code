#include "Stack.h"

Stack* StackInit()
{
	Stack* Top = (Stack*)malloc(sizeof(Stack));
	Top->next = NULL;
	return Top;
}

void StackPush(Stack* Top, int x)
{
	Stack* newNode = (Stack*)malloc(sizeof(Stack));
	newNode->data = x;

	newNode->next = Top->next;
	Top->next = newNode;
}


int StackPop(Stack* Top)
{
	if (Top->next==NULL)
	{
		return 0;
	}

	Stack* temp = Top->next;
	int x = temp->data;

	Top->next = temp->next;

	free(temp);
	return x;
}


void StackPrint(Stack* Top)
{
	Stack* cur = Top->next;

	while (cur!=NULL)
	{
		printf("%d \n",cur->data);
		cur = cur->next;
	}
}