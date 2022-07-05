#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLDataType;

typedef struct SeqList
{
	SLDataType* a;
	int size;      //ʵ���ж���Ԫ��
	int capacity;  //˳��������
}SL;

//˳���ĳ�ʼ��
void SeqListinit(SL* ps);

//β��
void SeqListPushBack(SL* ps,SLDataType x);

//��ӡ
void SeqListPrint(SL* ps);

//βɾ
void SeqListPopBack(SL* ps);

//ͷ��
void SeqListPushFront(SL* ps,SLDataType x);

//���ռ�������
void SeqListCheckCapacity(SL* ps);

//ͷɾ
void SeqListPopFront(SL* ps);

//�ҵ��˷���x��λ���±꣬�Ҳ�������-1
int SeqListFind(SL* ps,SLDataType x);

//ָ��pos�±�λ�ò���
void SeqListInsert(SL* ps,int pos,SLDataType x);

//ɾ��posλ�õ�����
void SeqListErase(SL* ps,int pos);

//free
void SeqListFree(SL* ps);