#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main0()
{
    char ch;
    cout << "��J�r��:";
    cin >> ch;
    if (isupper(ch) != 0)
        cout << ch << "�O�j�g�^��r��";
    else
        cout << ch << "���O�j�g�^��r��";

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

    cout << "��l�W�r: " << myGradeBook.getCourseName() << endl;
    cout << "��J���Z�H���W�r" << endl;
    cin >> score;
    if (score >= 0 && score < 100)
    {
        cout << "���W�r";
        cin >> nameOfCourse;
        myGradeBook.setCourseName(nameOfCourse);
    }
    else 
    {
        cout << "�A�����Z��������0~99";
    }
    cout << "����W�r: " << myGradeBook.getCourseName() << endl;

    cout << endl;

    cout << "��l�ʧO: " << myGradeBook.getGender() << endl;
    cout << "��J�ʧO �������j�g�r��F��M" << endl;
    cin >> Gender;
    if (isupper(Gender[0]) != 0)
    {
        if (Gender[0]='M')
        {
            cout << "����ʧO: " << myGradeBook.getGender() << endl;
        }
        else if (Gender[0] = 'F')
        {
            cout << "����ʧO: " << myGradeBook.getGender() << endl;
        }
        else
        {
            cout << "������JM��F";
        }
    }
    else
    {
        cout << "�������j�g";
    }
    return 0;
}