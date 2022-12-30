//#include <iostream>
//using namespace std;
//#include <vector>
//template <typename T>
//T searchmax(vector<T>& arr, int n)
//{
//	T max = arr[0];
//	for (int i=1;i<n;i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	return max;
//}
//int main()
//{
//	double d;
//	vector<double> ret;
//
//	for (int i = 0; i < 5; i++)
//	{
//		cin >> d;
//		ret.push_back(d);
//	}
//	d = searchmax(ret, 5);
//	cout << d;
//	return 0;
//}
//#include <iostream>
//​using namespace std;
//class Complex {
//private:
//    double real;
//    double image;
//public:
//    Complex() {}
//    Complex(double a, double b) {
//        real = a;
//        image = b;
//    }
//    void setRI(double a, double b) {
//        real = a;
//        image = b;
//    }
//    double getReal() {
//        return real;
//    }
//    double getImage() {
//        return image;
//    }
//    void print() {
//        if (image > 1)
//            cout << real << "+" << image << "i" << endl;
//        if (image < 1)
//            cout << real << "" << image << "i" << endl;
//    }
//    friend Complex add(Complex, Complex);
//};
//Complex add(Complex c1, Complex c2) {
//    Complex c3;
//    c3.real = c1.real + c2.real;
//    c3.image = c1.image + c2.image;
//    return c3;
//}
//int main()
//{
//    Complex c1(19,-0.86),c2,c3;
//    c2.setRI(90,120.12);
//    c3 = add(c1,c2);
//    cout << "复数一：";
//    c1.print();
//    cout << "复数二：";
//    c2.print();
//    cout << "相加后：";
//    c3.print();
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int arr[5] = { 0 };
//	int pos = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		int temp = i;
//		while (temp)
//		{
//			arr[pos++] = temp % 2;
//			temp /= 2;
//		}
//		pos = 0;
//		for (int j = 4; j >= 0; j--)
//		{
//			cout << arr[j];
//		}
//		cout << endl;
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//long long arr[100000010];
//
//int main()
//{
//	int n;
//	cin >> n;
//	if (n == 0)
//	{
//		cout << 0;
//		return 0;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		arr[i] = arr[i - 1] + i+1;
//	}
//
//	cout << arr[n-1]+1;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//int main()
//{
//    // 请在此输入您的代码
//    int n;
//    cin >> n;
//    vector<int> ret(n);
//
//    for (int i = 0; i < n; i++)
//    {
//        cin >> ret[i];
//    }
//
//    sort(ret.begin(), ret.end());
//
//    int a = ret[1] - ret[0];
//    int ans = ret[n-1] / a;
//    cout << ans;
//    return 0;
//}

//75BCD15
#include <iostream>
using namespace std;
#include <string>
#include <cmath>
int main()
{
	string s;
	cin >> s;
	long long ans = 0;
	int n = s.size() - 1;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'A')
		{
			ans += 10 * pow(16,n--);
		}
		else if (s[i] == 'B')
		{
			ans += 11 * pow(16, n--);
		}
		else if (s[i] == 'C')
		{
			ans += 12 * pow(16, n--);
		}
		else if (s[i] == 'D')
		{
			ans += 13 * pow(16, n--);
		}
		else if (s[i] == 'E')
		{
			ans += 14 * pow(16, n--);
		}
		else if (s[i] == 'F')
		{
			ans += 15 * pow(16, n--);
		}
		else
		{
			ans += (s[i]-'0') * pow(16, n--);
		}
	}
	cout << ans;
	return 0;
}