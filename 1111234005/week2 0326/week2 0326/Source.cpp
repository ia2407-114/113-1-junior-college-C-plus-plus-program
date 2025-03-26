#include <iostream>  // �ޤJ�зǿ�J��X�禡�w
#include <string>    // �ޤJ�r��禡�w

using namespace std;

class Dog {
private:
    
    string name;  
    int age;     

public:

    Dog(string dogName, int dogAge) {
        name = dogName;


        if (dogAge >= 0 && dogAge < 20) {
            age = dogAge;
        }
        else {
            age = 0;  
            cout << "���~�G�~�����Ӧb 0 �� 19 �����I�w�]�� 0 ���C" << endl;
        }
    }

 
    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

  
    void printInfo() {
        cout << "�����W�r: " << name << endl;
        cout << "�����~��: " << age << " ��" << endl;
    }
};

int main() {
    string inputName;
    int inputAge;

   
    cout << "�п�J�����W�r: ";
    getline(cin, inputName);


    cout << "�п�J�����~��: ";
    cin >> inputAge;

   
    Dog myDog(inputName, inputAge);

   
    cout << "\n=== ������T ===" << endl;
    myDog.printInfo();

    return 0;
}