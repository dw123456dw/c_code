#include <stdio.h>
#include <math.h>
int main()//��1��10000��������
{
	int i = 0;
	for (i = 1;i < 10001;i++)
	{
		//1.����Ǽ�λ��
		int count = 1;//i������һλ��
		//�����ڲ���Ҫ�Ҹ�ѭ������������ʹ����ʱֵ
		int tmp = i;
		while (tmp / 10)
		{
			count++;
			tmp /= 10;
		}
		//2.�������λ����count���ݵĺ�
		//���ڵ�һ���ı���tmp��ֵ���������¸�ֵ
		tmp = i;
		int sum = 0;
		while (tmp!=0)
		{
			sum += pow(tmp % 10, count);
			tmp /= 10;
		}
		//3.�ж�
		if (i == sum)
		{
			printf("%d ",i);
		}
	}
	return 0;
}