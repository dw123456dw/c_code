#include <iostream>
using namespace std;
#include <unordered_set>

int lengthOfLongestSubstring(string s) {
    if (s.size() == 0) return 0;
    unordered_set<char> hash;
    int ans = 0;
    int left = 0;

    for (int i = 0; i < s.size(); i++)
    {
        while (hash.find(s[i]) != hash.end())
        {
            hash.erase(s[left]);
            left++;
        }
        ans = max(ans, i - left + 1);
        hash.insert(s[i]);
    }
    return ans;
}
int main()
{
    string s = "abcabcbb";
    cout << lengthOfLongestSubstring(s);
   
    return 0;
}