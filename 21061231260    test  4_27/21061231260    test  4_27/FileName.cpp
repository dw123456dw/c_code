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
//    //dp[i][j]��ʾ��ǰi����Ʒѡj����µ�����ֵ
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
int v[MAXN];    // ��� 
int w[MAXN];    // ��ֵ 
int f[MAXN][MAXN];  // f[i][j], j�����ǰi����Ʒ������ֵ 

int main()
{
    int n;
    int m;  // ������� 
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> v[i] >> w[i];

    for (int i = 1; i <= n; i++)
        for (int j = 0; j <= m; j++)
        {
            int amount = j / v[i];  // j���ʱ��Ʒ�����ѡ�Ĵ���    
            for (int k = 0; k <= amount; k++) // ö��ѡ���i����Ʒ�ĸ���
                f[i][j] = max(f[i][j], f[i - 1][j - k * v[i]] + k * w[i]);   // ״̬ת�Ʒ���
        }

    cout << f[n][m] << endl;
    return 0;
}