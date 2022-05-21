#include <stdio.h>
int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	for (i = 0; i <= 12; i++)//调试结果：当i为12时arr[i]也为12，所以执行arr[i]=0时把i也变为0，导致死循环。
	{
		printf("hehe\n");
		arr[i] = 0;
	}
	return 0;
}