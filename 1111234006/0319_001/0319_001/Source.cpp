/*題目1. 請修改以上程式碼，建立一個私有(private)成員變數 myID，並分別建立changeID()與printID()成員函數，
利用這些成員函數，先印出目前ID，再修改目前ID，最後在印出修改後的ID。*/

#include <iostream>
using namespace std;

class GradeBook
{
private:
    int myID; // 私有成員變數，儲存 ID

public:
    // 建構子，初始化 myID
    GradeBook(int id) : myID(id) {}

    // 成員函數：列印"目前的" ID
    void printID() const
    {
        cout << "目前的 ID: " << myID << endl;
    }

    // 成員函數：修改 ID
    void changeID(int newID)
    {
        myID = newID;
    }
};

int main()
{
    GradeBook myGradeBook(1001); // 建立 GradeBook 物件，並將 myID 初始化為 1001

    myGradeBook.printID();      // 呼叫 printID() 顯示初始 ID(1001）
    myGradeBook.changeID(2002); // 呼叫 changeID(2002) 修改 ID 為 2002
    myGradeBook.printID();      // 再次呼叫 printID() 顯示修改後的 ID（2002）

    return 0; //程式結束並回傳 0，代表成功執行
}

