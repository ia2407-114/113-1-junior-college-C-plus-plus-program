#include <iostream>
using namespace std;

// GradeBook ���O�w�q
class GradeBook
{
private:
    int myID; // �p�������ܼƨ��x�s ID

public:
    // �غc�禡�Ӫ�l�� ID
    GradeBook(int id) : myID(id) {}

    // ����w��T�����禡
    void displayMessage() const
    {
        cout << "�w��ϥΦ��Zï!" << endl;
    }

    // �ק� ID ���禡
    void changeID(int newID)
    {
        myID = newID;
    }

    // �L�X�ثe ID ���禡
    void printID() const
    {
        cout << "�ثe ID: " << myID << endl;
    }
};

// main �禡�}�l�{������
int main()
{
    GradeBook myGradeBook(1001); // �إߤ@�Ӫ�l ID �� 1001 �� GradeBook ����
    myGradeBook.displayMessage(); // ����w��T��

    myGradeBook.printID(); // �L�X��l ID

    myGradeBook.changeID(2024); // �ק� ID

    myGradeBook.printID(); // �L�X�ק�᪺ ID

    return 0;
}
