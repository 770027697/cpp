#include <iostream>
#include<fstream>
using namespace std;

void main()
{
	char b[1024];
	fstream a("my.txt",ios_base::out);
	a << "hhhhhh" << endl;
	a >> b;
	cout << b << endl;
}