#include "Manager.h"

//���캯��
Manager::Manager(int ID, string Name, int dId)
{
	this->m_Id = ID;
	this->m_Name = Name;
	this->m_DeptId = dId;
}
//��ʾְ����Ϣ
void Manager::ShowInfo()
{
	cout << "ְ�����: " << this->m_Id
		<< "\tְ������: " << this->m_Name
		<< "\tְ������: " << this->GetDeptName()
		<< "\t��λְ��: ����ϰ�������·�������Ա��" << endl;
}
//��ȡ��������
string Manager::GetDeptName()
{
	return string("����");
}