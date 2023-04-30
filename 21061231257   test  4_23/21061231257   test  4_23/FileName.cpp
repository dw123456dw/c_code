#include <iostream>
using namespace std;
#include <string>
bool check(int n,int m)
{
    string s = to_string(n);
    int a = stoi(s.substr(0, 3));
    int b = stoi(s.substr(1, 3));
    int c = stoi(s.substr(2, 4));
    if (a % m == 0 && b % m == 0 && c % m == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int m;
    cin >> m;

    for (int i = 10000;i <= 30000;i++)
    {
        if (check(i, m))
        {
            cout << i << endl;
        }
    }
    //cout << check(22555,m);
    return 0;
}