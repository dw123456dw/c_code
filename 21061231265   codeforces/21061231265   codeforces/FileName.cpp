#include <iostream>
using namespace std;
#include <string>
#include <vector>
int check(string s)
{
	if (s.size()==1)
	{
		return -1;
	}

	vector<int> dp(s.size()+1,-1);
	dp[0] = 0;
	for (int i=1;i<=s.size();i++)
	{
		for (int j=1;j<s.size();j++)
		{
			if (s[i-1]==s[j-1]) 
			{
				dp[i] = dp[i - 1];
			}
			else
			{
				dp[i] = i+1;
			}
		}
	}
	return dp[s.size()-1];
}
int main()
{
	cout << check("abacaba");
	return 0;
}