/*題目1: 建立一個可以讓使用者透過鍵盤輸入、設定(set)以及取得(get)寵物狗的名字(string name)及年齡(int age)的C++程式，程式碼需滿足 :
    1.要有設定(set)、取得(get)、列印的方法(成員函數)
    2.設定(set)成員函數裡需判斷狗的年齡是否合理(< 20) */
#include <iostream>
#include <string> // 使用C++標準字串類別
using namespace std;

// Dog 類別定義
class Dog
{
public:
    // 設定狗的名字和年齡的函式
    void set(string dogName, int dogAge)
    {
        name = dogName; // 存儲狗的名字
        // 判斷年齡是否合理 (1 <= 年齡 < 20)
        if (dogAge < 20 && dogAge > 0) {
            age = dogAge; // 存儲合理的年齡
        }
        else {
            cout << "無效的年齡。年齡必須在1到19之間。" << endl;
            age = 0; // 如果年齡無效，設定為0
        }
    }

    // 獲取狗的名字的函式
    string getName() const
    {
        return name; // 返回狗的名字
    }

    // 獲取狗的年齡的函式
    int getAge() const
    {
        return age; // 返回狗的年齡
    }

    // 列印狗的詳細資訊的函式
    void print() const
    {
        if (age > 0) {
            cout << "狗的名字: " << name << endl;
            cout << "狗的年齡: " << age << endl;
        }
        else {
            cout << "狗的年齡無效。" << endl;
        }
    }

private:
    string name; // 狗的名字
    int age; // 狗的年齡
}; // 結束 Dog 類別定義

// 主程式執行開始
int main()
{
    string dogName; // 存儲狗的名字
    int dogAge; // 存儲狗的年齡

    Dog myDog; // 創建一個 Dog 物件

    // 提示使用者輸入狗的名字和年齡
    cout << "請輸入狗的名字: ";
    getline(cin, dogName); // 讀取狗的名字
    cout << "請輸入狗的年齡: ";
    cin >> dogAge; // 讀取狗的年齡

    // 設定狗的名字和年齡
    myDog.set(dogName, dogAge);

    // 列印狗的詳細資訊
    myDog.print();

    return 0;
} // 結束主程式
