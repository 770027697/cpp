					   #include < iostream >
using namespace std;
void print_triangle(char c, int n)
{
	int i, j;
	for(i=0; i< n; i++)
	{
		for(j=0; j<=i; j++)
		{
			cout<< c;
		}
		cout<< endl;
	}
}
void main()
{
	print_triangle('g',10);
}