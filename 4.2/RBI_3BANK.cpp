#include<iostream>
using namespace std;
class RBI
{
	protected:
	int rate;
	public:
	void set()
	{
		cout<<"ENTER BANK RATE:";
		cin>>rate;
	}
};
class SBI:public RBI
{
	public:
	get()
	{
		set();
		cout<<"ICICI intrest is : "<<rate<<endl;
	}
};
class BOB:public RBI
{
	public:
	get()
	{
		set();
		cout<<"ICICI intrest is : "<<rate<<endl;
	}
};
class ICICI:public RBI
{
	public:
	get()
	{
		set();
		cout<<"ICICI intrest is : "<<rate<<endl;
	}
};
main()
{
	SBI s1;
	s1.get();
	BOB b1;
	b1.get();
	ICICI i1;
	i1.get();
}