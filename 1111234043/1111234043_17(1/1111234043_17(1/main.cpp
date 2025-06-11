#include "vehicle.h"

int main() {
    cylinder c1;
    cout << "\n=== 圓柱體資訊（多重繼承） ===" << endl;
    c1.display_circle();
    c1.display_height();
    c1.display_volume();
    return 0;
}

