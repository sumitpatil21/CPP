#include<iostream>
using namespace std;
class Div
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
	Div operator/(Div&d2)
	{
		int x,y;
		x=this->a/d2.a;
		y=this->b/d2.b;
		Div temp;
		temp.a=x;
		temp.b=y;
		return temp;
	}
};
main()
{
	Div d1,d2,d3;
	d1.set();
	d2.set();
	d3=d1/d2;
	d3.get();
	
}