#include<iostream>
using namespace std;
class T
{
	protected:
		float tem;
};
class F:public T
{
	protected :
	float f;
	public:
	void set()
	{
		cout<<"Enter tem:";
		cin>>tem;	
	}
	void get()
	{
		f=(9/5*tem)+32;
		cout<<"Fahrenheit is :"<<f;
	}
};
class K:public F
{
	protected :
	float k;
	public:
	void get()
	{
		k=(f-32)*5/9+273.15;
		cout<<"Kelvin is :"<<k;
	}
};
main()
{
	F f1;
	K k1;
	f1.set();
	f1.get();
	k1.get();
}