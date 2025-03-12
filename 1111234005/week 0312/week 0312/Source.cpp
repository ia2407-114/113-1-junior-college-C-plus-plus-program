/*使用多載函數並搭配預設參數(皆為)，達成下列目標:
1. 輸入1個整數時，計算正方體體積
2. 輸入2個整數時，計算圓柱體體積
3. 輸入3個整數時，計算長方體體積*/
#include <iostream>

using namespace std;
int volume(int);
double volume(int, double);
int volume(int, double, double);

int main()
{
    int length, radius=0;
    double width, height=0;

    // 計算正方體體積
    cout << "輸入1個數: \n";
    cin >> length;
    cout << "正方體體積: " << volume(length);

    // 計算圓柱體體積
    cout << "\n輸入2個數: \n";
    cin >> radius >> height;
    cout << "圓柱體體積: " << volume(radius, height);

    // 計算長方體體積
    cout << "\n輸入3個數: \n";
    cin >> length >> width >> height;
    cout << "長方體體積: " << volume(length, width, height) ;

    return 0;

}
int volume(int length)//正方體體積
{
	return length * length * length;
}
double volume(int radius, double height)//圓柱體體積
{
	return radius * radius * 3.14159 * height;
}
int volume(int length, double width, double height)//長方體體積
{
	return length * width * height;
}