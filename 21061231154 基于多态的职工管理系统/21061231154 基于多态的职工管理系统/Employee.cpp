#include "Employee.h"

Employee::Employee(int ID,string Name,int dId)
{
	this->m_Id = ID;
	this->m_Name = Name;
	this->m_DeptId = dId;
}

void Employee::ShowInfo()
{
	cout << "ְ�����: " << this->m_Id
		<< "\tְ������: " << this->m_Name
		<< "\tְ������: " << this->GetDeptName()
		<< "\t��λְ��: ��ɾ�����������" << endl;
}

string Employee::GetDeptName()
{
	return string("Ա��");
}