//#include <iostream>
//using namespace std;
//#include <vector>
//int minimumDeleteSum(string s1, string s2) {
//    //dp[i][j]表示s1[0,i]和s2[0,j]删除字符相等所需的最小值
//    int m = s1.size();
//    int n = s2.size();
//    vector<vector<int>> dp(m + 1, vector<int>(n + 1));
//
//    //初始化
//    dp[0][0] = 0;
//    //i=0需要删除s2
//    for (int i = 1;i <= n;i++)
//    {
//        dp[0][i] = dp[0][i - 1] + s2[i - 1];
//    }
//    //j=0需要删除s1
//    for (int i = 1;i <= m;i++)
//    {
//        dp[i][0] = dp[i - 1][0] + s1[i - 1];
//    }
//
//    for (int i = 1;i <= m;i++)
//    {
//        for (int j = 1;j <= n;j++)
//        {
//            if (s1[i-1] == s2[j-1])
//            {
//                dp[i][j] = dp[i - 1][j - 1];
//            }
//            else
//            {
//                dp[i][j] = min(dp[i - 1][j] + s1[i - 1], dp[i][j - 1] + s2[j - 1]);
//            }
//        }
//    }
//
//
//    return dp[m ][n ];
//}


//int main()
//{
//    cout << minimumDeleteSum("sea","eat");
//
//
//    return 0;
//}

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
vector<int> cuf;
vector<int> arr;
int main()
{
    int n;
    cin >> n;

    for (int i = 0;i < n;i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }

    for (int i = 1;i <= arr.size();i++)
    {
        cuf.push_back(abs(arr[i] - arr[i - 1]));
    }
    sort(cuf.begin(), cuf.end());

    for (int i = 1;i < n;i++)
    {
        if (i != cuf[i - 1])
        {
            cout << "Not jolly";
            return 0;
        }
    }

    cout << "Jolly";
    return 0;
}