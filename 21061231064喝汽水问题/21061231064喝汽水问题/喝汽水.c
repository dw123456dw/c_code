#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int money = 0;
	scanf("%d",&money);
	int total = 0;
	int empty = 0;
	total = money;//�ܹ��ȶ���
	empty = money;//�����ƿ��
	while (empty >= 2)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("%d",total);
	return 0;
}