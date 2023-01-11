#include <iostream>
using namespace std;
#include <vector>

int reinitializePermutation(int n) {
    vector<int> arr(n);
    vector<int> temp(n);
    vector<int> a(n);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        arr[i] = i;
        a[i] = i;
    }

    while (!equal(arr.begin(), arr.end(), temp.begin(), temp.end()))
    {
        for (int j = 0; j < n; j++)
        {
            if (j % 2 == 0)
            {
                temp[j] = a[j / 2];
            }
            if (j % 2 == 1)
            {
                temp[j] = a[n / 2 + (j - 1) / 2];
            }
        }

        for (int i = 0; i < n; i++)
        {
            a[i] = temp[i];
        }

        ans++;
    }
    return ans;
}


int main()
{
    cout << reinitializePermutation(20);


    return 0;
}