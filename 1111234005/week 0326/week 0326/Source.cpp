/*�D��1: �إߤ@�ӥi�H���ϥΪ̳z�L��L��J�B�]�w(set)�H�Ψ��o(get)�d�������W�r(string name)�Φ~��(int age)��C++�{���A�{���X�ݺ��� :
    1.�n���]�w(set)�B���o(get)�B�C�L����k(�������)
    2.�]�w(set)������Ƹ̻ݧP�_�����~�֬O�_�X�z(< 20) */
#include <iostream>
#include <string> // �ϥ�C++�зǦr�����O
using namespace std;

// Dog ���O�w�q
class Dog
{
public:
    // �]�w�����W�r�M�~�֪��禡
    void set(string dogName, int dogAge)
    {
        name = dogName; // �s�x�����W�r
        // �P�_�~�֬O�_�X�z (1 <= �~�� < 20)
        if (dogAge < 20 && dogAge > 0) {
            age = dogAge; // �s�x�X�z���~��
        }
        else {
            cout << "�L�Ī��~�֡C�~�֥����b1��19�����C" << endl;
            age = 0; // �p�G�~�ֵL�ġA�]�w��0
        }
    }

    // ��������W�r���禡
    string getName() const
    {
        return name; // ��^�����W�r
    }

    // ��������~�֪��禡
    int getAge() const
    {
        return age; // ��^�����~��
    }

    // �C�L�����ԲӸ�T���禡
    void print() const
    {
        if (age > 0) {
            cout << "�����W�r: " << name << endl;
            cout << "�����~��: " << age << endl;
        }
        else {
            cout << "�����~�ֵL�ġC" << endl;
        }
    }

private:
    string name; // �����W�r
    int age; // �����~��
}; // ���� Dog ���O�w�q

// �D�{������}�l
int main()
{
    string dogName; // �s�x�����W�r
    int dogAge; // �s�x�����~��

    Dog myDog; // �Ыؤ@�� Dog ����

    // ���ܨϥΪ̿�J�����W�r�M�~��
    cout << "�п�J�����W�r: ";
    getline(cin, dogName); // Ū�������W�r
    cout << "�п�J�����~��: ";
    cin >> dogAge; // Ū�������~��

    // �]�w�����W�r�M�~��
    myDog.set(dogName, dogAge);

    // �C�L�����ԲӸ�T
    myDog.print();

    return 0;
} // �����D�{��
