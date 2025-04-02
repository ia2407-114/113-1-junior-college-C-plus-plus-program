/*�D��2: �ӤW�D�A�ШϥΫغc�l(constructor)�إߤ@���d�������O�A�i�H���ϥΪ̦b�ŧi�s������(�d����)�ɡA
�����W�r�P�~�֡A�åi�z�L��L��J�á��������]�w�d�����ݩ�(�m�W�B�~��)���{���C*/

#include <iostream>
#include <string>

using namespace std;

class Dog {
private:
    string name;
    int age;

public:
    explicit //�ΨӨ��������ഫ�A�q�`�[�b�u�u���@�ӰѼơv���غc�l�e���C
    Dog(string dogName, int dogAge) {
        name = dogName;

        if (dogAge >= 0 && dogAge < 20) {
            age = dogAge;
        }
        else {
            age = 0;
            cout << "���~�G�����~�����Ӧb 0 �� 19 ����" << endl;
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

    cout << "\n������T" << endl;
    myDog.printInfo();

    return 0;
}
