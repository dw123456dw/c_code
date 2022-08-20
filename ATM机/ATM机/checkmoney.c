#include "head.h"



void checkmoney(accountdata data[],int location)
{
	printf("ÄúµÄÓà¶îÎª£º %d\n",data[location].money);
	savehistory(data, 2, location, 0);
}