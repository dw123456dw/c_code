#include <iostream>
using namespace std;
#include <map>
#include <vector>
#include <string>
#include <map>
#include <ctime>


constexpr int CEHUA = 0;
constexpr int MEISHU = 1;
constexpr int YANFA = 2;

class Worker
{
public:
	string m_Name;
	int m_Salary;
};

void CreatWorker(vector<Worker> &v)
{
	string nameSeed = "ABCDEFGHIJ";
	for (int i=0;i<10;i++)
	{
		Worker worker;
		worker.m_Name = "Ա��";
		worker.m_Name += nameSeed[i];
		worker.m_Salary = rand() % 10000 + 10000;
		v.push_back(worker);
	}
}

void setGroup(vector<Worker> &v,multimap<int,Worker> &m)
{
	for (vector<Worker>::iterator it=v.begin();it!=v.end();it++)
	{
		int deptID = rand() % 3;
		m.insert(pair<int,Worker>(deptID,*it));
	}
}

void showworker(multimap<int,Worker> &m)
{
	cout << "�߻����ţ� " << endl;
	int count = m.count(CEHUA);
	int index = 0;
	multimap<int,Worker>::iterator pos = m.find(CEHUA);
	for (  ;  pos!=m.end() && index<count ; pos++,index++)
	{
		cout << "����:  " << pos->second.m_Name << "���ʣ�  " << pos->second.m_Salary << endl;
	}

	cout << "�������ţ� " << endl;
	count = m.count(MEISHU);
	index = 0;
	pos = m.find(MEISHU);
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "����:  " << pos->second.m_Name << "���ʣ�  " << pos->second.m_Salary << endl;
	}

	cout << "�з����ţ� " << endl;
	count = m.count(YANFA);
	index = 0;
	pos = m.find(YANFA);
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "����:  " << pos->second.m_Name << "���ʣ�  " << pos->second.m_Salary << endl;
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	vector<Worker>vWorker;
	CreatWorker(vWorker);
	multimap<int, Worker>mWorker;

	setGroup(vWorker,mWorker);        //����
	showworker(mWorker);

	return 0;
}