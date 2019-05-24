#include <iostream>

using namespace std;

void main() {
	int x, y;
	cout << "ÇëÊäÈëX:";
	cin >> x;
	if ((x >= -5 && x <= 5) && x != 0)
		y = x - 1;
	else if (x > 5 && x <= 10)
		y = x + 5;
	else if (x == 0) y = x + 1;
	else y = 100;
	cout << "y=" << y << endl;
}