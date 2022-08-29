#include "Stack.h"


int main()
{
	Stack* s=NULL;
	s = StackInit();
	StackPush(s, 1);
	StackPush(s, 2);
	StackPush(s, 3);
	StackPush(s,4);

	StackPop(s);
	StackPop(s);
	StackPop(s);
	StackPop(s);
	StackPop(s);


	StackPush(s, 5);
	StackPush(s, 6);
	StackPush(s, 7);
	StackPush(s, 8);
	StackPush(s, 9);


	StackPrint(s);

	return 0;
}