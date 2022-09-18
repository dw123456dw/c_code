#include "Manager.h"

//构造函数
Manager::Manager(int ID, string Name, int dId)
{
	this->m_Id = ID;
	this->m_Name = Name;
	this->m_DeptId = dId;
}
//显示职工信息
void Manager::ShowInfo()
{
	cout << "职工编号: " << this->m_Id
		<< "\t职工姓名: " << this->m_Name
		<< "\t职工部门: " << this->GetDeptName()
		<< "\t岗位职责: 完成老板的任务，下发工作给员工" << endl;
}
//获取部门名称
string Manager::GetDeptName()
{
	return string("经理");
}