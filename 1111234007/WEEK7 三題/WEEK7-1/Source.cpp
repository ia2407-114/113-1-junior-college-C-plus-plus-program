#include <iostream>
using namespace std;

 // �p�ⶥ�����禡
 unsigned long long factorial(int x) 
{
    unsigned long long result = 1;
    for (int i = 1; i <= x; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    cout << "�п�J n �� (�i�}����): ";
    cin >> n;

    double e_approximation = 1.0; // e ������ȡA�q 1 �}�l

    // �p�� e �������
    for (int i = 1; i <= n; ++i) {
        e_approximation += 1.0 / factorial(i);
    }

    cout << "e ������ȡ]�e " << n << " ���i�}�^�O: " << e_approximation << endl;

    return 0;
}