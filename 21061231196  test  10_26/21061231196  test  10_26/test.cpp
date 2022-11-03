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
		cout << "ѧ��ע���: " << this->m_Num << "����: " << this->m_Name
			<< "��ѧ�ɼ�: " << this->m_Math << "����ɼ�: " << this->m_English << "������ɼ�: " << this->m_Computer << endl;
	}
	void setData()
	{
		cout << "������ѧ������: " << endl;
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
	cout << "��������ӵ�ѧ������: " << endl;
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
	cout << "��������ܳɼ�ѧ����Ϣ��: " << endl;
	myclass[pos].display();
	max = 0;
	for (int i=0;i<n;i++)
	{
		max += myclass[i].math();
	}
	cout << "������ѧƽ������: " << max / n << endl;

	max = 0;
	for (int i = 0; i < n; i++)
	{
		max += myclass[i].english();
	}
	cout << "����Ӣ��ƽ������: " << max / n << endl;

	max = 0;
	for (int i = 0; i < n; i++)
	{
		max += myclass[i].computer();
	}
	cout << "��������ƽ������: " << max / n << endl;
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
	cout << "ʵ��: " << temp.m_image << "�鲿: " << temp.m_real << endl;
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