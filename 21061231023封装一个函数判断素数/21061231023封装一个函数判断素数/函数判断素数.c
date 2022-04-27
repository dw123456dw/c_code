#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int prime(int x)
{
	int y = 0;
	for (y = 2; y <= sqrt(x); y++)//强化素数计算写法
	{
		if (x % y == 0)
		{
			return 0;
		}
		return 1;
	}
}
int main()
{
	int i = 0;
	for (i = 101; i <= 200; i++)
	{
		if (prime(i) == 1)
			printf("%d  ",i);
	}
	return 0;
}