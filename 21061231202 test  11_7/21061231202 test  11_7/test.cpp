#include <iostream>
using namespace std;
#include <vector>

#define N 4
#define V 5


int main()
{
    //static int N;
    //static int V;
    //cin >> N >> V;

    int value[N+1];
    int voume[N+1];


    for (int i = 1; i <= N; i++)
    {
        cin >> voume[i] >> value[i];
    }

    int dp[N+5][N+5];
    dp[0][0] = 0;

    for (int i = 1; i < N; i++)
    {
        for (int j = 1; j < V; j++)
        {
            if (j - voume[i] < 0)
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - voume[i]] + value[i]);
            }
        }
    }


    cout << dp[N][V];
    return 0;
}