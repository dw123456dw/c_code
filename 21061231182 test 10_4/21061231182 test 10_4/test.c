#include <stdio.h>


typedef struct tree
{
	int data;
	struct tree* LChild;
	struct tree* RChild;
}BiTree;


void PrintTree(BiTree* bt,int nLayer)
{
	if (bt==NULL)
	{
		return;
	}
	PrintTree(bt->RChild,nLayer+1);
	//for (int i=0;i<nLayer;i++)
	//{
	//	printf(" ");
	//}
	printf("%c\n",bt->data);
	PrintTree(bt->LChild,nLayer+1);
}

void test()
{
	BiTree b6;
	b6.data = 'F';
	b6.LChild =NULL;
	b6.RChild = NULL;

	BiTree b5;
	b5.data = 'E';
	b5.LChild = NULL;
	b5.RChild = &b6;

	BiTree b4;
	b4.data = 'D';
	b4.LChild = NULL;
	b4.RChild = NULL;

	BiTree b3;
	b3.data = 'C';
	b3.LChild = &b5;
	b3.RChild = NULL;

	BiTree b2;
	b2.data = 'B';
	b2.LChild = NULL;
	b2.RChild = &b4;

	BiTree b1;
	b1.data = 'A';
	b1.LChild = &b2;
	b1.RChild = &b3;

	PrintTree(&b1,0);
}


int main()
{
	test();
	return 0;
}


