#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <stack>   //ջ
#include <queue>   //����

const int MAXSIZE = 4;
typedef int DataType;

typedef struct
{
	DataType vertex[MAXSIZE];        //һά�����Ŷ�����Ϣ
	int arc[MAXSIZE][MAXSIZE];		 //��ά����������������Ľ���
	int vertexsize, arcsize;         
}MGraph;

void DFS(MGraph& G,int v)
{


}

void test1()
{
	MGraph m;
	for (int i=0;i<MAXSIZE;i++)
	{
		m.vertex[i] = i + 1;
	}
	int arr[4][4] = {0,1,1,0,
					 0,0,0,0,
					 0,0,0,1,
					 1,0,0,0};

	for(int i=0;i<MAXSIZE;i++)
	{
		for (int j=0;j<MAXSIZE;j++)
		{
			m.arc[i][j] = arr[i][j];
		}
	}
	
	m.arcsize = 16;
	m.vertexsize = 4;
}

int main()
{
	test1();
	return 0;
}