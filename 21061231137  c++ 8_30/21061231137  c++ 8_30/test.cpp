#include <iostream>
using namespace std;
#include <string>


//����һ����ֵ�����

class CMyString 
{
public:

	
	CMyString(char* pData = NULL);
	CMyString(const CMyString &str);
	~CMyString(void);


private:
	char* m_pData;
};




//  =�������践��һ�����ö��󣬲�Ȼ���ܽ������Ȳ������Ҵ���Ĳ���Ӧ�ñ�Ϊ�������ɱ�

CMyString& CMyString::operator =(const CMyString &str)
{
	if (this == &str)    //ע�⴫��Ķ��������Լ�����Ȼ����ɾ���ڴ�ʱ����ִ�����
	{
		return *this;
	}

	delete []m_pData;    //ɾ���Ⱥ���߶����Լ����ַ����ڴ�
	m_pData = NULL;


	m_pData = new char[strlen(str.m_pData)+1];   //����newһ������Ÿ�ֵ������Ҳ����ݵ��ڴ�
	strcpy(m_pData,str.m_pData);

	return *this;     //����һ������
}



int main()
{
	CMyString c1;



	return 0;
}