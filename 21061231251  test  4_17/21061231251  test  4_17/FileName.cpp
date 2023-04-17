//#include <iostream>
//using namespace std;
//
//
//int main()
//{
//    int k;
//    cin >> k;
//    int i = 0;
//    int sum = 0;
//    for (i = 1;sum < k;i++)
//    {
//        sum += 1 / i;
//    }
//
//    cout << i;
//    return 0;
//}


#include <iostream>
using namespace std;

int arr[10010] = { 0 };

int main()
{
    int tree, m;
    cin >> tree >> m;

    for (int i = 0;i < m;i++)
    {
        int l, r;
        cin >> l >> r;

        for (int j = l;j <= r;j++)
        {
            arr[j] = 1;
        }
    }
    int ans = 0;

    for (int i = 0;i <= tree;i++)
    {
        if (arr[i] == 0)
        {
            ans++;
        }
    }

    cout << ans;
    return 0;
}