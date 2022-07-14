#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()//计算一到n的阶乘之和
{
	int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	printf("请输入n的值：");
	scanf("%d",&n);
	for (i = 1; i <= n; i++)
	{
		int j = 0;
		ret = 1;//每次计算阶乘时应该让ret归1
		for (j = 1;j <= i; j++)
		{
			ret *= j;
		}
		sum = sum + ret;
	}
	printf("%d",sum);
	return 0;
}