
#include <iostream>
#define PI 3.14159
using namespace std;

// �p����n����ơA�Q�ιw�]�Ѽ�����Ʀh���̺�²
int volume(int a, int b = 0, int c = 0) {
    if (b == 0) return a * a * a;            // ������
    if (c == 0) return PI * a * a * b;      // ��W��
    return a * b * c;                        // ������
}

int main() {
    cout << "��������n: " << volume(3) << endl;
    cout << "��W����n: " << volume(3, 5) << endl;
    cout << "��������n: " << volume(3, 4, 5) << endl;
    return 0;
}
