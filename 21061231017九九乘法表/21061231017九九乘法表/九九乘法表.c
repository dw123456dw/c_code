#include <stdio.h>
int main()
{
	int sum = 0;
	int i = 0;//控制行
	int j = 0;//控制列
	for (i = 1;i <= 9;i++)
	{
		for (j = 1;j <= i;j++)
		{
			sum = i * j;
			printf("%d*%d=%-2d  ",i,j,sum);//-2d的意思是打印两位数不足的用空格补齐，且左对齐，若没有负号则为右对齐。
		}
		printf("\n");//达到标准乘法表的格式
	}
	return 0;
}