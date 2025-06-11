#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
using namespace std;

class circle {
protected:
    float radius;

public:
    circle();
    void display_circle();
};

class height_property {
protected:
    float height;

public:
    height_property();
    void display_height();
};

class cylinder : public circle, public height_property {
public:
    cylinder();
    void display_volume();
};

#endif
