/*使用多載函數並搭配預設參數(皆為)，達成下列目標:
1. 輸入1個整數時，計算正方體體積
2. 輸入2個整數時，計算圓柱體體積
3. 輸入3個整數時，計算長方體體積*/
#include<iostream>
using namespace std;
    int aa(int);
	int aa(int, int);
	int aa(int, int,int);
	int main(void) {
		int r = 0;
		int h = 0;
		int w = 0;
		cout << "請輸入一個整數\n";
		cin >> r;
		cout << "正方形體積:"<<aa(r);

		cout << "\n請輸入二個整數\n";
		cin >> r >> h;
		cout << "圓柱體體積:" << aa(r,h);

		cout << "\n請輸入三個整數\n";
		cin >> r >> h >> w;
		cout << "長方體體積:" << aa(r, h,w);
}
	int aa(int r) {
		return r * r * r;
}
	int aa(int r, int h) {
		return r * r *h* 3.14159;
	}
	int aa(int r, int w, int h){
		return r * w * h;
	}
		


