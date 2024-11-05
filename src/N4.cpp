#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(0, "");
	cout << "¬ведите х: ";
	double x;
	cin >> x;
	if (x <= 0) cout << (pow(x, 3) - 5) / (x - 1);
	else if (x > 7) cout << sqrt(x * x + 1);
	else cout << 74.0 / 7.0;
}