#include <iostream>
#include <cmath>
using namespace std;
int fact(int a) {
	int fc=1;
	for (int i = 2; i <= a; i++) {
		fc *= i;
	}
	return fc;
}
double S(int n, int x) {
	if (n == 0) { return 1; };
	if (n > 0) {
		return S(n - 1, x) + (pow(x, 2 * n) / fact(2 * n));
	}
}

int main() {
	int n, x;
	cin >> n >> x;
	cout << S(n, x) << endl;
	system("pause");
}