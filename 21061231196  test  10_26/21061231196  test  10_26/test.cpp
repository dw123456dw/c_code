#include <iostream>
using namespace std;
#include <string>
#include <ctime>
#include <vector>

class Student
{
public:
	double sum()
	{
		return m_Computer + m_English + m_Math;
	}
	double average()
	{
		return this->sum() / 3;
	}
	void display()
	{
		cout << "学生注册号: " << this->m_Num << "姓名: " << this->m_Name
			<< "数学成绩: " << this->m_Math << "外语成绩: " << this->m_English << "计算机成绩: " << this->m_Computer << endl;
	}
	void setData()
	{
		cout << "请输入学生姓名: " << endl;
		cin >> this->m_Name;
	}
	double math()
	{
		return m_Math;
	}
	double english()
	{
		return m_English;
	}
	double computer()
	{
		return m_Computer;
	}
private:
	int m_Num= rand() % 61;
	string m_Name;
	double m_Math = (rand() % 401+600)/10;
	double m_English=(rand() % 401+600)/10;
	double m_Computer = (rand() % 401+600)/10;
};


void test1()
{
	cout << "请输入添加的学生数量: " << endl;
	int n;
	cin >> n;
	vector<Student> myclass;
	for (int i=0;i<n;i++)
	{
		Student s;
		s.setData();
		myclass.push_back(s);
	}
	double max = 0;
	int pos = 0;
	for (int i=0;i<n-1;i++)
	{
		if (myclass[i].sum()<myclass[i+1].sum())
		{
			max = myclass[i + 1].sum();
			pos = i + 1;
		}
	}
	cout << "本班最高总成绩学生信息是: " << endl;
	myclass[pos].display();
	max = 0;
	for (int i=0;i<n;i++)
	{
		max += myclass[i].math();
	}
	cout << "本班数学平均分是: " << max / n << endl;

	max = 0;
	for (int i = 0; i < n; i++)
	{
		max += myclass[i].english();
	}
	cout << "本班英语平均分是: " << max / n << endl;

	max = 0;
	for (int i = 0; i < n; i++)
	{
		max += myclass[i].computer();
	}
	cout << "本班计算机平均分是: " << max / n << endl;
}
class Complex;


class Complex
{
	friend istream& operator>>(istream& is, Complex& temp);
	friend ostream& operator<<(ostream& os, const Complex& temp);

public:
	Complex(double x=0,double y=0)
	{
		this->m_real = x;
		this->m_image = y;
	}

	Complex& operator=(Complex &temp)
	{
		if (this==&temp)
		{
			return *this;
		}

		this->m_image = temp.m_image;
		this->m_real = temp.m_real;

		return *this;
	}

	Complex& operator+=(Complex& temp)
	{
		Complex c;

		c.m_image = this->m_image + temp.m_image;
		c.m_real = this->m_real + temp.m_real;

		return c;
	}

	bool operator==(Complex& temp)
	{
		if (this->m_image==temp.m_image && this->m_real==temp.m_real)
		{
			return true;
		}
		else
		{
			return false;
		}
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
	double m_real;
	double m_image;
};

istream& operator>>(istream& is, Complex& temp)
{
	is >> temp.m_image >> temp.m_real;
	return is;
}

ostream& operator<<(ostream& os, const Complex& temp)
{
	cout << "实部: " << temp.m_image << "虚部: " << temp.m_real << endl;
	return os;
}

void test2()
{
	Complex c1(1,2);
	Complex c2(4,8);

	Complex c3 = c1 + c2;
	c3 += c1;
	if (c1==c2)
	{
		cin >> c3;
	}
	else
	{
		cout << c3;
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	//test1();
	test2();
	return 0;
}