#include <iostream>

#include<cmath>
using namespace std;

void main() {
	int a, b, c;
	cin >> a;
	c = sqrt(a);
	for (b = 2; b <= c; b++)
		if (a%b == 0) break;
	if (b > c) cout << a << "������" << endl;
	else cout << a << "��������" << endl;
	main();
}