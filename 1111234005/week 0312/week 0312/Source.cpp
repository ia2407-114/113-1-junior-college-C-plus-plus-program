/*�ϥΦh����ƨ÷f�t�w�]�Ѽ�(�Ҭ�)�A�F���U�C�ؼ�:
1. ��J1�Ӿ�ƮɡA�p�⥿������n
2. ��J2�Ӿ�ƮɡA�p���W����n
3. ��J3�Ӿ�ƮɡA�p���������n*/
#include <iostream>

using namespace std;
int volume(int);
double volume(int, double);
int volume(int, double, double);

int main()
{
    int length, radius=0;
    double width, height=0;

    // �p�⥿������n
    cout << "��J1�Ӽ�: \n";
    cin >> length;
    cout << "��������n: " << volume(length);

    // �p���W����n
    cout << "\n��J2�Ӽ�: \n";
    cin >> radius >> height;
    cout << "��W����n: " << volume(radius, height);

    // �p���������n
    cout << "\n��J3�Ӽ�: \n";
    cin >> length >> width >> height;
    cout << "��������n: " << volume(length, width, height) ;

    return 0;

}
int volume(int length)//��������n
{
	return length * length * length;
}
double volume(int radius, double height)//��W����n
{
	return radius * radius * 3.14159 * height;
}
int volume(int length, double width, double height)//��������n
{
	return length * width * height;
}