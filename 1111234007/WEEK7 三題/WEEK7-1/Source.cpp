#include <iostream>
using namespace std;

 // 計算階乘的函式
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
    cout << "請輸入 n 值 (展開項數): ";
    cin >> n;

    double e_approximation = 1.0; // e 的近似值，從 1 開始

    // 計算 e 的近似值
    for (int i = 1; i <= n; ++i) {
        e_approximation += 1.0 / factorial(i);
    }

    cout << "e 的近似值（前 " << n << " 項展開）是: " << e_approximation << endl;

    return 0;
}