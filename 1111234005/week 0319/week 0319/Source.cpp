/*肈ヘ1.叫э祘Α絏ミ╬Τ(private)Θ跑计 myIDだミchangeID()籔printID()Θㄧ计ノ硂ㄇΘㄧ计
ヘ玡IDэヘ玡ID程эID*/
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