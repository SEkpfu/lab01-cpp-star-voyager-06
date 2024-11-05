#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(0, "");
	cout << "¬ведите три числа: ";
	int a, b, c;
	cin >> a >> b >> c;
	int s{ a + b + c };
	s * s % 2 == 0 ? cout << min(a, c) : cout << s << "\t" << a * b * c;
}