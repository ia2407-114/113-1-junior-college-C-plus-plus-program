#include <iostream>
#include <string> // program uses C++ standard string class
#include "gradebook.h"
using namespace std; 

GradeBook::GradeBook(string name)
{
    courseName = name;
}

void GradeBook::setCourseName(string name)
{
    if (name.size() <= 10)
        courseName = name;
    else if (name.size() == 0)
        cout << "empty string!!!" << endl;
    else
        courseName = name.substr(0,10);
}

string GradeBook::getCourseName() const
{
    //string empty = "";
    //if (pass == 999)
    return courseName; // return the object's courseName
}

void GradeBook::displayMessage() const
{
    cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
}