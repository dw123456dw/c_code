#include <stdio.h>






int main()//¶ş·Ö²éÕÒ
{
	//int arr[] = {1,2,3,4,5,6,7,8,9,10,11};
	//int sz = sizeof(arr) / szieof(arr[0]);
	//checknum(arr,sz);
	unsigned n = 11;
	int count = 0;
	while (n!=0)
	{
		if (n>>1==1)
		{
			count++;
		}
		n = n >> 1;

	}

	printf("%d",count);
	return 0;
}