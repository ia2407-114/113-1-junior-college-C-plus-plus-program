
#include <iostream>
using namespace std;

class GradeBook
{
private:
    int myid = 0; //��Ʀ���

public:
    int getid() const    //�������
    {
        return myid;
    }
    void changeID(int a)  //�������
    {
        myid = a;
    }
};

int main()
{
    int a = 0;
    GradeBook myGradeBook;
    cout << "��id " << myGradeBook.getid() << endl; //���L�X��id
    cout << "��Jid ";  //��J�sid
    cin >> a;
    myGradeBook.changeID(a);   //�Nmyid�ܧ󬰿�Jid
    cout << "�ܧ��id " << myGradeBook.getid() << endl; //�L�X�ܧ��id
}