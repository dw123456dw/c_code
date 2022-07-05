#include "SeqList.h"


void test1()
{
	SL s1;
	SeqListinit(&s1);
	SeqListPushBack(&s1, 1);
	SeqListPushBack(&s1, 2);
	SeqListPushBack(&s1, 3);
	SeqListPushBack(&s1, 4);
	SeqListPushFront(&s1, 30);
	SeqListPopFront(&s1);
	SeqListInsert(&s1, 3, 5);
	SeqListErase(&s1,4);
	SeqListPrint(&s1);
	SeqListFree(&s1);
}



int main()
{
	test1();
	return 0;
}