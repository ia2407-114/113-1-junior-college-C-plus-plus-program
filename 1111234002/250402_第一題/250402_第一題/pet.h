#define PET_H
#include <string>
using namespace std;

class Pet {
public:
    explicit Pet(string name);  // �غc�禡
    void setName(string name);  // �]�w�W��
    string getName() const;     // ���o�W��
private:
    string name;
};

#pragma once
