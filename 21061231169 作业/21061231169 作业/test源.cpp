#include <iostream>
using namespace std;
#include <vector>

void Add(vector<int> v)
{
	int size = v.size();
	vector<int>::iterator end = v.end()-1;
	if (size%2==0)
	{
		for (vector<int>::iterator it=v.begin();it!=v.end()-1;it++)
		{
			cout << *it << "+" << (*it) + 1 << "=" << (*it) + (*it) + 1 << endl;
		}
	}
	else
	{
		cout << "最后一个元素没有参与运算其值是:  " << *end << endl;
		for (vector<int>::iterator it=v.begin();it!=v.end()-1;it++,end--)
		{
			if (it==end)
			{
				return;
			}
			cout << *it << "+" << *end << "=" << (*it) + (*end) << endl;
		}
	}
}


int main()
{
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	v1.push_back(5);
	v1.push_back(6);
	Add(v1);
	return 0;
}

