#include "cone.h"

circle::circle() {
    cout << "��J��檺�b�|: ";
    cin >> radius;
}

void circle::display() {
    cout << "���b�|: " << radius << endl;
    cout << "��歱�n: " << 3.14 * radius * radius << endl;
}

cone::cone() {
    cout << "��J����������: ";
    cin >> height;
}

void cone::display() {
    cout << "��������: " << height << endl;
    cout << "������n: " << (1.0 / 3) * 3.14 * radius * radius * height << endl;
}
