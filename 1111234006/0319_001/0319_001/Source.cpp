/*�D��1. �Эק�H�W�{���X�A�إߤ@�Өp��(private)�����ܼ� myID�A�ä��O�إ�changeID()�PprintID()������ơA
�Q�γo�Ǧ�����ơA���L�X�ثeID�A�A�ק�ثeID�A�̫�b�L�X�ק�᪺ID�C*/

#include <iostream>
using namespace std;

class GradeBook
{
private:
    int myID; // �p�������ܼơA�x�s ID

public:
    // �غc�l�A��l�� myID
    GradeBook(int id) : myID(id) {}

    // ������ơG�C�L"�ثe��" ID
    void printID() const
    {
        cout << "�ثe�� ID: " << myID << endl;
    }

    // ������ơG�ק� ID
    void changeID(int newID)
    {
        myID = newID;
    }
};

int main()
{
    GradeBook myGradeBook(1001); // �إ� GradeBook ����A�ñN myID ��l�Ƭ� 1001

    myGradeBook.printID();      // �I�s printID() ��ܪ�l ID(1001�^
    myGradeBook.changeID(2002); // �I�s changeID(2002) �ק� ID �� 2002
    myGradeBook.printID();      // �A���I�s printID() ��ܭק�᪺ ID�]2002�^

    return 0; //�{�������æ^�� 0�A�N���\����
}

