#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
int main()
{
	char password[20] = {0};
	int a = 0;
	for (a = 0; a < 3; a++)
	{
		printf("���������룺");
		scanf("%s", &password);
		if (strcmp(password,"123456") == 0)//�Ƚ������ַ����Ƿ����Ӧ����strcmp�⺯����ͷ�ļ���string����ʽΪstrcmp���ַ��������ַ�����== 0.
		{
			printf("������ȷ");
			break;
		}
		else
		{
			printf("�������");
		}
	}
	if(a == 3)
		printf("���볬�������˳�����");
	return 0;
}