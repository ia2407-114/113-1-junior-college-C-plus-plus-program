#include <iostream>
#include "Pet.h"
using namespace std;
int main() {
    string petName;
    cout << "�п�J�d�����W�r: ";
    getline(cin, petName);
    Pet myPet(petName);
    cout << "�d�����W�r�O: " << myPet.getName() << endl;
    return 0;
}
