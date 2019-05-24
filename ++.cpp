//cs
#include<iostream>
using namespace std;

class Point
{
	float x,y;
public:
	Point(float x=0,float y=0)
	{
		this->x=x;
		this->y=y;
	}

	Point& operator ++ ()
	{
		x++;
		y++;
		return *this;
	}

	Point operator ++ (int)
	{
		Point t=*this;
		x++;
		y++;
		return t;
	}

	Point& operator -- ()
	{
		x--;
		y--;
		return *this;
	}

	Point operator -- (int)
	{
		Point t=*this;
		x--;
		y--;
		return t;
	}

	void show()
	{
		cout<<"x="<<x<<",y="<<y<<endl;
	}
};

int main()
{
	Point c,c1(1,1);
	cout<<"++c1"<<endl;
	c=++c1;
	c.show();
	c1.show();
	cout<<"c1++"<<endl;
	c=c1++;
	c.show();
	c1.show();
	cout<<"--c1"<<endl;
	c=--c1;
	c.show();
	c1.show();
	cout<<"c1--"<<endl;
	c=c1--;
	c.show();
	c1.show();
}

