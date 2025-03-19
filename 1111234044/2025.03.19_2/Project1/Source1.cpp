#include <iostream>
#include <cctype>
#include <string>
using namespace std;

// GradeBook 類別定義
class GradeBook
{
private:
    int age;       // 學生年齡
    char gender;   // 學生性別 ('M' 或 'F')

public:
    // 建構函式來初始化年齡與性別
    GradeBook(int initAge, char initGender)
    {
        setAge(initAge); // 設定初始年齡
        setGender(initGender); // 設定初始性別
    }

    // 修改年齡（需介於 0~99）
    void setAge(int newAge)
    {
        if (newAge >= 0 && newAge <= 99)
            age = newAge;
        else
            cout << "年齡必須介於 0 到 99 之間!" << endl;
    }

    // 取得年齡
    int getAge() const
    {
        return age;
    }

    // 修改性別（必須為 'M' 或 'F'）
    void setGender(char newGender)
    {
        if (isupper(newGender) && (newGender == 'M' || newGender == 'F'))
            gender = newGender;
        else
            cout << "性別必須為大寫英文字母 'M' 或 'F'!" << endl;
    }

    // 取得性別
    char getGender() const
    {
        return gender;
    }

    // 顯示目前資訊
    void displayInfo() const
    {
        cout << "目前年齡: " << age << endl;
        cout << "目前性別: " << gender << endl;
    }
};

// main 函式開始程式執行
int main()
{
    GradeBook student(20, 'M'); // 建立學生物件，初始年齡 20，性別 'M'

    cout << "初始資訊: " << endl;
    student.displayInfo(); // 顯示初始資訊

    // 修改年齡
    int newAge;
    cout << "\n請輸入新的年齡: ";
    cin >> newAge;
    student.setAge(newAge);

    // 修改性別
    char newGender;
    cout << "請輸入新的性別 (M/F): ";
    cin >> newGender;
    student.setGender(newGender);

    // 顯示修改後資訊
    cout << "\n修改後資訊: " << endl;
    student.displayInfo();

    return 0;
}
