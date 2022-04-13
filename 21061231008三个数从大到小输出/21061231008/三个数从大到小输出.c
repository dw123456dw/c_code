#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d%d",&a,&b,&c);
	//算法实现自动比较a，b，c的大小
	//a里面放最大值
	//b放次之，c最小
	if (a < b)
	{
		int temp = a;//得创建一个临时变量存放a否则a的值会变
		a = b;
		b = temp;
	}
	if (a < c)
	{
		int temp = a;
		a = c;
		c = temp;
	}  //解决a存放最大值
	if (b < c)
	{
		int temp = b;
		b = c;
		c = temp;
	}
	printf("%d%d%d",a,b,c);
	return 0;
}