/*題目2. 請根據上面兩個程式碼，再結合第一題的功能，修改成印出初始年齡、修改年齡(但是需要判斷成績必須介於0~99)、
列印出新的年齡。再建立另外兩個成員函數，分別負責取得資料性別與修改性別，
進而能夠印出初始性別、修改性別(需要利用第一個副程式的內容判斷是否為大寫英文字母'M'or'F')、列印出新的性別。*/

#include <iostream>
#include <string>
#include <cctype> 
using namespace std;


class GradeBook
{
private:

    int age = 17;      
    char gender = 'M'; 
    int myID = 1001;   

public:


    void setAge(int a) {
        if (a >= 0 && a <= 99) {
            age = a;
        }
        else {
            cout << "年齡輸入錯誤，請輸入 0 到 99 之間的數字。" << endl;
        }
    }

    int getAge() const {
        return age;
    }


    void setGender(char g) {
        if (g == 'M' || g == 'F') {
            gender = g;
        }
        else {
            cout << "性別輸入錯誤，只接受 'M' 或 'F'。" << endl;
        }
    }

    char getGender() const {
        return gender;
    }

    void printID() const {
        cout << "目前的 ID: " << myID << endl;
    }
    void changeID(int newID) {
        myID = newID;
    }
};

int main() {
    string nameOfCourse;
    GradeBook myGradeBook;


    cout << "初始年齡: " << myGradeBook.getAge() << endl;


    int newAge;
    cout << "\n請輸入新的年齡 (0-99): ";
    cin >> newAge;
    myGradeBook.setAge(newAge);
    cout << "更新後的年齡: " << myGradeBook.getAge() << endl;


    cout << "\n初始性別: " << myGradeBook.getGender() << endl;


    char newGender;
    cout << "\n請輸入新的性別 ('M' 或 'F'): ";
    cin >> newGender;
    myGradeBook.setGender(newGender);
    cout << "更新後的性別: " << myGradeBook.getGender() << endl;


    myGradeBook.printID();


    int newID;
    cout << "\n請輸入新的 ID: ";
    cin >> newID;
    myGradeBook.changeID(newID);
    myGradeBook.printID();

    return 0;
}
