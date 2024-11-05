#include <iostream>

using namespace std;

int main() {
	setlocale(0, "");
	cout << "¬ведите количество чисел: ";
	int n, p{ 1 }, cnt{}, s{};
	cin >> n;
	int* arr{ new int[n] };
	cout << "¬ведите числа: ";
	for (int* i{ arr }; i < arr + n; i++) cin >> *i;
	for (int* i{ arr }; i < arr + n; i++) {
		if ((*i % 10 == 1) || (*i % 10 == 9)) p *= *i;
		int t{ *i };
		while (t >= 100) t /= 10;
		if (t == 22) cnt++;
		else if (t == 10) s += *i;
	}
	if (p == 1) printf("0\t%i\t%i", cnt, s);
	else printf("%i\t%i\t%i", p, cnt, s);
}