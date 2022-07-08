#include "Stack.h"



void test()
{
	ST s;
	StackInit(&s);
	StackPush(&s, 1);
	StackPush(&s, 2);
	StackPush(&s, 3);
	StackPush(&s,4);
	StackPop(&s);
	//StackPop(&s);
	//StackPop(&s);
	StackPop(&s);

	while (!StackEmpty(&s))
	{
		printf("%d ",STackTop(&s));
		StackPop(&s);
	}






	StackDestroy(&s);
}



int main()
{
	test();
	return 0;
}