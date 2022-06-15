#include <stdio.h>
#include <assert.h>
void* my_memcpy(void* dest, const void* src, size_t num)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = (char*)dest;
	if (dest < src)
	{
		while (--num)
		{
			*(char*)dest = *(char*)src;
			((char*)dest)++;
			((char*)src)++;
		}
	}
	else
	{
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	return ret;
}
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10};
	char* ret = my_memcpy(arr1+2, arr1, 20);
	int i = 0;
	for (i = 0;i < 10;i++)
	{
		printf("%d ", arr1[i]);
	}
	return 0;
}