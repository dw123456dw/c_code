#include <stdio.h>

char* my_strcat(char* p1,const char* p2)
{
	char* ret = p1;
	while (*p1!='\0')
	{
		p1++;
	}
	while (*p2!='\0')
	{
		*p1 = *p2;
		p1++;
		p2++;
	}
	return ret;
}


int main()
{
	char arr1[30] = "abcdefg";
	char arr2[] = "hijk";
	my_strcat(arr1,arr2);
	printf("%s",arr1);
	return 0;
}