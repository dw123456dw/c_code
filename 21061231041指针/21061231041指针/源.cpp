#include <stdio.h>
int main()
{
	int arr[10] = { 0 };
	int* p = arr;//Ê×ÔªËØµØÖ·
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + 1) = 1;
	}
}