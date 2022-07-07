#include "list.h"



int main()
{
	LTNode* plist = ListInit();
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);

	
	ListPopBack(plist);
	//ListPrint(plist);
	//ListPushFront(plist, 1);
	//ListPushFront(plist, 2);
	//ListPushFront(plist, 3);
	//ListPushFront(plist, 4);
	//ListPushFront(plist, 5);
	//ListPopBack(plist);
	//ListPushFront(plist, 6);

	ListPopFront(plist);
	//ListPopFront(plist);
	//ListPopFront(plist);
	//ListPopFront(plist);
	//ListPopFront(plist);
	//ListPopFront(plist);
	//ListPopFront(plist);
	////ListPopFront(plist);
	ListPrint(plist);

	return 0;
}
