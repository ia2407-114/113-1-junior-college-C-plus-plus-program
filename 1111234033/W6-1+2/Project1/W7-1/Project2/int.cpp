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
		cout << "資料有誤不得大於20不能小於1    ";
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
		cout << "輸入錯誤" << endl;

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