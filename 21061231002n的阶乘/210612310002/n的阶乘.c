#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	printf("������һ����:");
	scanf("%d\n",&n);
	for (i = 1; i <= n; i++)
	{
		ret = ret * i;
	}
	printf("n�Ľ׳���%d\n", ret);
	return 0;
}