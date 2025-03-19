#include <iostream>

using namespace std;

class GradeBook
{
private:
    int age = 0; //資料成員
    char g = 'A';

public:
    int printid() const    //成員函數
    {
        return age;
    }
    void changeID(int a)  //成員函數
    {
        if (a > 0 && a < 99)
            age = a;
        else

            cout << "輸入錯誤 ";

    }


    char printgender()
    {
        return g;
    }

    void changeID(char in_g)  //成員函數
    {
        if (isupper(in_g) != 0)
        {
            if (in_g == 'M' || in_g == 'F')
                g = in_g;
        }
        else

            cout << "輸入錯誤 ";

    }
};

int main()
{
    int a = 0;
    char in_g;
    GradeBook myGradeBook;
    cout << "原age " << myGradeBook.printid() << endl; //先印出原id
    cout << "輸入age(範圍介於0~99) ";  //輸入新id
    cin >> a;
    myGradeBook.changeID(a);   //將myid變更為輸入id
    cout << "變更後age " << myGradeBook.printid() << endl; //印出變更後id




    cout << "原性別 " << myGradeBook.printgender() << endl;
    cout << "輸入性別(限定M或F) ";
    cin >> in_g;
    myGradeBook.changeID(in_g);
    cout << "變更後age " << myGradeBook.printgender() << endl;


}