#include<iostream>
using namespace std;

class Dist
{
	int km,meter;
	public:
	void set()
	{
		cout<<"Enter KM:";
		cin>>km;
		cout<<"Enter METER:";
		cin>>meter;
	}
	void get()
	{
		cout<<"KM:"<<km<<endl;
		cout<<"METER:"<<meter<<endl;
	}
	Dist operator+(Dist&d2)
	{
		int x,y;
		x=(this->km+d2.km)+(this->meter+d2.meter)/1000;
		y=(this->meter+d2.meter)%1000;
		Dist temp;
		temp.km=x;
		temp.meter=y;
		return temp;
	}
};
main()
{
	Dist d1,d2,d3;
	d1.set();
	d2.set();
	d3=d1+d2;
	d3.get();
	
}