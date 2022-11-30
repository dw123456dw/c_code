#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


typedef struct TreeNode
{
	int data;
	struct TreeNode* ichild;
	struct TreeNode* rchild;
}Lnode;

Lnode* Creatbittree(Lnode* root)
{
	char ch;
	printf("请输入结点的值：");
	ch = getchar();
	getchar();//fflush(stdin);
	if (ch == ' ')
		return NULL;
	else
	{
		root = (Lnode*)malloc(sizeof(Lnode));
		if (root == NULL)
			printf("内存已满，节点申请空间失败！\n");
		else {
			root->data = ch;
			root->ichild = Creatbittree(root->ichild);
			root->rchild = Creatbittree(root->rchild);
		}
	}
}

void PreOrder(Lnode* root) {
	if (root == NULL)
		return;
	else
	{
		printf("%3c", root->data);
		PreOrder(root->ichild);
		PreOrder(root->rchild);
	}
}

Lnode* CreatTre(Lnode* root)
{
	char ch;
	printf("请输入值");
	scanf("%c",&ch);

	if (ch==' ')
	{
		return NULL;
	}
	else
	{
		Lnode* temp = (Lnode*)malloc(sizeof(Lnode));

	}


	


}



int main()
{
	Lnode* root = NULL;
	root = Creatbittree(root);
	PreOrder(root);
	return 0;
}

