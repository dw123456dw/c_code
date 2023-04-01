#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int main()
{
    // 请在此输入您的代码
    vector<int> arr;

    int n;
    cin >> n;

    int pos = 0;

    while (scanf_s("%d", &arr[pos++]) != EOF)
    {
        ;
    }

    sort(arr.begin(), arr.end());

    int a = 0, b = 0;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] - arr[i - 1] == 2)
        {
            a = arr[i] + 1;
        }

        if (arr[i] == arr[i - 1])
        {
            b = arr[i];
        }
    }
    cout << a << " " << b;
    return 0;
}