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
		//增容
		struct peoinfo* str=realloc(ps->data, (ps->capacity + 2) * sizeof(struct peoinfo));
		if (str != NULL)
		{
			ps->data = str;
			ps->capacity += 2;
			printf("增容成功\n");
		}
		else
		{
			printf("增容失败\n");
		}
	}
}
void addcontact(struct contact* ps)
{
	//检查空间满了没，满了添加空间，没满就啥也不干
	checkcapaity(ps);
	printf("请输入名字: ");
	scanf("%s",ps->data[ps->size].name);
	printf("请输入年龄: ");
	scanf("%d", &(ps->data[ps->size].age));
	printf("请输入性别: ");
	scanf("%s", ps->data[ps->size].sex);
	printf("请输入电话: ");
	scanf("%s", ps->data[ps->size].tele);
	printf("请输入地址: ");
	scanf("%s", ps->data[ps->size].addr);
	ps->size++;
	printf("添加成功 \n");
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
	printf("请输入要删除的人:");
	scanf("%s",name);
	//1.找到返回名字下标；
	//找不到返回-1
	int pos = findname(ps,name);
	if (pos == ps->size)
	{
		printf("要删除的人不存在\n");
	}
	else
	{
		int j = 0;
		for (j = pos;j < ps->size-1;j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}
	//删除人
}
void showcontact(struct contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		printf("%-10s\t%-4s\t%-5s\t%-12s\t%-20s\n","名字","年龄","性别","电话","地址");
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
	printf("请输入查找的人:");
	scanf("%s",name);
	int pos = findname(ps, name);
	if (-1==pos)
	{
		printf("查找人不存在\n");
	}
	else
	{
		printf("%-10s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
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
	printf("请输入要修改人:");
	scanf("%s",name);
	int pos = findname(ps, name);
	if (-1 == pos)
	{
		printf("修改人不存在:\n");
	}
	else
	{
		printf("请输入修改名字: ");
		scanf("%s", ps->data[pos].name);
		printf("请输入修改年龄: ");
		scanf("%d", &(ps->data[pos].age));
		printf("请输入修改性别: ");
		scanf("%s", ps->data[pos].sex);
		printf("请输入修改电话: ");
		scanf("%s", ps->data[pos].tele);
		printf("请输入修改地址: ");
		scanf("%s", ps->data[pos].addr);
		printf("修改成功");
	}
}

void destorycontact(struct contact* ps)
{
	free(ps->data);
	ps->data = NULL; 
}


