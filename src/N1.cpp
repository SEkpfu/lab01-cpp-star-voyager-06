#define _USE_MATH_DEFINES

#include <iostream>

using namespace std;

int main() {
	setlocale(0, "");
	cout << "������� ������� ��������� � ������ ��������: ";
	double d, h;
	cin >> d >> h;
	cout << M_PI * d * d / 2.0 + d * M_PI * h;
}