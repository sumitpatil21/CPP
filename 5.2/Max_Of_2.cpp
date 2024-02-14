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
	void get()
	{
		cout<<"A:"<<a<<endl;
		cout<<"B:"<<b<<endl;
	}
	Max operator<(Max&m1)
	{
		int x,y;
		x=this->a;
		y=this->b;
		Max temp;
		if(x>y)
		{
			temp.a=x;
		}
		else
		{
			temp.b=y;
		}
		return temp;
	}
};
main()
{
	Max m1,m2,m3;
	m1.set();
	m2.get();
	
}