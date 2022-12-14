#include <iostream>
using namespace std;
int main()
{
    // 请在此输入您的代码
    //一眼哈希表统计
    int hash[10] = { 0 };

    //2 12 20 21 22
    for (int i = 1; i <= 22; i++)
    {
        int temp = i;
        while (temp)
        {
            int a = temp % 10;
            hash[a]++;
            temp /= 10;
        }
    }

    cout << hash[2] << endl;
    return 0;
}