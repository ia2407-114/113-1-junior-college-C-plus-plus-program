#include "cone.h"

circle::circle() {
    cout << "¿é¤J¶ê»æªº¥b®|: ";
    cin >> radius;
}

void circle::display() {
    cout << "¶ê»æ¥b®|: " << radius << endl;
    cout << "¶ê»æ­±¿n: " << 3.14 * radius * radius << endl;
}

cone::cone() {
    cout << "¿é¤J²¢µ©ªº°ª«×: ";
    cin >> height;
}

void cone::display() {
    cout << "²¢µ©°ª«×: " << height << endl;
    cout << "²¢µ©Åé¿n: " << (1.0 / 3) * 3.14 * radius * radius * height << endl;
}
