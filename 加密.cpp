#include <iostream>

using namespace std;

int jm(char a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		if (a[i] < 0)
		{
			char b = a[i];
			a[i] = a[i + 1];
			a[i + 1] = b;
			i++;
		}
	return 0;
}

int main() {
	char s[1024], n;
	cin >> s;
	n = strlen(s);
	jm(s, n);
	cout << s << endl;
	jm(s, n);
	cout << s << endl;
	return 0;
}