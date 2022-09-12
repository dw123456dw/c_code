#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	printf("请输入你想测试数组中数的个数：");
	scanf("%d", &n);
	printf("请输入数据：\n");
	int a[n];
	int b[n] = { 0 };
	int i = 0;
	for (i = 0; i < n; i++)//初始化数组 
	{
		b[i] = i;
	}
	i = 0;
	while (n--)
	{
		scanf("%d", &a[i]);
		i++;
	}
	////////////////////////////////////////////////////		
	for (i = 0; i < n; i++)
	{
		printf("%d %d\n", a[i], b[i]);
	}

	for (i = 0; i < n; i++)
	{
		if (a[i] > 0 && a[i] <= n)
		{
			b[a[i] - 1] = 0;
		}
	}

	for (i = 0; i < n; i++)
	{
		if (b[i] == i)
			printf("\n结果是：%d", i + 1);
		exit(0);
	}
	return 0;
}