#include <iostream>
using namespace std;
int arr[30][30];
#include <vector>
vector<int> ret;
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> arr[i][j];
		}
	}
	for (int i = 1; i <=1; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (arr[i][j] == 1)
			{
				ret.push_back(j);
			}
		}
	}
	for (int i = 0; i < ret.size(); i++)
	{
		cout << ret[i] << " ";
	}
	return 0;
}