#include <iostream>
using namespace std;
#include <stack>
#include <vector>
#include <algorithm>


void print(vector<vector<int>> &ret)
{
	for (vector<vector<int>>::iterator it=ret.begin();it!=ret.end();it++)
	{
	}

}




void test1()
{
	vector<vector<int>> temp;


	for (int i=0;i<10;i++)
	{
		temp.push_back({i,i+10});
	}


	for_each(temp.begin(),temp.end(),print);

}




int main()
{
	test1();
	return 0;
}