#define _CRT_SECURE_NO_WARNINGS
#include "ATM.h"

void account(PERSON arr[])
{


	int i = 0;
	FILE* fp;
	fp = fopen("account.txt","a");

	writetofile(arr, fp);
	writetofile(arr+1, fp);
	writetofile(arr+2, fp);

	fclose(fp);
}



