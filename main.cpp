#include <iostream>
#include "set.h"
using namespace std;

void main()
{
	set ob1(8), c, ob2(8), d, e, f;
	ob1.show();
	cout << endl;
	ob2.show();
	cout << endl;
	d = ob1 + ob2;
	d.show();
	cout << endl;
	e = ob1*ob2;
	cout << endl;
	cout << endl;
	c = ob1 += 1;
	c.show();
	cout << endl;
	ob2();
	c();
}	
