#include <stdio.h>

int check_big(char* a)
{
	return *a;
}
int main()
{
	int i = 1;
	char* p = (char*)&i;
	int ret= check_big(p);//1��ˣ�0С��
	if (ret == 1)
	{
		printf("�������Ǵ��ģʽ");
	}
	else
	{
		printf("��������С��ģʽ");
	}
	return 0;
}