#include <iostream>
using namespace std;
#include <vector>

string convert(string s, int numRows) {
    string ans = "";
    int pos = 0,x=0,a=0;
    vector<string> temp(numRows);

    while (x < s.size())
    {
        while (pos < numRows && x<s.size())
        {
            temp[pos].push_back(s[x++]);
            if (pos == numRows - 1)
            {
                a = pos;
            }
            pos++;
        }
        while (a>0 && x<s.size())
        {
            temp[--a].push_back(s[x++]);
        }
        pos = a+1;
    }
    for (int i = 0; i < numRows; i++)
    {
        ans += temp[i];
    }
    return ans;
}

int main()
{
    //string s = "PAYPALISHIRING";
    //string ret = convert("AB", 1);
    //cout << ret;
    vector<int> a = { 0 };
    vector<int> b = {1};
    cout << equal(a.begin(),a.end(),b.begin(),b.end());

    return 0;
}