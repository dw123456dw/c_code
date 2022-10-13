#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>


class GreatFive
{
public:
	bool operator()(int val)
	{
		return val > 5;
	}
};



int main()
{
	vector<int> v;

	for (int i=0;i<10;i++)
	{
		v.push_back(i);
	}

	vector<int>::iterator pos = find_if(v.begin(),v.end(),GreatFive());

	if (pos==v.end())
	{
		cout << "û�ҵ� " << endl;
	}
	else
	{
		cout << "�ҵ��������ǣ� " << *pos << endl;
	}

	return 0;
}
