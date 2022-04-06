#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	printf("请输入一个数:");
	scanf("%d\n",&n);
	for (i = 1; i <= n; i++)
	{
		ret = ret * i;
	}
	printf("n的阶乘是%d\n", ret);
	return 0;
}