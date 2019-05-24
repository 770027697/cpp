//测试
#include<iostream>
using namespace std;

void sortn(int a[],int b);
void sort3(int*a, int*b, int*c);

void main()
	{							  
	int a[10],i;
	cout<<"请输入10个实数"<<endl;
	for(i=0;i<10;i++)
		cin>>a[i];
	sort3(&a[0],&a[1],&a[2]);
	sortn(&a[3],7);
	for(i=0;i<10;i++)
		cout<<a[i]<<'\t';
	}

void sortn(int a[],int b)
{
	int i,j;
	for(j=0;j<b-1;j++)
		for(i=0;i<b-1;i++)
			if(a[i]>a[i+1])
			{
				int c=a[i];
				a[i]=a[i+1];
				a[i+1]=c;
			}
}

void sort3(int*a, int*b, int*c)
{
	if (*a > *b) { int d = *a; *a = *b; *b = d; }
	if (*b > *c) { int d = *b; *b = *c; *c = d; }
	if (*a > *b) { int d = *a; *a = *b; *b = d; }
}
