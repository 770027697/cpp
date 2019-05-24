#include<iostream>
#include<cmath>
using namespace std;

class Point
{
    public:
    float x,y;
    Point(float x=0,float y=0)
    {
        this->x=x;
        this->y=y;
    }
};

class Line:public Point
{
    Point point2;
    public:
    Line(float x1,float y1,float x2,float y2):Point(x1,y1),point2(x2,y2)
    {}
    float length()
    {
        return sqrt((point2.x-x)*(point2.x-x)+(point2.y-y)*(point2.y-y));
    }
};

int main()
{
    Line l1(0,0,3,3);
    cout<<l1.length()<<endl;
}