#include <iostream>
#include <string>
using namespace std;

char repeatedCharacter(string s) {
    int hash[30] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a']++;
        for (int j=0;j<26;j++)
        {
            if (hash[j]==2)
            {
                return (char)(j+'a');
            }
        }
    }
}



int main()
{
    cout << repeatedCharacter("abccbaacz");



    return 0;
}