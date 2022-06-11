#include <stdio.h>
#include <assert.h>

//char* my_strncpy(char* p1,char*p2,char sz)
//{
//	char* ret = p1;
//	assert(p1 && p2);
//	while (sz&&(*p1++ = *p2++))
//	{
//		sz--;
//	}
//	if (sz)
//	{
//		while (--sz)
//		{
//			*p1++ = '\0';
//		}
//	}
//	return ret;
//}
char* my_strncpy(char* p1, char* p2, char sz)
{
	char* ret = p1;
	assert(p1 && p2);
	while (sz&&(*p1++ = *p2++))
	{
		sz--;
	}
	if (sz)
	{
		while (--sz)
		{
			*p1++ = '\0';
		}
	}
	return ret;
}


int main()
{
	char arr1[10] = "abcdefg";
	char arr2[] = "bit";
	my_strncpy(arr1, arr2, 5);
	printf("%s",arr1);
	return 0;
}