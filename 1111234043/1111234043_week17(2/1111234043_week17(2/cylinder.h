#ifndef CYLINDER_H
#define CYLINDER_H

#include <iostream>
using namespace std;

class circle {
protected:
    float radius;

public:
    circle();
    void display_circle();
};

class cylinder : public circle {
private:
    float height;

public:
    cylinder();
    void display_cylinder();
};

#endif
