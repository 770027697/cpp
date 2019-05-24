#include <iostream>
using namespace std;

void main() {
	int x = 0, a = 0, b = 0, c = 0, d = 0, e = 0;
	for (cin >> x; 0 <= x && x <= 100; cin >> x) {
		if (x >= 90) a++;
		else if (x >= 80) b++;
		else if (x >= 70) c++;
		else if (x >= 60) d++;
		else e++;
	}
	cout << "各分数段人数统计结果:\n"
		<< "A:" << a << "人\n"
		<< "B:" << b << "人\n"
		<< "C:" << c << "人\n"
		<< "D:" << d << "人\n"
		<< "E:" << e << "人\n";
}