#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void print(int x)
{
	if (x>9)
	{
		print(x/10);//ȡ������λ
	}
	printf("%d ",x%10);
}
int main()
{
	unsigned int i = 0;
	printf("������һ������\n");//����1234
	scanf("%d",&i);
	print(i);
	//ʵ��ԭ��
	//print��123��4
	//print��12��3 4
	//print��1��2 3 4
	return 0;
}