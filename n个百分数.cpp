#include <iostream>
using namespace std;

void main() {
	int a, b, sum = 0;
	for (cin >> a; 0 <= a && a <= 100; cin >> a)
		sum += a;
	cout << "总成绩" << sum << endl;
	cout << "平均成绩" << float(sum / 5) << endl;
}