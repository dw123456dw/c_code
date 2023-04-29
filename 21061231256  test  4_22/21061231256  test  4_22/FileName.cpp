#include <iostream>
using namespace std;

bool check(string s, int i, int j)
{
    while (i<=j)
    {
        if (s[i++] != s[j--])
        {
            return false;
        }
    }
    return true;
}

int countSubstrings(string s) {
    int ans = 0;
    for (int i = 0;i < s.size();i++)
    {
        for (int j = i;j < s.size();j++)
        {
            if (check(s, i, j))
            {
                ans++;
            }
        }
    }
    return ans;
}

int main()
{
    string s = "abc";

    cout << countSubstrings(s);
    return 0;
}