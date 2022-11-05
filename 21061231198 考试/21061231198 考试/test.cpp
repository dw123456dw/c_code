using namespace std;
#include <iostream>
int t() {
	static int i;
	i += 5;
	return i;
}
#define AA 10

#define M(a,b,c) a*b-c
#define D(x) x * x

void test1()
{
	/*cout << D(1 + 2) * AA;*/
	//int a = 1, b = 2, c = 3, d = 4;
	//cout << (b < a ? a : c < d ? c : d )<< endl;
	//int n = 'm';
	//switch (n++) {
	//default: cout << "error"; break;
	//case 'k':case 'K':case 'l':case 'L':cout << "good" << endl; break;
	//case 'm':case 'M':cout << "pass" << '\t';
	//case 'n':case 'N':cout << "warn" << endl;
	//}
	//for (int i = 1, sum = 0; i < 5; i++) {
	//	if (!(i % 3))
	//		continue;
	//	sum += i;
	//	cout << sum;
	//}
	//for (int k = 43210; k = k / 10; cout << k % 10);
	//cout << M(2 + 3, 2 + 3, 4);
	//int a = 5;
	//a -= a += a * a;
	//cout << a;
	//int x, y;
	//x = 3;
	//do {
	//	y = x--;
	//	if (!y) { cout << '#'; continue; }
	//	cout << '#';
	//} while ((x = 1) || (x = 2));
}

void test(int, char = '*', int = 7);

//int main(void) {
//	//cout << t() << '\t';
//	//cout << t() << '\n';
//
//	//unsigned int i = 2;
//
//
//	//int j = -3;
//
//	//test(5);
//	//cout << (i * j) << endl;
//	test1();
//	return 0;
//
//#include <iostream>
//int f(int Int)
//{
//	if (Int == 0) return 1;
//	return (Int + f(Int - 1));
//}
//int main()
//{
//	int inT = 9;
//	cout << "result=" << f(inT) << '\n';
//	return 0;
//}
#include <vector>
#include <algorithm>
#include <map>
void countnum(vector<int>& ret)
{
	sort(ret.begin(),ret.end());
	int count = 1;
	vector<int> appear;
	multimap<int, int> out;

	for (int i=0;i<ret.size()-1;i++)
	{
		if (ret[i+1]==ret[i])
		{
			count++;
		}
		else
		{
			out.insert(make_pair(ret[i],count));   //把值和出现次数加入结果
			appear.push_back(count);
			if (i == ret.size()-2)
			{
				out.insert(make_pair(ret[i+1], 1));
				appear.push_back(1);
			}
			count = 1;
		}
	}
	 
	for (multimap<int,int>::iterator it=out.begin();it!=out.end();it++)    //输出
	{
		cout << it->first << ":" << it->second << endl;
	}
}
class Complex
{
public:
	Complex()  //初始化
	{
		this->m_real = 0;
		this->m_image = 0;
	}
	void print()
	{
		cout << "实部: " << this->m_real << "虚部: " << this->m_image << endl;
	
	}
	int abs()
	{
		return sqrt(pow(this->m_real, 2)) + sqrt(pow(this->m_image,2));;
	}
	Complex& operator+(Complex& temp)
	{
		this->m_image += temp.m_image;
		this->m_real += temp.m_real;
		return *this;
	}

	Complex& operator-(Complex& temp)
	{
		this->m_image -= temp.m_image;
		this->m_real -= temp.m_real;

		return *this;
	}


private:
	int m_image;
	int m_real;
};






int main()
{
	double num1;
	double num2;



	return 0;
}