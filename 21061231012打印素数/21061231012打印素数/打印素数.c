#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//���Գ���������1����������2��n-1�Ա鿴�Ƿ��ܱ��������������Ӷ��ж��ǲ���������
int main()
{
	int i = 0;
	for (i = 100;i <= 200;i++)
	{
		int j = 0;//�ǵ÷�ѭ����
		for (j = 2;j <= i;j++)//�����Ż�Ϊj<=sqrt(i)��Ӧ�����if��Ϊj>sqrt(i)��Ҫͷ�ļ�math.h
		{
			if (i % j == 0)//����������ʾ��������������Ҫ���Բ�Ҫ��ӡ
			{
				break;
			}
		}
		if (i == j)//2��n-1�����Ѿ�����
		{
			printf("%d ",i);
		}
	}
	return 0;
}