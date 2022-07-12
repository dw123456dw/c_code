#include <stdio.h>
#include <stdlib.h>


typedef int TDataType;

typedef struct TreeNode
{
	struct TreeNode* left;
	struct TreeNode* right;
	TDataType data;
}TNode;


//前序遍历
void TreeFront(TNode* root)
{
	if (root==NULL)
	{
		printf("NULL ");
		return;
	}
	printf("%c ", root->data);

	TreeFront(root->left);
	TreeFront(root->right);
}

//中序遍历
void TreeInsert(TNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}

	TreeInsert(root->left);
	printf("%c ", root->data);

	TreeInsert(root->right);
}


//后序遍历
void TreeBack(TNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}

	TreeBack(root->left);

	TreeBack(root->right);
	printf("%c ", root->data);

}




int main()
{
	TNode* A = (TNode*)malloc(sizeof(TNode));
	A->data = 'A';
	A->left = A->right = NULL;

	TNode* B = (TNode*)malloc(sizeof(TNode));
	B->data = 'B';
	B->left = B->right = NULL;

	TNode* C = (TNode*)malloc(sizeof(TNode));
	C->data = 'C';
	C->left = C->right = NULL;

	TNode* D = (TNode*)malloc(sizeof(TNode));
	D->data = 'D';
	D->left = D->right = NULL;

	TNode* E = (TNode*)malloc(sizeof(TNode));
	E->data = 'E';
	E->left = E->right = NULL;

	A->left = B;
	A->right = C;
	B->left = D;
	B->right = E;

	TreeFront(A);
	printf("\n");

	TreeInsert(A);
	printf("\n");

	TreeBack(A);
	printf("\n");
	return 0;
}