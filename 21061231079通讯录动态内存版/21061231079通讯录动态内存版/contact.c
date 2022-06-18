#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"


void initcontact(struct contact* ps)
{
	ps->data = (struct peoinfo*)malloc(DEFAULT_sz * sizeof(struct peoinfo));
	if (ps->data == NULL)
	{
		return;
	}
	ps->size = 0;
	ps->capacity = DEFAULT_sz;
}


checkcapaity(struct contact* ps)
{
	if (ps->size == ps->capacity)
	{
		//����
		struct peoinfo* str=realloc(ps->data, (ps->capacity + 2) * sizeof(struct peoinfo));
		if (str != NULL)
		{
			ps->data = str;
			ps->capacity += 2;
			printf("���ݳɹ�\n");
		}
		else
		{
			printf("����ʧ��\n");
		}
	}
}
void addcontact(struct contact* ps)
{
	//���ռ�����û��������ӿռ䣬û����ɶҲ����
	checkcapaity(ps);
	printf("����������: ");
	scanf("%s",ps->data[ps->size].name);
	printf("����������: ");
	scanf("%d", &(ps->data[ps->size].age));
	printf("�������Ա�: ");
	scanf("%s", ps->data[ps->size].sex);
	printf("������绰: ");
	scanf("%s", ps->data[ps->size].tele);
	printf("�������ַ: ");
	scanf("%s", ps->data[ps->size].addr);
	ps->size++;
	printf("��ӳɹ� \n");
}
static int findname(struct contact* ps,char name[max_name])
{
	int i = 0;
	for (i = 0;i < ps->size;i++)
	{
		if (strcmp(ps->data[i].name, name) == 0)
		{
			return i;
		}
		else
		{
			return -1;
		}
	}
}

void delcontact(struct contact* ps)
{
	char name[max_name];
	printf("������Ҫɾ������:");
	scanf("%s",name);
	//1.�ҵ����������±ꣻ
	//�Ҳ�������-1
	int pos = findname(ps,name);
	if (pos == ps->size)
	{
		printf("Ҫɾ�����˲�����\n");
	}
	else
	{
		int j = 0;
		for (j = pos;j < ps->size-1;j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
	//ɾ����
}
void showcontact(struct contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		printf("%-10s\t%-4s\t%-5s\t%-12s\t%-20s\n","����","����","�Ա�","�绰","��ַ");
		for (i = 0;i < ps->size;i++)
		{
			printf("%-10s\t%-4d\t%-5s\t%-12s\t%-15s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}
void searchcontact(struct contact* ps)
{
	char name[max_name];
	printf("��������ҵ���:");
	scanf("%s",name);
	int pos = findname(ps, name);
	if (-1==pos)
	{
		printf("�����˲�����\n");
	}
	else
	{
		printf("%-10s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-10s\t%-4d\t%-5s\t%-12s\t%-15s\n",
			ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos].sex,
			ps->data[pos].tele,
			ps->data[pos].addr);
	}
}
void modifycontact(struct contact* ps)
{
	char name[max_name];
	printf("������Ҫ�޸���:");
	scanf("%s",name);
	int pos = findname(ps, name);
	if (-1 == pos)
	{
		printf("�޸��˲�����:\n");
	}
	else
	{
		printf("�������޸�����: ");
		scanf("%s", ps->data[pos].name);
		printf("�������޸�����: ");
		scanf("%d", &(ps->data[pos].age));
		printf("�������޸��Ա�: ");
		scanf("%s", ps->data[pos].sex);
		printf("�������޸ĵ绰: ");
		scanf("%s", ps->data[pos].tele);
		printf("�������޸ĵ�ַ: ");
		scanf("%s", ps->data[pos].addr);
		printf("�޸ĳɹ�");
	}
}

void destorycontact(struct contact* ps)
{
	free(ps->data);
	ps->data = NULL; 
}


