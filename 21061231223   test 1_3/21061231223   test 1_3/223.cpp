#include <iostream>
using namespace std;
#include <string>
#include <string.h>


bool areNumbersAscending(string s) {
    int a = 0;
    int pre = 0,next=0;
    string temp = "";
    while (pre<s.size())
    {
        if (s[pre]>='0' && s[pre]<='9')
        {
            int b = a;
            next = pre;
            while(s[next+1]>='0' && s[next+1]<='9')
            {
                next++;
            }
            temp = s.substr(pre);
            a = atoi(temp.c_str());
            while (next-pre>0)
            {
                pre++;
            }
            if (b>=a)
            {
                return false;
            }
        }
        pre++;
    }
    return true;
}
int main()
{
	string s = "hello world 5 x 5";
    bool x= areNumbersAscending(s);
    cout << x;
	return 0;
}