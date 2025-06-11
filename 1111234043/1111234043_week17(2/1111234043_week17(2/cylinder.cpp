#include "cylinder.h"

circle::circle() {
    cout << "請輸入圓柱體底部半徑: ";
    cin >> radius;
}

void circle::display_circle() {
    cout << "底部半徑: " << radius << endl;
    cout << "底面積: " << 3.14 * radius * radius << endl;
}

cylinder::cylinder() {
    cout << "請輸入圓柱體高度: ";
    cin >> height;
}

void cylinder::display_cylinder() {
    cout << "高度: " << height << endl;
    cout << "圓柱體體積: " << 3.14 * radius * radius * height << endl;
}
