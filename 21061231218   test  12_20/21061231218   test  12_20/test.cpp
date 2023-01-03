//#include <iostream>
//using namespace std;
//#include <vector>
//
//vector<int> findDisappearedNumbers(vector<int>& nums) {
//    int n = nums.size();
//    vector<int> ret;
//    vector<int> hash(n + 1, 0);
//    for (int i = 0; i < n; i++)
//    {
//        hash[nums[i]]++;
//    }
//
//    for (int i = 1; i <= n; i++)
//    {
//        if (hash[i] == 0)
//        {
//            ret.push_back(i);
//        }
//    }
//    return ret;
//}
//
//
//int main()
//{
//    //4,3,2,7,8,2,3,1
//    vector<int> a;
//    a.push_back(4);
//    a.push_back(3);
//    a.push_back(2);
//    a.push_back(7);
//    a.push_back(8);
//    a.push_back(2);
//    a.push_back(4);
//    a.push_back(1);
//
//    vector<int> b = findDisappearedNumbers(a);
//	return 0;
//}

#include <iostream>
using namespace std;
#include <string>
#include <vector>

int main()
{
	string s = "0ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int n;
	cin >> n;
	vector<string> dp(30);
	dp[1] = "A";

	for (int i = 2; i <= 26; i++)
	{
		dp[i] = dp[i - 1] + s[i] + dp[i - 1];
	}

	cout << dp[n];
	return 0;
}