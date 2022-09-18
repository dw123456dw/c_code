#pragma once
#include <iostream>
using namespace std;
#include <string>


class Worker
{
public:
	//显示职工信息
	virtual void ShowInfo() = 0;
	//获取部门名称
	virtual string GetDeptName() = 0;


	int m_Id;
	string m_Name;
	int m_DeptId;
};