#include <iostream>
using namespace std;
#include <vector>   
int dp[5][5];
int minFallingPathSum(vector<vector<int>>& matrix) {


    for (int i = 0;i < matrix.size();i++)
    {
        dp[i][0] = 101;
        dp[i][matrix[0].size() + 1] = 101;
        dp[0][i + 1] = matrix[0][i];
    }

    for (int i = 1;i < matrix.size();i++)
    {
        for (int j = 1;j <= matrix[0].size();j++)
        {
            dp[i][j] = min(dp[i - 1][j], min(dp[i - 1][j + 1], dp[i - 1][j - 1])) + matrix[i][j-1];
        }
    }

    int m = INT_MAX;
    for (int i = 1;i <= matrix.size();i++)
    {
        if (dp[matrix.size()-1][i] < m)
        {
            m = dp[matrix.size()-1][i];
        }
    }
    return m;
}

int main()
{
    vector<vector<int>> arr(2,vector<int>(2));
    arr[0] = {17,82};
    arr[1] = {1,-44};
    cout << minFallingPathSum(arr);
    return 0;
}