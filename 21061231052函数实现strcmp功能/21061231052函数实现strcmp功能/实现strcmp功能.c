#include <stdio.h>
#include <assert.h>
//void my_strcpy(char* dest,char* src)
//{
//	while (*src!='\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//}                                                //  6分
//int main()//函数实现strcpy
//{
//	char arr1[] = "##########";
//	char arr2[] = "bit";//有'\0'
//	my_strcpy(arr1,arr2);
//	printf("%s",arr1);
//	return 0;
//}
//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++=*src++)
//	{
//		;
//	}
//}                                                //  7分未考虑空指针
//int main()//函数实现strcpy
//{
//	char arr1[] = "##########";
//	char arr2[] = "bit";//有'\0'
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}                                                //  8分函数参数不对
//int main()//函数实现strcpy
//{
//	char arr1[] = "##########";
//	char arr2[] = "bit";//有'\0'
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}
char* my_strcpy(char* dest,const char* src)//这里
{
	char* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}                                                //  10分完美代码
int main()//函数实现strcpy
{
	char arr1[] = "##########";
	char arr2[] = "bit";//有'\0'
	my_strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}