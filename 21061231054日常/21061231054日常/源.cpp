#include <stdio.h>
#include <string.h>


int main()//地址的认识
{
	char arr1[] = "abcdef";
	char arr2[] = "abcdef";
	const char* p1 = "abcdef";
	const char* p2 = "abcdef";
	if (arr1 == arr2)
	{
		printf("hh\n");
	}
	else
	{
		printf("aa\n");//两个数组开辟两个空间，所以首地址值不一样
	}
	if (p1 == p2)
	{
		printf("hh\n");//常量字符串因为不可改变所以在空间之开辟一个地址，所以p1，p2指向同一个地址
	}
	else
	{
		printf("aa\n");
	}
	return 0;
}