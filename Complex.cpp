#include<iostream>
using namespace std;

class Complex
{
	float Real,Image;
public:
	 Complex(float Real=0,float Image=0)
	 {
		 this->Real=Real;
		 this->Image=Image;
	 }

	Complex operator + (Complex& a)
	{
		return Complex(Real+a.Real,Image+a.Image);
	}

	Complex operator + (int a)
	{
		return Complex(Real+a,Image);
	}

	Complex operator - (int a)
	{
		return Complex(Real-a,Image);
	}
	
	Complex operator - (Complex& a)
	{
		return Complex(Real-a.Real,Image-a.Image);
	}

	Complex operator * (int a)
	{
		return Complex(Real*a,Image*a);
	}

	
	Complex operator * (Complex& a)
	{
		return Complex((Real*a.Real)-(Image*a.Image),(Image*a.Real)+(Real*a.Image));
	}

	Complex operator / (int a)
	{
		return Complex((Real*a)/(a*a),(Image*a)/(a*a));
	}
	
	Complex operator / (Complex& a)
	{
		return Complex((Real*a.Real+Image*a.Image)/(a.Image*a.Image+a.Real*a.Real),(Image*a.Real-Real*a.Image)/(a.Image*a.Image+a.Real*a.Real));
	}

	Complex& operator += (Complex& a)
	{
		Real+=a.Real;
		Image+=a.Image;
		return *this;
	}

	Complex& operator -= (Complex& a)
	{
		Real-=a.Real;
		Image-=a.Image;
		return *this;
	}

	int operator == (Complex& a)
	{
		if(Real==a.Real && Image==a.Image)
			return 1;
		else
			return 0;
	}

	int operator != (Complex& a)
	{
		if(Real!=a.Real || Image!=a.Image)
			return 1;
		else
			return 0;
	}

	friend Complex operator + (int a,Complex& b)
	{
		return Complex(a+b.Real,b.Image);
	}

	friend Complex operator - (int a,Complex& b)
	{
		return Complex(a-b.Real,0-b.Image);
	}

	friend Complex operator * (int a,Complex& b)
	{
		return Complex(a*b.Real,a*b.Image);
	}

	friend Complex operator / (int a,Complex& b)
	{
		return Complex((a*b.Real)/(b.Image*b.Image+b.Real*b.Real),(-a*b.Image)/(b.Image*b.Image+b.Real*b.Real));
	}

	void show()
	{
		cout<<Real;
		if(Image>=0)
			cout<<'+'<<Image<<'i'<<endl;
		else
			cout<<Image<<'i'<<endl;
	}
};

int main()
{
	Complex c,c1(1,1),c2(2,2);
	c.show();
	c1.show();
	c2.show();
	cout<<'+'<<endl;
	(c1+c2).show();
	cout<<'-'<<endl;
	(c1-c2).show();
	cout<<'*'<<endl;
	(c1*c2).show();
	cout<<'/'<<endl;
	(c1/c2).show();
	cout<<"+="<<endl;
	(c1+=c2).show();
	cout<<"-="<<endl;
	(c1-=c2).show();
	c2.show();
	cout<<"Complex+int(1)"<<endl;
	(c1+1).show();
	cout<<"(1)int+Complex"<<endl;
	(1+c2).show();
	cout<<"Complex-int(1)"<<endl;
	(c1-1).show();
	cout<<"(1)int-Complex"<<endl;
	(1-c1).show();
	cout<<"Complex*int(2)"<<endl;
	(c1*2).show();
	cout<<"(2)int*Complex"<<endl;
	(2*c1).show();
	cout<<"Complex/int(2)"<<endl;
	(c1/2).show();
	cout<<"(2)int/Complex"<<endl;
	(2/c1).show();
	cout<<"C1==C2"<<endl;
	cout<<int(c1==c2)<<endl;
	cout<<"c1!=c2"<<endl;
	cout<<int(c1!=c2)<<endl;
}