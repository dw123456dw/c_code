#include <stdio.h>

//a˵������ 
//b˵��c
//c˵��d
//d˵c�ں�˵
//��֪����˵��Ϊ����һ�٣�����ʵ��Ѱ������      ��Ϊc


int main()
{
	int killer = 0;
	for (killer = 'a'; killer <= 'd'; killer++)
	{
		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
		{
			printf("killer=%c",killer);
		}
	}
	return 0;
}