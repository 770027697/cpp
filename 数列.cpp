#include <iostream>

using namespace std;

void main() {
	int n, y[21];
	for (n = 0; n < 20; n++) {
		if (n == 0)
			y[n] = 0;
		if (n == 1)
			y[n] = 1;
		if (n >= 2)
			y[n] = y[n - 1] + y[n - 2];
		cout << y[n] << endl;
	}
}