#include<iostream>
#include<cstring>

using namespace std;

class A
{
    protected:
    char *s;
    public:
    A(const char * sc)
    {
        s = new char[strlen(sc)];
        strcpy(s,sc);
    }
    ~A()
    {
        delete s;
    }
};

class B:virtual public A
{
    protected:
    int n;
    public:
    B(const char *sc="",const int i =0):A(sc)
    {
        n=i;
    }
};

class C:virtual public A
{
    protected:
    char *p;
    public:
    C(const char *sc="",const char *pc=""):A(sc)
    {
        p = new char[strlen(pc)];
        strcpy(p,pc);
    }
    ~C()
    {
        delete p;
    }
};

class D:virtual public A,public B,public C
{
    public:
    D(const char *s="",const int n=0,const char *p=""):A(s),B(s,n),C(s,p){}
    void print()
    {
        cout<<s<<','<<n<<','<<p<<endl;
    }
};

int main()
{
    D *pd=new D("VC++",6,"Programming");
    pd->print();
    delete pd;
}