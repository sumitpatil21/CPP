#include<iostream>
using namespace std;
class Max
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
	void sum()
	{
		cout<<"A(m1a + m2a):"<<a<<endl;
		cout<<"B(m2b + m2b):"<<b<<endl<<endl;
	}
	void get()
	{
		if(a>b)
		{
			cout<<"A:"<<a<<endl;	
		}
		else
		{
			cout<<"B:"<<b<<endl;
		}
	}
	Max operator+(Max&m2)
	{
		int x,y;
		x=this->a+m2.a;
		y=this->b+m2.b;
		Max temp;
		temp.a=x;
		temp.b=y;
		return temp;
	
		
	}
};
main()
{ 
	Max m1,m2,m3;
	m1.set();
	m2.set();
	m3=m1+m2;
	m3.sum();
	m3.get();
	
}
