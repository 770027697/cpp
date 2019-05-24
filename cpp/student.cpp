#include<iostream>
#include<cstring>
using namespace std;

class student
{
	char name[10];
	int id;
	float english,math,total;
	static int nuber;
	static float englishaver,mathaver;
public:
	student()
	{
		english=0;
		math=0;
		total=0;
		nuber++;
	};

	~student()
	{
		englishaver-=english;
		mathaver-=math;
		nuber--;
	}

	void input(char* name,int id,float english,float math)
	{
		strcpy(this->name,name);
		this->id=id;
		setenma(english,math);
		gettotal();
	}

	void setenma(float english,float math)
	{
		englishaver-=this->english;
		mathaver-=this->math;
		this->english=english;
		this->math=math;
		englishaver+=english;
		mathaver+=math;
	}

	float gettotal()
	{
		total=english+math;
		return total;
	}

	static float getenav()
	{
		return englishaver/nuber;
	}

	static float getmaav()
	{
		return mathaver/nuber;
	}

	void show()
	{
		cout<<"ѧ������:"<<name<<"\tѧ��:"<<id<<"\tӢ��ɼ�:"<<english<<"\t��ѧ�ɼ�:"<<math<<"\t�ܳɼ�"<<total<<endl;
	}
};
int student::nuber=-1;
float student::englishaver=0,student::mathaver=0;

int main()
{
	char name[10];
	int id,n,i,j,k;
	float english,math;
	student t;
	cout<<"������༶����:";
	cin>>n;
	student*a = new student[n];
	for(i=0;i<n;i++)
	{
		cout<<"���������"<<i+1<<"ѧ��������\tѧ��\tӢ��ɼ�\t��ѧ�ɼ�"<<endl;
		cin>>name>>id>>english>>math;
		a[i].input(name,id,english,math);
	}
	cout<<"Ӣ��ƽ���ɼ�Ϊ:"<<student::getenav()<<endl;
	cout<<"��ѧƽ���ɼ�Ϊ:"<<student::getmaav()<<endl;
	for(i=0;i<n;i++)
	{
		for(k=i,j=i+1;j<n;j++)
			if(a[k].gettotal()>a[j].gettotal())
				k=j;
			if(k!=i)
			{
				t=a[i];
				a[i]=a[k];
				a[k]=t;
			}
	}
	int x=n*0.2;
	cout<<"�ɼ�λ���ܳɼ�20%���µ�ͬѧ��Ϣ:"<<endl;
	cout<<"����\tѧ��\tӢ��ɼ�\t��ѧ�ɼ�\t�ܳɼ�"<<endl;
	for(i=0;i<x;i++)
		a[i].show();
}