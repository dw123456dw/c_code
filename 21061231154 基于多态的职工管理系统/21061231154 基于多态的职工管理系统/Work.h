#pragma once
#include <iostream>
using namespace std;
#include <string>


class Worker
{
public:
	//��ʾְ����Ϣ
	virtual void ShowInfo() = 0;
	//��ȡ��������
	virtual string GetDeptName() = 0;


	int m_Id;
	string m_Name;
	int m_DeptId;
};