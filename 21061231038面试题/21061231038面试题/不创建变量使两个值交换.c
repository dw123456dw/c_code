#include <stdio.h>
int main()
{
	int a = 5;
	int b = 3;
	printf("��֮ǰa=%d,b=%d\n",a,b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("��֮��a=%d,b=%d\n",a,b);
	return 0;
}//��ȱ�ݣ���a��b���ر��ʱa=a+b����ֶ����Ʋ�����ŵ�����,������õĽ��������


/*a = a ^ b;
b = a ^ b;
a = a ^ b;*/
