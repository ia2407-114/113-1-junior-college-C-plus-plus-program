#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main0()
{
    char ch;
    cout << "輸入字元:";
    cin >> ch;
    if (isupper(ch) != 0)
        cout << ch << "是大寫英文字母";
    else
        cout << ch << "不是大寫英文字母";

    return 0;
}


using namespace std;

class GradeBook
{
private:
    string courseName = "jack";
    string gender = "M";
public:
    void setCourseName(string name)
    {
        courseName = name; 
    }
    string getCourseName() const
    {
        return courseName; 
    }
    void displayMessage() const
    {
        cout << "Welcome to the grade book for\n" << getCourseName() << "!"<< endl;
    } 

    string getGender()
    {
        return gender;
    }
    void serGender(string Gender)
    {
        gender = Gender;
    }
}; 

int main()
{
    string nameOfCourse; 
    string Gender;
    GradeBook myGradeBook; 
    int score;

    cout << "初始名字: " << myGradeBook.getCourseName() << endl;
    cout << "輸入成績以更改名字" << endl;
    cin >> score;
    if (score >= 0 && score < 100)
    {
        cout << "更改名字";
        cin >> nameOfCourse;
        myGradeBook.setCourseName(nameOfCourse);
    }
    else 
    {
        cout << "你的成績必須介於0~99";
    }
    cout << "更改後名字: " << myGradeBook.getCourseName() << endl;

    cout << endl;

    cout << "初始性別: " << myGradeBook.getGender() << endl;
    cout << "輸入性別 必須為大寫字母F或M" << endl;
    cin >> Gender;
    if (isupper(Gender[0]) != 0)
    {
        if (Gender[0]='M')
        {
            cout << "更改後性別: " << myGradeBook.getGender() << endl;
        }
        else if (Gender[0] = 'F')
        {
            cout << "更改後性別: " << myGradeBook.getGender() << endl;
        }
        else
        {
            cout << "必須輸入M或F";
        }
    }
    else
    {
        cout << "必須為大寫";
    }
    return 0;
}