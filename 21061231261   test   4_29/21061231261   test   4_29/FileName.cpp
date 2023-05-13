#include <iostream>
using namespace std;
#include <vector>
#include <unordered_set>



bool equalFrequency(string word) {
    int hash[26] = { 0 };

    for (int i = 0;i < word.size();i++)
    {
        hash[word[i] - 'a']++;
    }

    unordered_set<int>  s;

    for (int i = 0;i < word.size();i++)
    {
        if (hash[i] != 0)
        {
            s.insert(hash[i]);
        }
    }

    if (s.size() > 2 ||s.size()==1)
    {
        return false;
    }

    vector<int> arr(s.begin(), s.end());

    if (abs(arr[0] - arr[1]) == 1 || abs(arr[0] - arr[1]) == 0)
    {
        return true;
    }
    return true;
}


int  main()
{
    equalFrequency("ab");


    return 0;
}