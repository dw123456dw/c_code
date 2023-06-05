#include <iostream>
using namespace std;
#include <vector>
#include <string>
#define N 100

int n , m;             //n线程数,m资源种类

int Avaliable[N];      //可用资源
int Maxrequest[N][N];  //最大需求
int Allication[N][N];  //已经分配资源
int Need[N][N];        //需求矩阵

bool finish[N];

bool check(int s)
{
	for (int i=0;i<m;i++)
	{
		if (Need[s][i]>Avaliable[i])
		{
			return false;
		}
	}
	return true;
}

int main()
{
	cout << "输入几个线程以及多少种资源" << endl;
	cin >> n >> m;

	cout << "输入每种资源数量" << endl;
	for (int i=0;i<m;i++)    //输入每种资源数量
	{
		cout << "输入第" << i + 1 << "种资源数量" << endl;
		cin >> Avaliable[i];
	}
	cout << "输入每个线程需要的各类资源需求量" << endl;
	for (int i=0;i<n;i++)     //输入最大需求
	{
		for (int j=0;j<m;j++)
		{
			cin >> Maxrequest[i][j];
		}
	}
	cout << "输入每个线程已经获得的各类资源数量" << endl;
	for (int i = 0;i < n;i++)     //输入已有资源数量,并求需求矩阵
	{
		for (int j = 0;j < m;j++)
		{
			cin >> Allication[i][j];
			Need[i][j] = Maxrequest[i][j] - Allication[i][j];
		}
	}
	vector<int> ans;

	for (int i =0;i < n ;i++)
	{
		bool flag = false;
		for (int j=0;j<n;j++)
		{
			if (!finish[i] && check(i))
			{
				flag = true;
				finish[i] = true;
				ans.push_back(i);
				for (int k=0;k<m;k++)
				{
					Avaliable[j] += Allication[j][k];
				}
			}
		}
		if (!flag)
		{
			break;
		}
	}

	if (n==ans.size())
	{
		cout << "存在安全序列" << endl;
		for (int i=0;i<ans.size();i++)
		{
			cout << ans[i];
			if (i!=ans.size())
			{
				cout << "->";
			}
		}
		cout << endl;
	}
	else
	{
		cout << "不存在安全序列" << endl;
	}
	return 0;
}