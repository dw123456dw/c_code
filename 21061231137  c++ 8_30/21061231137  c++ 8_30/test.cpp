#include <iostream>
using namespace std;
#include <string>


//重载一个赋值运算符

class CMyString 
{
public:

	
	CMyString(char* pData = NULL);
	CMyString(const CMyString &str);
	~CMyString(void);


private:
	char* m_pData;
};




//  =的重载需返回一个引用对象，不然不能进行连等操作，且传入的参数应该变为常量不可变

CMyString& CMyString::operator =(const CMyString &str)
{
	if (this == &str)    //注意传入的对象不能是自己，不然下面删除内存时会出现大问题
	{
		return *this;
	}

	delete []m_pData;    //删除等号左边对象自己的字符串内存
	m_pData = NULL;


	m_pData = new char[strlen(str.m_pData)+1];   //重新new一个够存放赋值运算符右侧内容的内存
	strcpy(m_pData,str.m_pData);

	return *this;     //返回一个引用
}



int main()
{
	CMyString c1;



	return 0;
}