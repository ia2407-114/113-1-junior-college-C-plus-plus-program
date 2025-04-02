#include <iostream>
#include <string> // program uses C++ standard string class
using namespace std;

// GradeBook class definition
class GradeBook
{
public:
    explicit  GradeBook(string name)
    {
        courseName = name;
    }
    // function that sets the course name
    void setCourseName(string name)
    {
        if (name != "")
            courseName = name; // store the course name in the object
        else
            cout << "empty string!!!" << endl;

    } // end function setCourseName

    // function that gets the course name
    string getCourseName() const
    {
        //string empty = "";
        //if (pass == 999)
        return courseName; // return the object's courseName
   // else
        //cout << "Wrong password" << endl;

    } // end function getCourseName

    // function that displays a welcome message
    void displayMessage() const
    {
        // this statement calls getCourseName to get the 
        // name of the course this GradeBook represents
        cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
    } // end function displayMessage
private:
    string courseName; // course name for this GradeBook
}; // end class GradeBook  

// function main begins program execution
int main()
{
    string nameOfCourse; //string是庫存類別  string of characters to store the course name
    GradeBook myGradeBook("Computer Networks"); // create a GradeBook 是使用者自訂類別 object named myGradeBook
    int pass = 1234;
    // display initial value of courseName
    cout << "Initial course name is: " << myGradeBook.getCourseName()
        << endl;

    // prompt for, input and set course name
    cout << "\nPlease enter the course name:" << endl;
    getline(cin, nameOfCourse); // read a course name with blanks
    myGradeBook.setCourseName(nameOfCourse); // set the course name

    cout << endl; // outputs a blank line
    myGradeBook.displayMessage(); // display message with new course name
} // end main
