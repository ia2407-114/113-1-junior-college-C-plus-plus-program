#include <iostream>
#include <string> // program uses C++ standard string class
#include "gradebook.h"
using namespace std;

explicit  GradeBook::GradeBook(string name)
{
     courseName = name;

}

void GradeBook::setCourseName(string name)
{
    if (name.size() <=10)
        courseName = name; // store the course name in the object
    else
        cout << "empty string!!!" << endl;
    {
        // 若名稱超過 10 個字元，則只儲存前 10 個字元
        courseName = name.substr(0, 10);
        cout << "課程名稱超過 10 個字元，已截斷為: " << courseName << endl;
    }

} // end function setCourseName

string GradeBook::getCourseName() const
{
    //string empty = "";
    //if (pass == 999)
    return courseName; // return the object's courseName
// else
     //cout << "Wrong password" << endl;

} // end function getCourseName

void GradeBook::displayMessage() const
{
    // this statement calls getCourseName to get the 
    // name of the course this GradeBook represents
    cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
} // end function displayMessage
    // function that sets the course name

