#include "Employee.h"

Employee::Employee(int ID,string Name,int dId)
{
	this->m_Id = ID;
	this->m_Name = Name;
	this->m_DeptId = dId;
}

void Employee::ShowInfo()
{
	cout << "职工编号: " << this->m_Id
		<< "\t职工姓名: " << this->m_Name
		<< "\t职工部门: " << this->GetDeptName()
		<< "\t岗位职责: 完成经理交给的任务" << endl;
}

string Employee::GetDeptName()
{
	return string("员工");
}