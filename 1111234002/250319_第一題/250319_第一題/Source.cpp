/*題目1. 請修改以上程式碼，建立一個私有(private)成員變數 myID，
並分別建立changeID()與printID()成員函數，利用這些成員函數，
先印出目前ID，再修改目前ID，最後在印出修改後的ID。*/



#include <iostream>
using namespace std;

class GradeBook
{
private:

    int myID = 12345;  // 私有變數 myID

public:
    // 顯示訊息
    void displayMessage() const
    {
        cout << "Welcome to the Grade Book!" << endl;
    }



    // 印出目前的 ID
    void printID() const
    {
        cout << "目前的 ID：" << myID << endl;
    }

    // 修改 ID
    void changeID(int newID)
    {
        myID = newID;
    }
};

int main()
{
    GradeBook myGradeBook; // 創建 GradeBook 物件

    myGradeBook.displayMessage(); // 顯示訊息
    myGradeBook.printID();        // 顯示目前的 ID

    myGradeBook.changeID(67890);  // 修改 ID
    myGradeBook.printID();        // 再次顯示修改後的 ID
}
