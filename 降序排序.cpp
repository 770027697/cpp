#include <iostream>

using namespace std;

void mppxf(float a[], int size)//½µÐò
{
	int i = 0, j;
	float t;
	for (i = 1; i < size; i++)
		for (j = 0; j < size - i; j++)
			if (a[j] < a[j + 1])
			{
				t = a[j]; a[j] = a[j + 1]; a[j + 1] = t;
			}
}

void main()
{
	float a[5];
	int size = 0, i;
	for (i = 0; i < 5; i++)
		cin >> a[i];
	size = sizeof(a) / sizeof(a[0]);
	mppxf(a, size);
	for (i = 0; i < size; i++)
		cout << a[i] << ' ';
	cout << endl;
	for (i = 4; i > -1; i--)
		cout << a[i] << ' ';
	cout << endl;
}