#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()//����һ��n�Ľ׳�֮��
{
	int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	printf("������n��ֵ��");
	scanf("%d",&n);
	for (i = 1; i <= n; i++)
	{
		int j = 0;
		ret = 1;//ÿ�μ���׳�ʱӦ����ret��1
		for (j = 1;j <= i; j++)
		{
			ret *= j;
		}
		sum = sum + ret;
	}
	printf("%d",sum);
	return 0;
}