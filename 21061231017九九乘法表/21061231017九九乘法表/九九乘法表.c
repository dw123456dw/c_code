#include <stdio.h>
int main()
{
	int sum = 0;
	int i = 0;//������
	int j = 0;//������
	for (i = 1;i <= 9;i++)
	{
		for (j = 1;j <= i;j++)
		{
			sum = i * j;
			printf("%d*%d=%-2d  ",i,j,sum);//-2d����˼�Ǵ�ӡ��λ��������ÿո��룬������룬��û�и�����Ϊ�Ҷ��롣
		}
		printf("\n");//�ﵽ��׼�˷���ĸ�ʽ
	}
	return 0;
}