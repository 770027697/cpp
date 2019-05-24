#include<iostream>
using namespace std;

void main()
{
	int i,j;
	for(i=0;i<29;i++)//y
		for(j=0;j<120;j++)//x
			if(((i-15)*(i-15))/2==90-((j-60)*(j-60))/8)
				cout<<'*';
		/*	else if(i==j-45)
				cout<<'o';
			else if(i==-(j-75))
				cout<<'o';*/
			else if(j==60)
				cout<<'0';
			else if(i==15)
				for(int a=0;a<1;a++)
					cout<<'0';
				else
					cout<<' ';
}
