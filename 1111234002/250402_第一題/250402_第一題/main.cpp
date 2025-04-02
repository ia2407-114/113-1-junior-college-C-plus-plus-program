#include <iostream>
#include "Pet.h"
using namespace std;
int main() {
    string petName;
    cout << "請輸入寵物的名字: ";
    getline(cin, petName);
    Pet myPet(petName);
    cout << "寵物的名字是: " << myPet.getName() << endl;
    return 0;
}
