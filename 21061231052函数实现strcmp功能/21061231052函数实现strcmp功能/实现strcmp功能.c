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
//}                                                //  6��
//int main()//����ʵ��strcpy
//{
//	char arr1[] = "##########";
//	char arr2[] = "bit";//��'\0'
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
//}                                                //  7��δ���ǿ�ָ��
//int main()//����ʵ��strcpy
//{
//	char arr1[] = "##########";
//	char arr2[] = "bit";//��'\0'
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
//}                                                //  8�ֺ�����������
//int main()//����ʵ��strcpy
//{
//	char arr1[] = "##########";
//	char arr2[] = "bit";//��'\0'
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}
char* my_strcpy(char* dest,const char* src)//����
{
	char* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}                                                //  10����������
int main()//����ʵ��strcpy
{
	char arr1[] = "##########";
	char arr2[] = "bit";//��'\0'
	my_strcpy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}