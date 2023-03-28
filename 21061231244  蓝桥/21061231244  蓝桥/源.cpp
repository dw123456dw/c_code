#include <iostream>
#include <stdio.h>
using namespace std;

long long arr[1000000] = { 0 };

int sum(int n)
{
    int x = 0;
    while (n)
    {
        x = x + n % 10;
        n /= 10;
    }
    return x;
}

int main()
{
    // 请在此输入您的代码
    int n, m;
    cin >> n >> m;
    int pos = 0;
    int temp = 0;
    for (int i = 1; i <= 54; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            temp = sum(j);
            if (temp == i)
            {
                arr[pos++] = temp;
            }
            temp = 0;
        }
    }

    printf("%ld", arr[m]);
    return 0;
}
//#include <stdio.h>
//
//long long a[1000000] = { 0 };
//
//int sum(int n) {
//    int t = 0;
//    while (n) {
//        t = t + n % 10;                    //计算位数之和 
//        n /= 10;
//    }
//    return t;
//}
//
//int main()
//{
//    int n, m, l = 0, g = 0;
//    scanf_s("%d%d", &n, &m);
//    for (int i = 1; i <= 54; i++) {        //最大位数之和为6*9 
//        for (int k = 1; k <= n; k++) {
//            l = sum(k);
//            if (l == i) {                    //开始从小到大排序 
//                a[g++] = k;
//            }
//            l = 0;
//        }
//    }
//    printf("%ld", a[m - 1]);
//    return 0;
//}