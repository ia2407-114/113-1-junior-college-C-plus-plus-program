/*�ϥΦh����ƨ÷f�t�w�]�Ѽ�(�Ҭ�)�A�F���U�C�ؼ�:
1. ��J1�Ӿ�ƮɡA�p�⥿������n
2. ��J2�Ӿ�ƮɡA�p���W����n
3. ��J3�Ӿ�ƮɡA�p���������n*/
#include<iostream>
using namespace std;
    int aa(int);
	int aa(int, int);
	int aa(int, int,int);
	int main(void) {
		int r = 0;
		int h = 0;
		int w = 0;
		cout << "�п�J�@�Ӿ��\n";
		cin >> r;
		cout << "�������n:"<<aa(r);

		cout << "\n�п�J�G�Ӿ��\n";
		cin >> r >> h;
		cout << "��W����n:" << aa(r,h);

		cout << "\n�п�J�T�Ӿ��\n";
		cin >> r >> h >> w;
		cout << "��������n:" << aa(r, h,w);
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
		


