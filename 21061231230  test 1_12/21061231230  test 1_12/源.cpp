#include <iostream>
using namespace std;
#include <vector>


string evaluate(string s, vector<vector<string>>& knowledge) {
    int pos = 0, cur = 0, flag = 0;
    string temp = "";
    while (s.find(')')!=-1)
    {
        pos = s.find('(');
        cur = s.find(')');
        temp = s.substr(pos + 1, cur-pos-1);

        for (int i = 0; i < knowledge.size(); i++)
        {
            if (knowledge[i][0] == temp)
            {
                temp = knowledge[i][1];
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            s.replace(pos, cur-pos+1, "?");
        }
        else
        {
            s.replace(pos, cur-pos + 1, temp);
        }
        temp.clear();
        flag = 0;
    }
    return s;
}


int main()
{
    string s = "(z)h";
    vector<vector<string>> a = {};
    string x = evaluate(s,a);
    cout << x;
	return 0;
}