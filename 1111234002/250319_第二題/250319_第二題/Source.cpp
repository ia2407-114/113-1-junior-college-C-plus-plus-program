/*�D��2. �ЮھڤW����ӵ{���X�A�A���X�Ĥ@�D���\��A�ק令�L�X��l�~�֡B�ק�~��(���O�ݭn�P�_���Z��������0~99)�B
�C�L�X�s���~�֡C�A�إߥt�~��Ӧ�����ơA���O�t�d���o��ƩʧO�P�ק�ʧO�A
�i�ӯ���L�X��l�ʧO�B�ק�ʧO(�ݭn�Q�βĤ@�ӰƵ{�������e�P�_�O�_���j�g�^��r��'M'or'F')�B�C�L�X�s���ʧO�C*/

#include <iostream>
#include <string>
#include <cctype> 
using namespace std;


class GradeBook
{
private:

    int age = 17;      
    char gender = 'M'; 
    int myID = 1001;   

public:


    void setAge(int a) {
        if (a >= 0 && a <= 99) {
            age = a;
        }
        else {
            cout << "�~�ֿ�J���~�A�п�J 0 �� 99 �������Ʀr�C" << endl;
        }
    }

    int getAge() const {
        return age;
    }


    void setGender(char g) {
        if (g == 'M' || g == 'F') {
            gender = g;
        }
        else {
            cout << "�ʧO��J���~�A�u���� 'M' �� 'F'�C" << endl;
        }
    }

    char getGender() const {
        return gender;
    }

    void printID() const {
        cout << "�ثe�� ID: " << myID << endl;
    }
    void changeID(int newID) {
        myID = newID;
    }
};

int main() {
    string nameOfCourse;
    GradeBook myGradeBook;


    cout << "��l�~��: " << myGradeBook.getAge() << endl;


    int newAge;
    cout << "\n�п�J�s���~�� (0-99): ";
    cin >> newAge;
    myGradeBook.setAge(newAge);
    cout << "��s�᪺�~��: " << myGradeBook.getAge() << endl;


    cout << "\n��l�ʧO: " << myGradeBook.getGender() << endl;


    char newGender;
    cout << "\n�п�J�s���ʧO ('M' �� 'F'): ";
    cin >> newGender;
    myGradeBook.setGender(newGender);
    cout << "��s�᪺�ʧO: " << myGradeBook.getGender() << endl;


    myGradeBook.printID();


    int newID;
    cout << "\n�п�J�s�� ID: ";
    cin >> newID;
    myGradeBook.changeID(newID);
    myGradeBook.printID();

    return 0;
}
