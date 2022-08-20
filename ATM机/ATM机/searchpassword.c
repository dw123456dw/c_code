#include "head.h"


int searchpassword(accountdata data[], int password)
{
	int i = 0;
	for (i = 0; i < N; i++)
	{
		if (password == data[i].Password)
		{
			return 1;
		}
	}
	return 0;

}