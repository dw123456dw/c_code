#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void exchange(int* pa,int* pb)//ʹ�ý����ò�����ɺ������ܡ�
{
	int tem = 0;
	tem = *pa;
	*pa = *pb;
	*pb = tem;
}



int main()
{
	int a = 10;
	int b = 20;
	printf("a =%d,b =%d\n",a,b);
	exchange(&a,&b);//��a��b�ĵ�ַ��������
	printf("a =%d,b =%d\n",a,b);
	return 0;
}
//�ú�������ֻ����ָ������ɡ�