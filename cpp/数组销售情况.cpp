#include <iostream>

using namespace std;

void main()
{
	int shu[8] = { 12,21,36,10,13,24,34,17 }, i;
	float dan[8] = { 3.5,46.9,7.6,36.9,55.8,92.7,13.5,42.9 }, sum = 0;
	for (i = 0; i < 8; i++)
		sum += shu[i] * dan[i];
	cout << "总今天的销售额为:" << sum << endl;
}