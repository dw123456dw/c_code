#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fib(int x)
{
	if (x <= 2)
	{
		return 1;
	}
	else
	{
		return fib(x - 1) + fib(x - 2);
	}
}
int main()
{
	int ret = 0;
	int i = 0;
	scanf("%d ",&i);
	ret = fib(i);
	printf("ret =%d\n",ret);
	return 0;
}