#include "head.h"


void readfile(accountdata data[], int n)
{
	int i = 0;
	FILE* fp;

	if ((fp = fopen("account.txt", "r"))==NULL)
	{
		printf("�ļ���ʧ�� \n");
		exit(0);
	}

	for (i=0;i<n;i++)
	{
		fscanf(fp, "%20s%10s%10d%4d%02d%02d%6d\n", data[i].Name, data[i].AccountID, &data[i].Password,
			&data[i].data.Year, &data[i].data.Month, &data[i].data.Day, &data[i].money);
	}



	fclose(fp);

}