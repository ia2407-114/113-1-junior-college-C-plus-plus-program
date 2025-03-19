#include <iostream>
#include <cctype>
#include <string>
using namespace std;

// GradeBook ���O�w�q
class GradeBook
{
private:
    int age;       // �ǥͦ~��
    char gender;   // �ǥͩʧO ('M' �� 'F')

public:
    // �غc�禡�Ӫ�l�Ʀ~�ֻP�ʧO
    GradeBook(int initAge, char initGender)
    {
        setAge(initAge); // �]�w��l�~��
        setGender(initGender); // �]�w��l�ʧO
    }

    // �ק�~�֡]�ݤ��� 0~99�^
    void setAge(int newAge)
    {
        if (newAge >= 0 && newAge <= 99)
            age = newAge;
        else
            cout << "�~�֥������� 0 �� 99 ����!" << endl;
    }

    // ���o�~��
    int getAge() const
    {
        return age;
    }

    // �ק�ʧO�]������ 'M' �� 'F'�^
    void setGender(char newGender)
    {
        if (isupper(newGender) && (newGender == 'M' || newGender == 'F'))
            gender = newGender;
        else
            cout << "�ʧO�������j�g�^��r�� 'M' �� 'F'!" << endl;
    }

    // ���o�ʧO
    char getGender() const
    {
        return gender;
    }

    // ��ܥثe��T
    void displayInfo() const
    {
        cout << "�ثe�~��: " << age << endl;
        cout << "�ثe�ʧO: " << gender << endl;
    }
};

// main �禡�}�l�{������
int main()
{
    GradeBook student(20, 'M'); // �إ߾ǥͪ���A��l�~�� 20�A�ʧO 'M'

    cout << "��l��T: " << endl;
    student.displayInfo(); // ��ܪ�l��T

    // �ק�~��
    int newAge;
    cout << "\n�п�J�s���~��: ";
    cin >> newAge;
    student.setAge(newAge);

    // �ק�ʧO
    char newGender;
    cout << "�п�J�s���ʧO (M/F): ";
    cin >> newGender;
    student.setGender(newGender);

    // ��ܭק���T
    cout << "\n�ק���T: " << endl;
    student.displayInfo();

    return 0;
}
