#include<iostream>
using namespace std;
class Add
{
	int a,b;
	public:
	void set()
	{
		cout<<"Enter A:";
		cin>>a;
		cout<<"Enter B:";
		cin>>b;	
	}
	void get()
	{
		cout<<"A:"<<a<<endl;
		cout<<"B:"<<b<<endl;
	}
	Add operator+(Add&a2)
	{
		int x,y;	
		x=this->a+a2.a;
		y=this->b+a2.b;
		Add temp;
		temp.a=x;
		temp.b=y;
		
		return temp;
	}
};
main()
{
	Add a1,a2,a3;
	a1.set();
	a2.set();
	a3=a1+a2;
	a3.get();
}