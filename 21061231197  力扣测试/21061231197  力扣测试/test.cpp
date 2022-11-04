#include <iostream>
using namespace std;
#include <vector>
#include <string>


string longestCommonPrefix(vector<string>& strs) 
{
    string ret = "";
    int pos = 0;

    string temp = strs.begin()[pos];
    for (int i = 0; i < strs.size(); i++)
    {
        if (strs[i] != temp)
        {
            break;
        }
        pos++;
        ret += temp;
    }

    return ret;
}


void test1()
{
    vector<string> v;
    v.push_back("flower");
    v.push_back("flow");
    v.push_back("flight");
    longestCommonPrefix(v);

}


int main()
{
	test1();
	return 0;
}