#include <iostream>
using namespace std;
#include <stack>
#include <algorithm>

void check(string& s)
{
	//for (int i=1;i<=s.size();i++)
	//{
	//	if (s[i] == s[i - 1])
	//	{
	//		int a = i;
	//		while (s[a]==s[a-1])
	//		{
	//			s.erase(s.begin() + a);
	//			a++;
	//		}
	//	}
	//}
	stack<char> st;
	st.push(s[0]);

	for (int i=1;i<s.size();i++)
	{
		if (s[i]!=st.top())
		{
			st.push(s[i]);
		}
	}

	string a = "";
	while (!st.empty())
	{
		a += st.top();
		st.pop();
	}

	reverse(a.begin(),a.end());
	cout << a;
}


int main()
{
	//string s = "AABBBCDDCLLLLLJJJJIIUYGGGGG";
	//check(s);


	return 0;
}