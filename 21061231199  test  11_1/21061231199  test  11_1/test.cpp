#include <iostream>
using namespace std;
#include <vector>



int myAtoi(string s) {
    int cur = 0;
    bool flag = true;
    vector<int> ret;

    while (s[cur] != '\0')
    {
        if (s[cur] == ' ')   //1
        {
            cur++;
        }

        if (s[cur] == '-')     //2
        {
            flag = false;
            cur++;
        }

        if ((s[cur] >= 65 && s[cur] <= 90) || (s[cur] >= 97 && s[cur] <= 122))      //3
        {
            cur++;
        }

        if (s[cur] >= 48 && s[cur] <= 57)         //4
        {
            ret.push_back(s[cur]-'0');
            cur++;

            if (s[cur] < 48 || s[cur]>57)       //非数字退出
            {
                break;
            }
        }
    }

    //把数组转换为整数
    int sum = 0;
    int pos = ret.size() - 1;
    int x = 1;
    for (; pos >= 0; pos--)
    {
        if (sum > INT_MAX)
        {
            sum = INT_MAX;
            break;
        }
        else if (sum < INT_MIN)
        {
            sum = INT_MIN;
            break;
        }
        if (ret[pos]<'0'||ret[pos]>'9')
        {
            break;
        }


        sum += ret[pos] * x;
        x *= 10;
    }
    if (flag)
    {
        return sum;
    }
    return -sum;
}








int main()
{
    int ret = myAtoi("43");
    cout << ret;
	return 0;
}