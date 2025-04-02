/*題目2: 承上題，請使用建構子(constructor)建立一個寵物狗類別，可以讓使用者在宣告新的物件(寵物狗)時，
給予名字與年齡，並可透過鍵盤輸入並“直接”設定寵物狗屬性(姓名、年齡)的程式。*/

#include <iostream>
#include <string>

using namespace std;

class Dog {
private:
    string name;
    int age;

public:
    explicit //用來防止隱式轉換，通常加在「只有一個參數」的建構子前面。
    Dog(string dogName, int dogAge) {
        name = dogName;

        if (dogAge >= 0 && dogAge < 20) {
            age = dogAge;
        }
        else {
            age = 0;
            cout << "錯誤：狗的年齡應該在 0 到 19 之間" << endl;
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
    string inputName;
    int inputAge;

    cout << "請輸入狗的名字: ";
    getline(cin, inputName);

    cout << "請輸入狗的年齡: ";
    cin >> inputAge;

    Dog myDog(inputName, inputAge);

    cout << "\n狗的資訊" << endl;
    myDog.printInfo();

    return 0;
}
