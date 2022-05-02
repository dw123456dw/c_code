#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void print(int x)
{
	if (x>9)
	{
		print(x/10);//取出各个位
	}
	printf("%d ",x%10);
}
int main()
{
	unsigned int i = 0;
	printf("请输入一个数：\n");//输入1234
	scanf("%d",&i);
	print(i);
	//实现原理
	//print（123）4
	//print（12）3 4
	//print（1）2 3 4
	return 0;
}