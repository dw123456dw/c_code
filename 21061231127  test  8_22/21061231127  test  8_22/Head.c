#include "Head.h"


int SearchSeqList(const SeqList L, int e)                                     //�ڱ��в���e�ҵ�����e���±���򷵻�-1
{
	int i = 0;
	while ((i <= L.last) && (L.arr[i] != e))
	{
		i++;
	}
	if (i<=L.last)
	{
		return (i+1);
	}
	else
	{
		return -1;
	}
}


int InsertSeqList(SeqList* L, int i, int e)                              //�ڱ��е�i��Ԫ��֮ǰ����e���ɹ�����OK��ʧ�ܷ���ERROER
{
	int k = 0;

	if ((i>L->last+2)||(i<1))
	{
		printf("�Ƿ�λ��\n");
		return ERROR;
	}

	if (L->last>=SIZE-1)
	{
		printf("�������޷�����\n");
		return ERROR;
	}

	for (k=L->last;k>=i-1;k--)
	{
		L->arr[k + 1] = L->arr[k];
	}

	L->arr[k+1] = e;
	L->last++;
	return OK;
}


int DelSeqList(SeqList* L, int i)                                //ɾ�����е�i��λ�õ�Ԫ��
{
	if ((i<1) || (i > L->last+1))
	{
		printf("�Ƿ�λ��\n");
		return ERROR;
	}


	for (i;i<L->last+1;i++)
	{
		L->arr[i - 1] = L->arr[i];
	}

	L->last--;

	return OK;
}


void MergeSeqList(SeqList* LA, SeqList* LB, SeqList* LC)             //�����������ϳ�һ���µ�����ı�
{
	int i = 0, j = 0, k = 0;

	while ((i<=LA->last) && (j<=LB->last))
	{
		if (LA->arr[i]<=LB->arr[j])
		{
			LC->arr[k] = LA->arr[i];
			i++;
			k++;
		}
		else
		{
			LC->arr[k] = LB->arr[j];
			j++;
			k++;
		}
	}

	while (i<=LA->last)
	{
		LC->arr[k] = LA->arr[i];
		i++;
		k++;
	}

	while (j<=LB->last)
	{
		LC->arr[k] = LB->arr[j];
		k++;
		j++;
	}

	LC->last = LA->last + LB->last + 1;

}