#include "head.h"



void checkmoney(accountdata data[],int location)
{
	printf("�������Ϊ�� %d\n",data[location].money);
	savehistory(data, 2, location, 0);
}