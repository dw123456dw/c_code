#include "Boss.h"

Boss::Boss(int ID, string Name, int dId)
{
	this->m_Id = ID;
	this->m_Name = Name;
	this->m_DeptId = dId;
}

void Boss::ShowInfo()
{
	cout << "职工编号: " << this->m_Id
		<< "\t职工姓名: " << this->m_Name
		<< "\t职工部门: " << this->GetDeptName()
		<< "\t岗位职责: 下发任务给经理" << endl;
}

string Boss::GetDeptName()
{
	return string("总裁");
}