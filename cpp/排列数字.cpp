#include <iostream>

using namespace std;

int main() {
	char a, b, c, max1, max2, max3;
	cin >> a >> b >> c;
	max1 = (a > b ? a : b) > c ? (a > b ? a : b) : c;
	max3 = (a < b ? a : b) < c ? (a < b ? a : b) : c;
	max2 = (a + b + c) - (max1 + max3);
	cout << max1 << max2 << max3 << endl;
	main();
	return 0;
}