
#include <iostream>
#define PI 3.14159
using namespace std;

// 計算體積的函數，利用預設參數讓函數多載最精簡
int volume(int a, int b = 0, int c = 0) {
    if (b == 0) return a * a * a;            // 正方體
    if (c == 0) return PI * a * a * b;      // 圓柱體
    return a * b * c;                        // 長方體
}

int main() {
    cout << "正方體體積: " << volume(3) << endl;
    cout << "圓柱體體積: " << volume(3, 5) << endl;
    cout << "長方體體積: " << volume(3, 4, 5) << endl;
    return 0;
}
