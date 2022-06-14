#include <stdio.h>
#include <assert.h>


char* my_memcpy(void* dest, const void* src, size_t num)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = (char*)dest;
	while (--num)
	{
		*(char*)dest = *(char*)src;
		((char*)dest)++;
		((char*)src)++;
	}
	return ret;
}
int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[5] = { 0 };
	char* ret=my_memcpy(arr2,arr1,sizeof(arr1));
	int i = 0;
	for (i = 0;i < 5;i++)
	{
		printf("%d ",arr2[i]);
	}
	return 0;
}