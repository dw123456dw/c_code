#include <iostream>
using namespace std;



int rearrangeCharacters(string s, string target) {
    int hash[26];

    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a']++;
    }

    int pos = 0, ans = 0;

    while (hash[target[pos] - 'a'] != 0)
    {
        while (pos < target.size())
        {
            if (hash[target[pos] - 'a'] == 0)
            {
                break;
            }
            hash[target[pos++] - 'a']--;
        }
        pos = 0;
        ans++;
    }
    return ans;
}


int main()
{
    string s = "ilovecodingonleetcode";
    string a = "code";
    int ans = rearrangeCharacters(s,a);
    cout << ans;

    return 0;
}