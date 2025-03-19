/*�D��2.�ЮھڤW����ӵ{���X�A�A���X�Ĥ@�D���\��A�ק令�L�X��l�~�֡B�ק�~��(���O�ݭn�P�_���Z��������0~99)�B�C�L�X�s���~�֡C
�A�إߥt�~��Ӧ�����ơA���O�t�d���o��ƩʧO�P�ק�ʧO�A
�i�ӯ���L�X��l�ʧO�B�ק�ʧO(�ݭn�Q�βĤ@�ӰƵ{�������e�P�_�O�_���j�g�^��r��'M'��'F')�B�C�L�X�s���ʧO�C*/
#include <iostream>
#include <string>
using namespace std;

// GradeBook class definition
class GradeBook
{
private:   
    int age = 0;      
    char gender = 'M'; 

public:

    
    int getAge() const
    {
        return age;
    }

   
    void setAge(int A)
    {
        if (A >= 0 && A <= 99)
        {
            age = A;
        }
        else
        {
            cout << "Invalid age. Age must be between 0 and 99." << endl;
        }
    }


    
    char getGender() const
    {
        return gender;
    }

    
    void setGender(char newGender)
    {
       
        if (newGender == 'M' || newGender == 'F')
        {
            gender = newGender;
        }
        else
        {
            cout << "Invalid gender. Gender must be 'M' or 'F'." << endl;
        }
    }

   
    void printGender() const
    {
        cout << "Current gender: " << gender << endl;
    }
};

// function main begins program execution
int main()
{
    GradeBook myGradeBook; // create a GradeBook object named myGradeBook

    
    cout << "Initial age: " << myGradeBook.getAge() << endl;

  
    int newAge;
    cout << "Enter new age: ";
    cin >> newAge;
    myGradeBook.setAge(newAge);
    cout << "Updated age: " << myGradeBook.getAge() << endl;

   
    myGradeBook.printGender();

   
    char newGender;
    cout << "Enter new gender (M/F): ";
    cin >> newGender;
    myGradeBook.setGender(newGender); // �]�w�ʧO
    myGradeBook.printGender(); // ��ܷs���ʧO

    return 0;
}
