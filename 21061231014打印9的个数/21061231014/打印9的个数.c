#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 0;
	for (i = 1;i <= 100;i++)
	{
		int j = i % 10;//�������������λ��ʮλ���ж��Ƿ����9.
		int k = i / 10;
		if (j == 9)
		{
			printf("%d ",i);
		}
	    if (k == 9)
		{
			printf("%d ",i);
		}
	}
	return 0;
}