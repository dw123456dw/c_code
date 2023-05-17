#include <iostream>
using namespace std;


bool isValid(string s) {
    int n = s.size();
    while (n >= 3)
    {
        int pos = s.find("abc");
        if (pos != -1)
        {
            s.replace(pos, 3,"");
            n -= 3;
        }
        else
        {
            return false;
        }
    }
    return s == "";
}

int main()
{
    isValid("aabcbc");

    return 0;
}