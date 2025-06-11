#ifndef CONE_H
#define CONE_H

#include <iostream>
using namespace std;

class circle {
protected:
    float radius;

public:
    circle();
    void display();
};

class cone : public circle {
private:
    float height;

public:
    cone();
    void display();
};

#endif
