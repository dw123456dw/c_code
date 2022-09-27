#pragma once
#include <iostream>
using namespace std;


template <class T>
class MyArray
{
public:
	MyArray(int capacity)
	{
		this->m_Capacity = capacity;
		this->m_Size = 0;
		pAddress = new T[this->m_Capacity];
	}
	void print()
	{
		for (int i=0;i<this->m_Size;i++)
		{
			cout << this->pAddress[i] << endl;
		}
	}

	MyArray(const MyArray& arr)
	{
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[this->m_Capacity];

		for (int i=0;i<this->m_Size;i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}

	MyArray& operator=(const MyArray & arr)
	{
		if (this->pAddress!=NULL)   //如果本身有数据先释放掉
		{
			delete[]this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}

		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[arr.m_Capacity];

		for (int i=0;i<this->m_Size;i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this;
	}

	//重载[]不用考虑越界，用户自己处理
	
	T& operator[](int index)
	{
		return this->pAddress[index];
	}

	void Push_Back(const T& x)
	{
		if (this->m_Capacity==this->m_Size)
		{
			return;
		}
		this->pAddress[this->m_Size] = x;
		this->m_Size++;
	}

	void Pop_Back()
	{
		if (this->m_Size==0)
		{
			return;
		}
		this->m_Size--;
	}
	int GetCapacity()
	{
		return this->m_Capacity;
	}

	int GetSize()
	{
		return this->m_Size;
	}

	~MyArray()
	{
		if (this->pAddress!=NULL)
		{
			delete[]this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}
	}

private:
	T* pAddress;
	int m_Capacity;
	int m_Size;
};






