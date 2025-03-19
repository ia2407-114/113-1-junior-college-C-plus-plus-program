/*�D��1.�Эק�H�W�{���X�A�إߤ@�Өp��(private)�����ܼ� myID�A�ä��O�إ�changeID()�PprintID()������ơA�Q�γo�Ǧ�����ơA
���L�X�ثeID�A�A�ק�ثeID�A�̫�b�L�X�ק�᪺ID�C*/
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