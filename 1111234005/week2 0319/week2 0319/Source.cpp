/*題目2.請根據上面兩個程式碼，再結合第一題的功能，修改成印出初始年齡、修改年齡(但是需要判斷成績必須介於0~99)、列印出新的年齡。
再建立另外兩個成員函數，分別負責取得資料性別與修改性別，
進而能夠印出初始性別、修改性別(需要利用第一個副程式的內容判斷是否為大寫英文字母'M'或'F')、列印出新的性別。*/
#include <iostream>
#include <string>
using namespace std;

// GradeBook class definition
class GradeBook
{
private:   
    int age = 0;      
    char gender = 'M'; 

public:

    
    int getAge() const
    {
        return age;
    }

   
    void setAge(int A)
    {
        if (A >= 0 && A <= 99)
        {
            age = A;
        }
        else
        {
            cout << "Invalid age. Age must be between 0 and 99." << endl;
        }
    }


    
    char getGender() const
    {
        return gender;
    }

    
    void setGender(char newGender)
    {
       
        if (newGender == 'M' || newGender == 'F')
        {
            gender = newGender;
        }
        else
        {
            cout << "Invalid gender. Gender must be 'M' or 'F'." << endl;
        }
    }

   
    void printGender() const
    {
        cout << "Current gender: " << gender << endl;
    }
};

// function main begins program execution
int main()
{
    GradeBook myGradeBook; // create a GradeBook object named myGradeBook

    
    cout << "Initial age: " << myGradeBook.getAge() << endl;

  
    int newAge;
    cout << "Enter new age: ";
    cin >> newAge;
    myGradeBook.setAge(newAge);
    cout << "Updated age: " << myGradeBook.getAge() << endl;

   
    myGradeBook.printGender();

   
    char newGender;
    cout << "Enter new gender (M/F): ";
    cin >> newGender;
    myGradeBook.setGender(newGender); // 設定性別
    myGradeBook.printGender(); // 顯示新的性別

    return 0;
}
