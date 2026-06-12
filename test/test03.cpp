#include <iostream>
#include <string>
using namespace std;

int main() {
	int a, b ,c;


	cout << "Input size of matrix: ";
	cin >> a >> b >> c;

	if (b > c) {
		int t = b;
		b = c;
		c = t;
	}

	if (a > b) {
		int t = a;
		a = b;
		b = t;
	}

		


	return 0;
}
