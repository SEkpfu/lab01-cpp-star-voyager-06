#include <iostream>

using namespace std;

static bool is_inside(double& x, double& y) {
	if (x >= 0 && y >= 0 && (x * x + y * y <= 36)) return 1;
	else if (x <= 0 && y >= 0 && y <= 2 * x + 6) return 1;
	else if (x <= 0 && y <= 0 && y >= -2 * x - 6) return 1;
	else if (x >= 0 && y <= 0 && y >= x - 6) return 1;
	else return 0;
}

int main() {
	setlocale(0, "");
	cout << "Введите количество точек: ";
	int n;
	cin >> n;
	double* arr{ new double[n * 2] };
	cout << "Попарно вводите координаты точек: ";
	for (double* i{ arr }; i < arr + n * 2; i++) cin >> *i;
	for (double* i{ arr }; i < arr + n * 2; i += 2) {
		if (is_inside(*i, *(i + 1))) cout << "YES" << "\t";
		else cout << "NO" << "\t";
	}
	delete arr;
}