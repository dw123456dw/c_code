#include <stdio.h>
int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	for (i = 0; i <= 12; i++)//���Խ������iΪ12ʱarr[i]ҲΪ12������ִ��arr[i]=0ʱ��iҲ��Ϊ0��������ѭ����
	{
		printf("hehe\n");
		arr[i] = 0;
	}
	return 0;
}