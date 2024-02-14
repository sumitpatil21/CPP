#include<iostream>
using namespace std;
class A
{
	protected :
		int a,b,c,d,e;
		public:
	void cal(int a,int b)
	{
		this->a=a;
		this->b=b;
		cout<<"Division:"<<a/b<<endl;
	}
	void cal(int a,int b,int c)
	{
		this->a=a;
		this->b=b;
		this->c=c;
		cout<<"Subtraction:"<<a-b-c<<endl;
	}
	void cal(int a,int b,int c,int d)
	{
		this->a=a;
		this->b=b;
		this->c=c;
		this->d=d;
		cout<<"Multiplication:"<<a*b*c*d<<endl;
	}
	void cal(int a,int b,int c,int d,int e)
	{
		this->a=a;
		this->b=b;
		this->c=c;
		this->d=d;
		this->e=e;
		cout<<"Addition:"<<a+b+c+d+e<<endl;
	}
};
main()
{
	A a1;
	a1.cal(100,20);
	a1.cal(100,200,30);
	a1.cal(10,20,30,40);
	a1.cal(10,20,30,40);
	a1.cal(10,20,30,40,50);
}