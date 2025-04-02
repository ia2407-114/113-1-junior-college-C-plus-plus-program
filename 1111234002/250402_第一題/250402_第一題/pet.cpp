#include "Pet.h"
#include <iostream>
using namespace std;
Pet::Pet(string name) {
    setName(name);
}

void Pet::setName(string name) {
    if (name.length() > 10) {
        this->name = name.substr(0, 10);  // 超過 10 字元則取前 10 個
    }
    else {
        this->name = name;
    }
}

string Pet::getName() const {
    return name;
}
