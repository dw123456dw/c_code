#include "Head.h"





void test()
{
	SeqList s1 = { {1,3,5,7,9,11,13},6 };
	SeqList s2 = { {2,4,6,8,10,12},5 };
	SeqList s3 = { 0 };
    //int ret = SearchSeqList(s,6 );
	//printf("%d",ret);
	//InsertSeqList(&s1,3,4);

	//DelSeqList(&s1,4);

	//int i = 0;
	//for (i=0;i<6;i++)
	//{
	//	printf("%d ",s1.arr[i]);
	//}

	MergeSeqList(&s1,&s2,&s3);

	int i = 0;
	for (i=0;i<13;i++)
	{
		printf("%d ",s3.arr[i]);
	}


}



int main()
{
	test();

	return 0;
}