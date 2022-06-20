#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <errno.h>



int main()
{
	FILE* pf = fopen("test.txt","w");
	if (pf == NULL)
	{
		printf("%s",strerror(errno));
	}
	fclose(pf);
	pf = NULL;
	return 0;
}