#include <stdio.h>
#include "stringcompare.h"


int main()
{
    char* str1="abcd";
    char* str2="acd";

    if(stringcompare(str1,str2))
    {
	printf("一样\n");
    }
    else
    {
	printf("不一样\n");
    }

    return 0;
}
