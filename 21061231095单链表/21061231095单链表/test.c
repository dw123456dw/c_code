#include "SList.h"



void test1()
{
	SLDNode* plist = NULL;
	SListPushBack(&plist,1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	//SListPushFront(&plist,1);
	//SListPushFront(&plist, 2);
	//SListPushFront(&plist, 3);
	//SListPushFront(&plist, 4);
	//SListPushFront(&plist, 5);
	//SListPopBack(&plist);
	//SListPopBack(&plist);
	//SListPopBack(&plist);
	//SListPopBack(&plist);
	//SListPopFront(&plist);
	//SListPopFront(&plist);
	//SListPopFront(&plist);
	//SListPopFront(&plist);
	//SListPopFront(&plist);
	//SListPopFront(&plist);
	//SListPopFront(&plist);
	//SListPopFront(&plist);

	SLDNode* pos = SListFind(plist,1);
	//if (pos!=NULL)
	//{
	//	printf("3的位置在第%p个节点\n",pos);
	//}
	//SlistInsertBefor(&plist,pos,10);

	//SListInsertAfter(&plist, pos, 10);
	SListErase(&plist,pos);
	SListPrint(plist);
}




int main()
{
	test1();
	return 0;
}


