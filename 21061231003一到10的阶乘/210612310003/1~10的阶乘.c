#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 3; n++)
	{
		ret = 1;//��ֹret��ֵ�������ѭ���ı䵼�´���
		for (i = 1; i <= n; i++)
		{
			ret = ret * i;
		}
		sum = sum + ret;
	}
	printf("1��3�׳���%d\n", sum);
	return 0;
}