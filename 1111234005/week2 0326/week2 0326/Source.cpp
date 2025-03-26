#include <iostream>  // 引入標準輸入輸出函式庫
#include <string>    // 引入字串函式庫

using namespace std;

class Dog {
private:
    
    string name;  
    int age;     

public:

    Dog(string dogName, int dogAge) {
        name = dogName;


        if (dogAge >= 0 && dogAge < 20) {
            age = dogAge;
        }
        else {
            age = 0;  
            cout << "錯誤：年齡應該在 0 到 19 之間！預設為 0 歲。" << endl;
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

   
    cout << "\n=== 狗的資訊 ===" << endl;
    myDog.printInfo();

    return 0;
}