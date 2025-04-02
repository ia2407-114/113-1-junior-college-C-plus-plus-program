/*題目1: 建立一個可以讓使用者透過鍵盤輸入、設定(set)以及取得(get)寵物狗的名字(string name)及年齡(int age)的C++程式，
程式碼需滿足 :
    1.要有設定(set)、取得(get)、列印的方法(成員函數)
    2.設定(set)成員函數裡需判斷狗的年齡是否合理(< 20) */

#include <iostream>
#include <string>

using namespace std;

class Dog {
private:
    string name;
    int age;

public:
    void setName(string dogName) {
        name = dogName;
    }

    void setAge(int dogAge) {
        if (dogAge >= 0 && dogAge < 20) {
            age = dogAge;
        }
        else {
            cout << "錯誤：狗的年齡應該在 0 到 19 之間！" << endl;
        }
    }

    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    void printInfo() {
        cout << "狗的名字: " << name << endl;
        cout << "狗的年齡: " << age << " 歲" << endl;
    }
};

int main() {
    Dog myDog;
    string inputName;
    int inputAge;

    cout << "請輸入狗的名字: ";
    getline(cin, inputName);
    myDog.setName(inputName);


    cout << "請輸入狗的年齡: ";
    cin >> inputAge;
    myDog.setAge(inputAge);

    cout << "\n 狗的資訊 " << endl;
    myDog.printInfo();

    return 0;
}
