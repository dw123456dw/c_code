#include <iostream>
using namespace std;
#include <vector>

void test()
{
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	vector<int> v4;
	vector<int> v5;

	vector<vector<int>> vs;


	for (int i = 0; i < 5; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 1);
		v3.push_back(i + 2);
		v4.push_back(i + 3);
		v5.push_back(i + 4);
	}

	vs.push_back(v1);
	vs.push_back(v2);
	vs.push_back(v3);
	vs.push_back(v4);
	vs.push_back(v5);

	for (vector<vector<int>>::iterator it = vs.begin(); it != vs.end(); it++)
	{
		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++)
		{
			cout << *vit << " ";
		}
		cout << endl;
	}

}


void test1()
{
	//lambda���ʽ
	int i = 20;
	//auto fun = [](int i) {cout << i << endl; };
	auto fun = [&i]
	{	
		i = 200;
		cout << i <<endl; 
	};
	fun();

	//  ������� =   ��ʾ������ֵ�����и���������ı�������this
	//  ������� =   ��ʾ�������������и���������ı�������this
	//  �������this    ��ʾ����this
}






int main()
{
	//test();
	test1();

	return 0;
}