#include <iostream>
#include "ptype.h"
#include <algorithm>
#include <iterator>
#include <string>
#include <list>
#include <deque>
using namespace std;

int main()
{
	//1
	list<transp_sred> lst;
	transp_sred ob1(3850, "Audi", 5000);
	lst.push_back(ob1);
	transp_sred ob2(4741, "Lexus", 3500);
	lst.push_back(ob2);
	transp_sred ob3(6666, "Lamborgini", 6000);
	lst.push_back(ob3);

	cout << endl;
	list<transp_sred>::iterator p = lst.begin();
	cout << "List: " << endl;
	while (p != lst.end())
	{
		cout << *p << endl;
		p++;
	}
	cout << endl;

	//2
	lst.clear();
	transp_sred m1(8521, "BMW", 20000);
	lst.push_back(m1);
	transp_sred m2(3463, "Mazda", 1000);
	lst.push_back(m2);
	transp_sred m3(4578, "Mercedes", 7000);
	lst.push_back(m3);
	cout << endl;

	//3
	list<transp_sred>::iterator q = lst.begin();
	cout << "List: " << endl;
	while (q != lst.end())
	{
		cout << *q << endl;
		q++;
	}
	cout << endl;

	//4
	cout << endl;
	list<transp_sred> lst2;
	transp_sred z1(111, "Bentley", 1000);
	lst2.push_back(z1);
	transp_sred z2(2222, "Toyota", 2000);
	lst2.push_back(z2);
	transp_sred z3(3333, "Mezarati", 3000);
	lst2.push_back(z3);
	cout << endl;

	//5
	int m;
	cout << "Input m: " << endl;
	cin >> m;
	cout << endl;
	for (int i = 0; i < 3; i++)
	{
		if (i >= m)
		{
			lst.pop_back();
		}
	}

	lst.splice(lst.end(), lst2); // функция для вставки в один контейнер элементов другого контейнера (1-ый параметр - итератор места вставки, 2-ой параметр-всавл. элем)
	cout << endl;
	list<transp_sred>::iterator x = lst.begin();
	cout << "List 1-" << endl;

	while (x != lst.end())
	{
		cout << *x << endl;
		x++;
	}
	cout << endl;
	cout << endl;
	cout << "List 2-" << endl;
	list<transp_sred>::iterator z = lst2.begin();
	while (z != lst2.end())
	{
		cout << *z << endl;
		z++;
	}
	cout << endl;
	cout << endl;

	return 0;
}
