#include <iostream>

using namespace std;
int sum();

int main()
{
	cout << "1*1+2*2+3*3+n*n<1000" << '\n' << "n=";
	cout << sum() << endl;
	return 0;
}

int  sum()
{
	int sum = 0, i;
	for (i = 1;; i++)
	{
		sum += i * i;
		if (sum > 1000) return i - 1;
	}
	return 0;
}