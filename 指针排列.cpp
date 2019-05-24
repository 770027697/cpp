#include<iostream>
using namespace std;

void sortn(int [],int);

void main()
{
	int a[5]={5,4,3,2,1};
	for(int i=0;i<5;i++)
		cout<<a[i]<<'\t';
	sortn(a,5);
	cout<<endl;
	for(i=0;i<5;i++)
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