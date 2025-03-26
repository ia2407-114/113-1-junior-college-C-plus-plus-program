#include <iostream>
#include <string> // program uses C++ standard string class
using namespace std;

class GradeBook
{
public:
    explicit GradeBook(string name, int age) {
        Name = name;
        Age = age;
    }

void setname(string name)
    {
        Name = name;
    }
    string getname() const
    {
        return Name; 
    }

    void setage(int age)
    {
        Age = age;
    }
    int getage() const
    {
        return Age;
    }
private:
    string Name;
    int Age;
};  

int main()
{
    string dogname;
    int dogage= 0;
    GradeBook mydog("jack",13), hisdog("john", 15), herdog("lusy", 7);
    cout << "Your dog's name is: " << mydog.getname()
        << endl;
    cout << "Your dog's age is: " << mydog.getage()
        << endl;

    cout << "\nPlease enter your dog's name:" << endl;
    getline(cin, dogname);
    mydog.setname(dogname); // set the course name

    cout << "\nPlease enter your dog's age:" << endl;
    cin >> dogage;
    if (dogage < 20) {
        mydog.setage(dogage); // set the course name
        cout << endl;
        cout << "Your dog's new name is: " << mydog.getname() << endl;
        cout << "Your dog's new age is: " << mydog.getage() << endl;
    }
    else
    {
        cout << "請輸入正確年齡" << endl;
    }
} // end main