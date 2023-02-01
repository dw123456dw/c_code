#include <iostream>
using namespace std;
#include <unordered_map>
#include <map>
#include <unordered_set>
bool strongPasswordCheckerII(string password) {
    if (password.size() < 8)
    {
        return false;
    }
    string s = "!@#$%^&*()-+";
    bool isbig = false, issmall = false, isnum = false, isspec = false, islian = true;

    for (int i = 0; i < password.size(); i++)
    {
        if (password[i] >= 65 && password[i] <= 90)
            isbig = true;
        if (password[i] >= 97 && password[i] <= 122)
            issmall = true;
        if (i > 0 && password[i] == password[i - 1])
            islian = false;
        if (password[i] >= '0' && password[i] <= '9')
            isnum = true;
        if (s.find(password[i])!=-1)
            isspec = true;
    }
    return (isbig && islian && isnum && issmall && isspec);
}


int main()
{
    //string a = "IloveLe3tcode!";
    //strongPasswordCheckerII(a);
    //cout << a.find('!');
    unordered_map<int, unordered_set<int>> ans;
    ans[0].insert(1);
    ans[0].insert(3);
    ans[0].insert(2);
    cout << ans[0].size();
    return 0;
}