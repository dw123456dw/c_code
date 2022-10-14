#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

class MyCompare
{
public:
	bool operator()(int val1,int val2)
	{
		return val1 > val2;
	}
};




int main()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(80);
	v.push_back(20);
	v.push_back(40);
	v.push_back(60);
	v.push_back(30);

	sort(v.begin(),v.end());

	for (vector<int>::iterator it=v.begin();it!=v.end();it++)
	{
		cout << *it << " ";
	}

	cout << endl;
	cout << "------------------" << endl;


	sort(v.begin(),v.end(),MyCompare());

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	return 0;
}

