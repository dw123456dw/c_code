#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
vector<int> a(100);
vector<int> b(100);
vector<int> c(110,-1);
int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	a.assign(s1.begin(), s1.end());
	b.assign(s2.begin(), s2.end());
	reverse(a.begin(), a.end());
	reverse(b.begin(),b.end());	
	if (a.size()>b.size())
	{
		while (a.size()-b.size()>0)
		{
			b.push_back('0');
		}
	}
	else
	{
		while (b.size()-a.size()>0)
		{
			a.push_back('0');
		}
	}
	int pos = 0, flag = 0;
	for (int i=0;i<a.size();i++)
	{
		c[pos++] = (a[i] - '0' + b[i] - '0'+flag) % 10;
		flag = (a[i] - '0' + b[i] - '0'+flag) / 10;
	}
	if (flag>0)
	{
		c[pos] = flag;
	}
	reverse(c.begin(),c.end());
	for (int i=0;i<c.size();i++)
	{
		if (c[i]!=-1)
		{
			cout << c[i];
		}
	}
	return 0;
}