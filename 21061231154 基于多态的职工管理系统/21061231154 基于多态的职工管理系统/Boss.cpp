#include "Boss.h"

Boss::Boss(int ID, string Name, int dId)
{
	this->m_Id = ID;
	this->m_Name = Name;
	this->m_DeptId = dId;
}

void Boss::ShowInfo()
{
	cout << "ְ�����: " << this->m_Id
		<< "\tְ������: " << this->m_Name
		<< "\tְ������: " << this->GetDeptName()
		<< "\t��λְ��: �·����������" << endl;
}

string Boss::GetDeptName()
{
	return string("�ܲ�");
}