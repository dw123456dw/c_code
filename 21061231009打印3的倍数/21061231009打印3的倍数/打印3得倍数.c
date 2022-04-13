#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	int i = 0;
	for (i = 1;i <= 100;i++)
	{
		if (i%3==0)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}