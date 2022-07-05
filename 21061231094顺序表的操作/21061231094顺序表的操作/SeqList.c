#include "SeqList.h"


void SeqListinit(SL* ps)
{
	ps->a = NULL;
	ps->capacity = ps->size = 0;
}


void SeqListCheckCapacity(SL* ps)
{
	//如果空间不够先扩容
	if (ps->size == ps->capacity)
	{
		int Newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SLDataType* tmp = (SLDataType*)realloc(ps->a, Newcapacity * sizeof(SLDataType));
		if (tmp == NULL)   //记得判断开辟成功了没有
		{
			printf("realloc fail\n");
			exit(-1);
		}
		ps->a = tmp;     //把开辟的空间的指针赋值给a
		ps->capacity = Newcapacity;
	}
}


void SeqListPushBack(SL* ps, SLDataType x)
{
	SeqListCheckCapacity(ps);
	ps->a[ps->size] = x;
	ps->size++;
}


void SeqListPrint(SL* ps)
{
	int i = 0;
	for (i=0;i<ps->size;i++)
	{
		printf("%d ",ps->a[i]);
	}
}


void SeqListPopBack(SL* ps)
{
	assert(ps->size>0);
	ps->size--;
}


void SeqListPushFront(SL* ps, SLDataType x)
{
	//检查空间是否满了
	SeqListCheckCapacity(ps);


	//挪动数据
	int end = ps->size - 1;
	while (end>=0)
	{
		ps->a[end+1] = ps->a[end];
		end--;
	}
	ps->a[0] = x;
	ps->size++;
}


void SeqListPopFront(SL* ps)
{
	int begin = 0;
	//挪动数据
	while (begin<ps->size-1)
	{
		ps->a[begin] = ps->a[begin + 1];
		begin++;
	}

	ps->size--;
}

//找到返回下标，找不到返回-1
int SeqListFind(SL* ps, SLDataType x)
{
	int i = 0;
	for (i=0;i<ps->size;i++)
	{
		if (ps->a[i]==x)
		{
			return i+1;
		}
	}
	return -1;
}

//在pos下标位置插入数据
void SeqListInsert(SL* ps, int pos, SLDataType x)
{
	assert(pos>=0 && pos<=ps->size);
	int i = 0;
	while (i<pos-1)
	{
		i++;
	}
	SeqListCheckCapacity(ps);
	//挪动数据
	int end = ps->size;
	while (end >= i+1)
	{
		ps->a[end] = ps->a[end-1];
		end--;
	}
	ps->a[i + 1] = x;
	ps->size++;
}


void SeqListErase(SL* ps, int pos)
{
	assert(pos >= 0 && pos < ps->size);
	int i = 0;
	while (i<pos-1)
	{
		i++;
	}
	int begin =i ;
	while (begin<ps->size)
	{
		ps->a[i] = ps->a[i + 1];
		begin++;
	}
	ps->size--;
}

void SeqListFree(SL* ps)
{
	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->size = 0;
}