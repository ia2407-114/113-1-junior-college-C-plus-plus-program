#include <iostream>

using namespace std;

class GradeBook
{
private:
    int age = 0; //��Ʀ���
    char g = 'A';

public:
    int printid() const    //�������
    {
        return age;
    }
    void changeID(int a)  //�������
    {
        if (a > 0 && a < 99)
            age = a;
        else

            cout << "��J���~ ";

    }


    char printgender()
    {
        return g;
    }

    void changeID(char in_g)  //�������
    {
        if (isupper(in_g) != 0)
        {
            if (in_g == 'M' || in_g == 'F')
                g = in_g;
        }
        else

            cout << "��J���~ ";

    }
};

int main()
{
    int a = 0;
    char in_g;
    GradeBook myGradeBook;
    cout << "��age " << myGradeBook.printid() << endl; //���L�X��id
    cout << "��Jage(�d�򤶩�0~99) ";  //��J�sid
    cin >> a;
    myGradeBook.changeID(a);   //�Nmyid�ܧ󬰿�Jid
    cout << "�ܧ��age " << myGradeBook.printid() << endl; //�L�X�ܧ��id




    cout << "��ʧO " << myGradeBook.printgender() << endl;
    cout << "��J�ʧO(���wM��F) ";
    cin >> in_g;
    myGradeBook.changeID(in_g);
    cout << "�ܧ��age " << myGradeBook.printgender() << endl;


}