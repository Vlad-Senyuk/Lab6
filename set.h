#pragma once
#include <iostream>
using namespace std;

class set {
	int *st;	// указатель на множество
	int tsize;
	int msize = 10;
public:
	set();
	set(int v);
	set operator+=(const int&);	//add new
	set operator+(set x);	//union
	set operator*(const set&);	// == сравнение двух множеств
	int operator()();	// мощность множества
	void show();	// вывод
					/*~set() {
					delete[] st;
					}*/
};

void set::show()
{
	for (int i = 0; i < tsize; i++)
	{
		cout << st[i] << " ";
	}
}

set::set()
{
	st = new int[msize];

	for (int i = 0; i < msize; i++)
	{
		st[i] = 0;
	}
	
	tsize = msize;
}

set::set(int v)
{
	st = new int[msize];

	for (int i = 0; i < msize; i++)
	{
		st[i] = rand() % 20;
	}
	tsize = v;
}

set set::operator+=(const int &add)
{
	tsize = tsize + 1;
	st[tsize - 1] = add;
	return *this;
}

set set::operator+(set x)
{
	set temp;
	for (int i = 0; i < tsize; i++)
	{
		temp.st[i] = st[i] + x.st[i];
	}

	return temp;
}

set set::operator*(const set &p)
{
	int count = 0;
	bool temp;
	for (int i = 0; i < tsize; i++)
	{
		if (st[i] == p.st[i])
		{
			count++;
		}
	}

	if (count<tsize)
	{
		temp = false;
		cout << "false" << endl;
	}
	else
	{
		temp = true;
		cout << "true" << endl;
	}

	return temp;
}

int set::operator()()
{
	
	cout << "size: " << tsize << endl;
	return tsize;
}
