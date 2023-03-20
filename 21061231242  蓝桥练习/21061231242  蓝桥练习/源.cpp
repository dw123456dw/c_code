#include <iostream>
using namespace std;
#include <vector>

void fun(vector<vector<int>> arr,int n,int m)
{
	vector<vector<int>> copyarr(n, vector<int>(n));
	vector<vector<int>> output(n, vector<int>(n));

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int a;
			cin >> a;
			copyarr[i][j] = a;
		}
	}

	for (int i=0;i<n;i++)
	{

	}
}

int main()
{
	int m, n;
	cin >> n >> m ;

	vector<vector<int>> temp(n,vector<int>(n));

	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			int a;
			cin >> a;
			temp[i][j] = a;
		}
	}
	return 0;
}



