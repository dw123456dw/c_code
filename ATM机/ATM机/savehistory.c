#include "head.h"



void savehistory(accountdata data[], int i, int location, int money)
{
	FILE* fp;
	time_t timep;
	time(&timep);



	char path[30] = "D:\git\ATM��\ATM��", suffix[] = ".txt";
	strcat(path,data[location].AccountID);
	strcat(path,suffix);



	if ((fp=fopen(path,"rt"))==NULL)
	{
		fp = fopen(path,"wt");
		fprintf(fp,"%-20s%-10s%-10s%-10s%10s","�˺�","����","���","���","ʱ��\n");
	}
	else
	{
		fp = fopen(path,"at");
		fprintf(fp, "%-20s%-10d%-10d%-10d%10s", data[location].AccountID, i, money, data[location].money, ctime(&timep));
	}

}