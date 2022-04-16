#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//用试除法，除了1和它本身，从2到n-1试遍看是否能被所给数整除，从而判断是不是素数。
int main()
{
	int i = 0;
	for (i = 100;i <= 200;i++)
	{
		int j = 0;//记得放循环里
		for (j = 2;j <= i;j++)//可以优化为j<=sqrt(i)相应下面的if换为j>sqrt(i)且要头文件math.h
		{
			if (i % j == 0)//条件成立表示不是素数，不需要所以不要打印
			{
				break;
			}
		}
		if (i == j)//2到n-1的数已经试完
		{
			printf("%d ",i);
		}
	}
	return 0;
}