#include <stdio.h>
#include <string.h>


int main()//��ַ����ʶ
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
		printf("aa\n");//�������鿪�������ռ䣬�����׵�ֵַ��һ��
	}
	if (p1 == p2)
	{
		printf("hh\n");//�����ַ�����Ϊ���ɸı������ڿռ�֮����һ����ַ������p1��p2ָ��ͬһ����ַ
	}
	else
	{
		printf("aa\n");
	}
	return 0;
}