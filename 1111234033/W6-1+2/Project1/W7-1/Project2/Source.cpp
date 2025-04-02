#include<iostream>
#include<string>
#include"dog.h"

using namespace std;


int main()
{
	D dog("hi", 0);
	int a;
	string n;

	cout << "input age: ";
	cin >> a;

	cout << "input name: ";
	cin >> n;

	dog.setage(a);
	dog.setname(n);
	dog.display();

}