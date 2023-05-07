//#include <iostream>
//using namespace std;
//#include <vector>
//
//
//int main()
//{
//    int n, v;
//    cin >> n >> v;
//    vector<vector<int>> arr(n+1, vector<int>(2));
//    vector<vector<int>> dp(5, vector<int>(6));
//    //dp[i][j]表示从前i个物品选j体积下的最大价值
//
//    for (int i = 1;i <= n;i++)
//    {
//        for (int j = 0;j < 2;j++)
//        {
//            cin >> arr[i][j];
//        }
//    }
//    for (int i = 1;i <= n;i++)
//    {
//        for (int j = 0;j <= v;j++)
//        {
//            int t = v / arr[i][0];
//            for (int k = 0;k <= t;k++)
//            {
//                dp[i][j] = max(dp[i][j], dp[i - 1][j - k * arr[i-1][0]] + k * arr[i-1][1]);
//            }
//
//        }
//    }
//    cout << dp[n][v];
//    return 0;
//}

#include <iostream>
using namespace std;

using namespace std;

const int MAXN = 10000;
int v[MAXN];    // 体积 
int w[MAXN];    // 价值 
int f[MAXN][MAXN];  // f[i][j], j体积下前i个物品的最大价值 

int main()
{
    int n;
    int m;  // 背包体积 
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> v[i] >> w[i];

    for (int i = 1; i <= n; i++)
        for (int j = 0; j <= m; j++)
        {
            int amount = j / v[i];  // j体积时物品最多能选的次数    
            for (int k = 0; k <= amount; k++) // 枚举选择第i个物品的个数
                f[i][j] = max(f[i][j], f[i - 1][j - k * v[i]] + k * w[i]);   // 状态转移方程
        }

    cout << f[n][m] << endl;
    return 0;
}