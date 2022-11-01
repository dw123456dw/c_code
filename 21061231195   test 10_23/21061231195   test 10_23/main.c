#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct node
{
	int data;
	struct node* next;
}NODE;

void Merge(NODE* La, NODE* Lb, NODE* Lc)//��8��
{
	NODE* pa, * pb;

	pa = La->next;
	pb = Lb->next;
	printf("��ʼ�ϲ�....\n");
	while (pa != NULL && pb != NULL)
	{
		while (pa != NULL && pa->data < pb->data)
		{
			La->next = pa->next;
			pa->next = Lc->next;
			Lc->next = pa;
			pa = La->next;
		}
		while (pb != NULL && (pa!=NULL) && pb->data <= pa->data)
		{
			Lb->next = pb->next;
			pb->next = Lc->next;
			Lc->next = pb;
			pb = Lb->next;
		}



	}
	printf("�ϲ��ɹ���\n");
}

void Creat(NODE* L, int n)//β�巨����������
{
	int i;
	NODE* s, * r = L;
	while (r->next != NULL)
		r = r->next;
	for (i = 0; i < n; i++)
	{
		s = (NODE*)malloc(sizeof(NODE));
		if (s == NULL)
			printf("�����ڴ�ʧ�ܣ�\n");
		else
		{
			printf("�������%d�����ݣ�", i + 1);
			scanf("%d", &s->data);
		}
		r->next = s;
		r = s;
	}
	r->next = NULL;
}


int main()
{
	NODE La;
	La.next = NULL;
	Creat(&La,3);
	NODE Lb;
	Lb.next = NULL;
	Creat(&Lb,5);



	NODE Lc;
	Lc.next = NULL;
	



	Merge(&La,&Lb,&Lc);


	return 0;
}