#include <iostream>
using namespace std;
#include <vector>
#include <string>
#define N 100

int n , m;             //n�߳���,m��Դ����

int Avaliable[N];      //������Դ
int Maxrequest[N][N];  //�������
int Allication[N][N];  //�Ѿ�������Դ
int Need[N][N];        //�������

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
	cout << "���뼸���߳��Լ���������Դ" << endl;
	cin >> n >> m;

	cout << "����ÿ����Դ����" << endl;
	for (int i=0;i<m;i++)    //����ÿ����Դ����
	{
		cout << "�����" << i + 1 << "����Դ����" << endl;
		cin >> Avaliable[i];
	}
	cout << "����ÿ���߳���Ҫ�ĸ�����Դ������" << endl;
	for (int i=0;i<n;i++)     //�����������
	{
		for (int j=0;j<m;j++)
		{
			cin >> Maxrequest[i][j];
		}
	}
	cout << "����ÿ���߳��Ѿ���õĸ�����Դ����" << endl;
	for (int i = 0;i < n;i++)     //����������Դ����,�����������
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
		cout << "���ڰ�ȫ����" << endl;
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
		cout << "�����ڰ�ȫ����" << endl;
	}
	return 0;
}