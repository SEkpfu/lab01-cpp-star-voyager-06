#include <iostream>

using namespace std;

static int multiply(int a, int b) {
	if (b == 1) return a;
	else return a * multiply(a, b - 1);
}

int main() {
	setlocale(0, "");
	cout << "¬ведите x: ";
	int x;
	cin >> x;
	cout << multiply(x, 3) * (multiply(x, 11) - multiply(x, 2) + 1) - 2 << endl;
}