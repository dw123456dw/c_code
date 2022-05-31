#include <stdio.h>
#include <math.h>
int main()//求1到10000的自恋数
{
	int i = 0;
	for (i = 1;i < 10001;i++)
	{
		//1.求出是几位数
		int count = 1;//i至少是一位数
		//由于内部不要乱改循环体数，所以使用临时值
		int tmp = i;
		while (tmp / 10)
		{
			count++;
			tmp /= 10;
		}
		//2.计算各个位数的count次幂的和
		//由于第一步改变了tmp的值，所以重新赋值
		tmp = i;
		int sum = 0;
		while (tmp!=0)
		{
			sum += pow(tmp % 10, count);
			tmp /= 10;
		}
		//3.判断
		if (i == sum)
		{
			printf("%d ",i);
		}
	}
	return 0;
}