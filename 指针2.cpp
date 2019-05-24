#include<iostream>
using namespace std;

void main()
{
	int a[][3]={{1,2,3},{4,5,6},{7,8,9}},i,j,(*p)[3];
	for(p=a,i=0;i<3;i++)
		for(j=0;j<3;j++)
			cout<<*(*(p+i)+j)<<'\t'<<*(p[i]+j)<<'\t'<<(*(p+i))[j]<<'\t'<<p[i][j]<<'\t';  //*(p+i)==p[i]所以还不如直接p[i][j]
}