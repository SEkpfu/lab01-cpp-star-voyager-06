#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(0, "");
	cout << "¬ведите n: ";
	int n, a{};
	cin >> n;
	double s{};
	for (int i{ 1 }; i <= n; i++) {
		s += sin(a + i);
		a += i;
	}
	cout << s;
}