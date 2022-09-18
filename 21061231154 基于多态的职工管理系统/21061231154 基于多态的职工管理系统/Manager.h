#pragma once
#include "Work.h"


class Manager :public Worker
{
public:
	//构造函数
	Manager(int ID, string Name, int dId);
	//显示职工信息
	virtual void ShowInfo();
	//获取部门名称
	virtual string GetDeptName();
};
