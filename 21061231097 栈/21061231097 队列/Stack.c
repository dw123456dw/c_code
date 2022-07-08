#include "Stack.h"


void StackInit(ST* ps)
{
	assert(ps);
	ps->a = NULL;
	ps->Capacity = ps->Top = 0;
}



void StackDestroy(ST* ps)
{
	assert(ps);

	free(ps->a);
	ps->a = NULL;
	ps->Capacity = ps->Top = 0;
}


void StackPush(ST* ps,STDataType x)
{
	assert(ps);
	if (ps->Top==ps->Capacity)//ÔöÈÝ
	{
		int newCapacity = ps->Capacity == 0 ? 4 : ps->Capacity * 2;
		STDataType* tmp = realloc(ps->a,sizeof(STDataType)*newCapacity);
		if (tmp==NULL)
		{
			printf("realloc Fail\n");
			exit(-1);
		}
		ps->a = tmp;
		ps->Capacity = newCapacity;
	}

	ps->a[ps->Top] = x;
	ps->Top++;
}


void StackPop(ST* ps)
{
	assert(ps);
	assert(ps->Top > 0);

	ps->Top--;

}

STDataType STackTop(ST* ps)
{
	assert(ps);
	assert(!StackEmpty(ps));

	return ps->a[ps->Top - 1];
}

bool StackEmpty(ST* ps)
{
	assert(ps);

	return ps->Top==0;
}


int StackSize(ST* ps)
{
	assert(ps);

	return ps->Top;

}