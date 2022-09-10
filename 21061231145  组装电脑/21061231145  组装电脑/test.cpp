#include <iostream>
using namespace std;

class CPU
{
public:

	virtual void calculate() = 0;

};


class VideCard
{
public:

	virtual void DisPlay() = 0;
};


class Memory
{
public:

	virtual void storage() = 0;
};


class Computer
{
public:

	Computer(CPU* cpu,VideCard* vc,Memory* mem)
	{
		m_cpu = cpu;
		m_mem = mem;
		m_vc = vc;
	}

	void work()
	{
		m_cpu->calculate();
		m_mem->storage();
		m_vc->DisPlay();
	}


	~Computer()
	{
		if (m_cpu!=NULL)
		{
			delete m_cpu;
		}
	
	
		if (m_mem != NULL)
		{
			delete m_mem;
		}
		if (m_vc != NULL)
		{
			delete m_vc;
		}
	}


private:
	CPU* m_cpu;
	VideCard* m_vc;
	Memory* m_mem;
};


class IntelCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << "Intel的CPU在计算" << endl;
	}
};


class IntelVideCard :public VideCard
{
public:
	virtual void DisPlay()
	{
		cout << "Intel的显卡在显示" << endl;
	}
};

class IntelMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Intel的内存在储存" << endl;
	}
};


class LenoveCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << "Lenove的CPU在计算" << endl;
	}
};


class LenoveVideCard :public VideCard
{
public:
	virtual void DisPlay()
	{
		cout << "Lenove的显卡在显示" << endl;
	}
};

class LenoveMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Lenove的内存在储存" << endl;
	}
};


int main()
{
	cout << "第一台电脑在执行" << endl;
	Computer* cmp1 = new Computer(new IntelCPU, new IntelVideCard,new IntelMemory);
	cmp1->work();
	delete cmp1;
	cout << "------------------------------" << endl;


	cout << "第二台电脑在执行" << endl;
	Computer* cmp2 = new Computer(new LenoveCPU, new LenoveVideCard, new LenoveMemory);
	cmp2->work();
	delete cmp2;
	cout << "------------------------------" << endl;

	cout << "第三台电脑在执行" << endl;
	Computer* cmp3= new Computer(new LenoveCPU, new IntelVideCard, new IntelMemory);
	cmp3->work();
	delete cmp3;
	cout << "------------------------------" << endl;

	return 0;
}

