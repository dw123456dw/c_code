#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	int r = 0;
	printf("��������������");
	scanf("%d%d",&m,&n);
	while (r = m % n)//շת�����//����
	{
		m = n;
		n = r;
	}
	printf("���Լ����%d",n);

	return 0;
}