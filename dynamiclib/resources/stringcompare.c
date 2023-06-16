#include <stdbool.h>
bool stringcompare(char* str1[], char* str2[])
{
	int len1 = sizeof(str1);
	int len2 = sizeof(str2);

	if (len1!=len2)
	{
		return false;
	}
	char* s1 = str1;
	char* s2 = str2;
	while (*s1!='\0')
	{
		if (*s1!=*s2)
		{
			return false;
		}
		s1++;
		s2++;
	}
	return true;
}


