#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.14159265358979323846; 
double calculateVolume(int length);
double calculateVolume(int radius, int height);
double calculateVolume(int length, int width, int height);

double calculateVolume(int length) {
    return pow(length, 3); 
}

double calculateVolume(int radius, int height) {
    return PI * pow(radius, 2) * height;
}

double calculateVolume(int length, int width, int height) {
    return length * width * height; 
}

int main() {
    int a, b, c;
    int numInputs;

    cout << "��J�Ʀr���Ӽ� (1-3): ";
    cin >> numInputs;

    if (numInputs == 1) {
        cout << "��J�����骺���: ";
        cin >> a;
        cout << "��������n: " << calculateVolume(a) << endl;
    }
    else if (numInputs == 2) {
        cout << "��J��W�骺�b�|�M����: ";
        cin >> a >> b;
        cout << "��W����n: " << calculateVolume(a, b) << endl;
    }
    else if (numInputs == 3) {
        cout << "��J�����骺���B�e�M��: ";
        cin >> a >> b >> c;
        cout << "��������n: " << calculateVolume(a, b, c) << endl;
    }
    else {
        cout << "�L�Ī���J" << endl;
    }

    return 0;
}
