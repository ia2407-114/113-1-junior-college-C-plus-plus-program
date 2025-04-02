#include <iostream>
#include <string> // program uses C++ standard string class
using namespace std;

// GradeBook class definition
class GradeBook
{
public:
    explicit  GradeBook(string name);
 
    void setCourseName(string name);

    string getCourseName() const;

    void displayMessage() const;
private:
    string courseName; // course name for this GradeBook
};
