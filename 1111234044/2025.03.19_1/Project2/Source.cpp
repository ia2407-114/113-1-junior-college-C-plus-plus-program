#include <iostream>
using namespace std;

// GradeBook 類別定義
class GradeBook
{
private:
    int myID; // 私有成員變數來儲存 ID

public:
    // 建構函式來初始化 ID
    GradeBook(int id) : myID(id) {}

    // 顯示歡迎訊息的函式
    void displayMessage() const
    {
        cout << "歡迎使用成績簿!" << endl;
    }

    // 修改 ID 的函式
    void changeID(int newID)
    {
        myID = newID;
    }

    // 印出目前 ID 的函式
    void printID() const
    {
        cout << "目前 ID: " << myID << endl;
    }
};

// main 函式開始程式執行
int main()
{
    GradeBook myGradeBook(1001); // 建立一個初始 ID 為 1001 的 GradeBook 物件
    myGradeBook.displayMessage(); // 顯示歡迎訊息

    myGradeBook.printID(); // 印出初始 ID

    myGradeBook.changeID(2024); // 修改 ID

    myGradeBook.printID(); // 印出修改後的 ID

    return 0;
}
