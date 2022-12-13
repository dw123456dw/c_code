//#include <iostream>
//using namespace std;
//#include <string>
//int main()
//{
//    // 请在此输入您的代码
//    //今天一看就是个哈希表嘛
//    string s;
//    cin >> s;
//    int hash[26] = { 0 };
//
//    for (int i = 0; i < s.size(); i++)
//    {
//        hash[s[i] - 'a']++;
//    }
//    int max = 0;
//    int pos = 0;
//
//    for (int i = 0; i < 26; i++)
//    {
//        if (hash[i] > max)
//        {
//            max = hash[i];
//            pos = i;
//        }
//    }
//
//    cout << (char)(pos+'a') << endl;
//    cout << max << endl;
//    return 0;
//}


#include <iostream>
using namespace std;
#include <string>
int main()
{
    // 请在此输入您的代码
    string s;
    int num;
    cin >> s >> num;

    while (num--)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] > s[i + 1])
            {
                s.erase(i, 1);
                break;
            }
        }

    }


    cout << s;
    return 0;
}