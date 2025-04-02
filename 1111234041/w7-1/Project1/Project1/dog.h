#pragma once
#pragma once
#include<iostream>
#include<string>
using namespace std;

class D
{
public:
	explicit D(string n, int a);
	void setage(int a);
	int getage();
	void setname(string n);
	string getname();
	void display();
private:
	int age;
	string name;
};