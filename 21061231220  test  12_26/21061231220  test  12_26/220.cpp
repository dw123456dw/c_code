//#include <iostream>
//using namespace std;
//int main()
//{
//
//	int t;
//	cin >> t;
//
//	int minute, second, hour;
//
//	hour = t / 3600;
//	minute = (t/60)%60;
//	second = t % 60;
//	cout << hour << ":" << minute << ":" << second;
//	return 0;
//}
#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	int i = 2;
	for (int n = a; n <= b; n++)
	{
		int temp = n;
		cout << temp << "=";
		do {
			while (temp % i == 0) {
				cout << i;
				temp/= i;
				if (temp != 1) cout << "*";
			}
			i++;
		} while (temp != 1);
		cout << endl;
		i = 2;
	}
	return 0;
}