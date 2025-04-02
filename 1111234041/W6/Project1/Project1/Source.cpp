#include<iostream>
#include<string>


using namespace std;

class D
{
public:
	explicit
		D(string n, int a)
	{
		name = n;
		age = a;
	}

	void setage(int a)
	{
		if (a < 20 && a >= 1)
		{
			age = a;

		}
		else
		{
			cout << "¸ê®Æ¦³»~¤£±o¤j©ó20    ";
		}

	}

	int getage()
	{
		return age;
	}
	void setname(string n)
	{
		name = n;
	}
	string getname()
	{
		return name;
	}
	void display()
	{
		cout << "dog age :" << getage() << endl;
		cout << "dog name :" << getname() << endl;

	}

private:
	int age;
	string name;

};

int main()
{
	D dog("hi", 5);
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