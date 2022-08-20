#include "head.h"



int searchID(accountdata data[], char* ID,int* location)
{
	int i = 0;
	for (i = 0; i < N; i++)
	{
		if (strcmp(ID,data[i].AccountID)==0)
		{
			return 1;
		}
		++*location;
	}
	return 0;
}