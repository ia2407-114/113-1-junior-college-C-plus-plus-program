#define PET_H
#include <string>
using namespace std;

class Pet {
public:
    explicit Pet(string name);  // 建構函式
    void setName(string name);  // 設定名稱
    string getName() const;     // 取得名稱
private:
    string name;
};

#pragma once
