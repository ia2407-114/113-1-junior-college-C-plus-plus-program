/*題目1.請修改以上程式碼，建立一個私有(private)成員變數 myID，並分別建立changeID()與printID()成員函數，利用這些成員函數，
先印出目前ID，再修改目前ID，最後在印出修改後的ID。*/
#include <iostream>
using namespace std;

// GradeBook class definition
class GradeBook
{
private:
    char gender = 'm';
    int age=50;
    int myID=0;
public:
    // function that displays a welcome message to the GradeBook user
    void displayMessage() const
    {
        cout << "Welcome to the Grade Book!" << endl;
    } // end function displayMessage

    int getAge() const
    {
        return age;
    }
    void setAge(int Age)
    {
        age = Age;
    }
    void changeID(int newID)
    {
        myID = newID;
    }
    void printID() const
    {
        cout << "Current ID: " << myID << endl;
    }
}; // end class GradeBook  

// function main begins program execution
int main()
{
    GradeBook myGradeBook; // create a GradeBook object named myGradeBook
    myGradeBook.displayMessage(); // call object's displayMessage function 
    
    myGradeBook.printID();

    // Change the ID and print again
    myGradeBook.changeID(12345);
    myGradeBook.printID();
} // end main