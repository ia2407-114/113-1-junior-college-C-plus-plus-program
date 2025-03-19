#include <iostream>
using namespace std;

// GradeBook class definition
class GradeBook
{
private:
    int age;
public:
    // function that displays a welcome message to the GradeBook user
    void displayMessage() const
    {
        cout << "Welcome to the Grade Book!" << endl;
    }
    int getage()
    {
        return age;
    }
    void setage(int Age)
    {
        age = Age;
    }
}; // end class GradeBook  

// function main begins program execution
int main()
{
    int Age;
    GradeBook myGradeBook; // create a GradeBook object named myGradeBook
    myGradeBook.displayMessage(); // call object's displayMessage function 
    cin >> Age;
    myGradeBook.setage(Age);
    cout << myGradeBook.getage();
} // end main