#include <iostream>

using namespace std;

void main()
{
	int i, j, sum;
	for (i = 2; i <= 1000; i++)
	{
		for (j = 2, sum = 1; j <= i / 2; j++)
			if (i%j == 0) sum += j;
		if (sum == i)
		{
			cout << i << "=";
			for (j = 2; j <= i / 2; j++)
				if (i%j == 0) cout << "+" << j;
			cout << endl;
		}
	}
}