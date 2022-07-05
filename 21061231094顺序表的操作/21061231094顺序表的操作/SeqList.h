#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLDataType;

typedef struct SeqList
{
	SLDataType* a;
	int size;      //实际有多少元素
	int capacity;  //顺序表的容量
}SL;

//顺序表的初始化
void SeqListinit(SL* ps);

//尾增
void SeqListPushBack(SL* ps,SLDataType x);

//打印
void SeqListPrint(SL* ps);

//尾删
void SeqListPopBack(SL* ps);

//头增
void SeqListPushFront(SL* ps,SLDataType x);

//检查空间满了吗
void SeqListCheckCapacity(SL* ps);

//头删
void SeqListPopFront(SL* ps);

//找到了返回x的位置下标，找不到返回-1
int SeqListFind(SL* ps,SLDataType x);

//指定pos下标位置插入
void SeqListInsert(SL* ps,int pos,SLDataType x);

//删除pos位置的数据
void SeqListErase(SL* ps,int pos);

//free
void SeqListFree(SL* ps);