#include<iostream>
using namespace std;
class X
{
	protected:
		int a,b,c,sum;
};
class Y:public X
{
	public:
	void set()
	{
		cout<<"Enter A:";
		cin>>a;	
		cout<<"Enter B:";
		cin>>b;
		cout<<"Enter C:";
		cin>>c;
	}
	void get()
	{
		sum=(a*a*a)+(b*b*b)+(c*c*c);
		cout<<"sum is :"<<sum;
	}
};
main()
{
	Y y1;
	y1.set();
	y1.get();
}