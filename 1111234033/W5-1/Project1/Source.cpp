
#include <iostream>
using namespace std;

class GradeBook
{
private:
    int myid = 0; //資料成員

public:
    int getid() const    //成員函數
    {
        return myid;
    }
    void changeID(int a)  //成員函數
    {
        myid = a;
    }
};

int main()
{
    int a = 0;
    GradeBook myGradeBook;
    cout << "原id " << myGradeBook.getid() << endl; //先印出原id
    cout << "輸入id ";  //輸入新id
    cin >> a;
    myGradeBook.changeID(a);   //將myid變更為輸入id
    cout << "變更後id " << myGradeBook.getid() << endl; //印出變更後id
}