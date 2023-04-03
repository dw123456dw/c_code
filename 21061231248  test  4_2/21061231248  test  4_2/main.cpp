#include <iostream>
using namespace std;
#include <string>
#include <stdio.h>
int main()
{
	// 请在此输入您的代码
	string month[13] = { "","Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec" };

	int m, d;
	cin >> m >> d;
	cout << month[m];
	printf("%02d", d);
	return 0;
}