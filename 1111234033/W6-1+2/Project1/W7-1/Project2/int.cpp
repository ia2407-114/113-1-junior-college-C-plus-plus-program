#include<iostream>
#include<string>
#include"dog.h"

using namespace std;

D::D(string n, int a)
{
	name = n;
	age = a;
}

void D::setage(int a)
{
	if (a < 20 && a >= 1)
	{
		age = a;

	}
	else
	{
		cout << "��Ʀ��~���o�j��20����p��1    ";
	}

}
int D::getage()
{
	return age;
}
void D::setname(string n)
{
	if (n.size() <= 10)
	{
		name = n;
	}
	else if (n.size() == 0)
	{
		cout << "��J���~" << endl;

	}
	else if (n.size() > 10)
	{
		name = n.substr(0, 10);
	}
}
string D::getname()
{
	return name;
}
void D::display()
{
	cout << "dog age :" << getage() << endl;
	cout << "dog name :" << getname() << endl;

}