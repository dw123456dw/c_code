#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int fac(int x)
{
	int sum = 1;
	int y = 0;
	for (y = 1; y <= x; y++)
	{
		sum = y * sum;//ǿ��n�Ľ׳�!!!
	}
	return sum;
}
int main()
{
	int n = 0;
	scanf("%d",&n);
	fac(n);
	int ret = fac(n);
	printf("n�Ľ׳���%d",ret);
	return 0;
}