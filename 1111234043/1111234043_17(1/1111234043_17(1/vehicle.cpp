#include "vehicle.h"

circle::circle() {
    cout << "�п�J��W�驳���b�|: ";
    cin >> radius;
}

void circle::display_circle() {
    cout << "�����b�|: " << radius << endl;
    cout << "�����n: " << 3.14 * radius * radius << endl;
}

height_property::height_property() {
    cout << "�п�J��W�鰪��: ";
    cin >> height;
}

void height_property::display_height() {
    cout << "����: " << height << endl;
}

cylinder::cylinder() {
}

void cylinder::display_volume() {
    cout << "��W����n: " << 3.14 * radius * radius * height << endl;
}
