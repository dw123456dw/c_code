//#include <iostream>
//using namespace std;
//#include <vector>
//
//int main()
//{
//    int N;
//    cin >> N;
//
//    int dp[100][100];
//    dp[0][0] = 1;
//    dp[1][1] = 1;
//    dp[1][0] = 1;
//    vector<int> ret;
//    ret.push_back(1);
//    ret.push_back(1);
//    ret.push_back(1);
//
//    for (int i = 2; i < 100; i++)
//    {
//        dp[i][0] = 1;
//        dp[i][i] = 1;
//        for (int j = 0; j <= i; j++)
//        {
//            if (dp[i][j] == 1)
//            {
//                ;
//            }
//            else
//            {
//                dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
//            }
//            ret.push_back(dp[i][j]);
//        }
//    }
//    int ans = 0;
//    for (int i = 0; i < ret.size(); i++)
//    {
//        if (ret[i] == N)
//        {
//            ans = i+1;
//            break;
//        }
//    }
//
//    cout << ans;
//    return 0;
//}



#include <iostream>
using namespace std;
int main()
{
    // 请在此输入您的代码
    int arr[20] = { 0 };
    arr[0] = 1;
    arr[1] = 2;
    int n;
    cin >> n;


    for (int i = 2; i < 20; i++)
    {
        arr[i] = arr[i - 1] * (i + 1);
    }

    cout << arr[n-1];

    return 0;
}