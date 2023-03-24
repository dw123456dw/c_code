#include <iostream>
using namespace std;
#include <vector>
int main()
{
    // 请在此输入您的代码
    int n, m;
    cin >> n >> m;

    vector<vector<int>> arr(n,vector<int>(m)); 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    vector<vector<int>> ans(n, vector<int>(m));
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 1)
            {
                ans[i][j] = 9;
            }
            else
            {
                count = 0;
                if (arr[i - 1][j - 1] == 1) count++;
                if (arr[i - 1][j - 1] == 1) count++;
                if (arr[i - 1][j + 1] == 1) count++;
                if (arr[i][j - 1] == 1) count++;
                if (arr[i - 1][j - 1] == 1) count++;
                if (arr[i - 1][j - 1] == 1) count++;
                if (arr[i - 1][j - 1] == 1) count++;
                if (arr[i - 1][j + 1] == 1) count++;
                ans[i][j] = count;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}