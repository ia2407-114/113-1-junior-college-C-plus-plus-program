#include "cylinder.h"

circle::circle() {
    cout << "�п�J��W�驳���b�|: ";
    cin >> radius;
}

void circle::display_circle() {
    cout << "�����b�|: " << radius << endl;
    cout << "�����n: " << 3.14 * radius * radius << endl;
}

cylinder::cylinder() {
    cout << "�п�J��W�鰪��: ";
    cin >> height;
}

void cylinder::display_cylinder() {
    cout << "����: " << height << endl;
    cout << "��W����n: " << 3.14 * radius * radius * height << endl;
}
