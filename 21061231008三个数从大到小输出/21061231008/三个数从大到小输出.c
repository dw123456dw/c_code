#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d%d",&a,&b,&c);
	//�㷨ʵ���Զ��Ƚ�a��b��c�Ĵ�С
	//a��������ֵ
	//b�Ŵ�֮��c��С
	if (a < b)
	{
		int temp = a;//�ô���һ����ʱ�������a����a��ֵ���
		a = b;
		b = temp;
	}
	if (a < c)
	{
		int temp = a;
		a = c;
		c = temp;
	}  //���a������ֵ
	if (b < c)
	{
		int temp = b;
		b = c;
		c = temp;
	}
	printf("%d%d%d",a,b,c);
	return 0;
}