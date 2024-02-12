#include<iostream>
using namespace std;
class Set
{
	protected:
	int height,width;
	float area;
	public:
	void set()
	{
		cout<<"Enter Height:";
		cin>>height;
		cout<<"Enter Width:";
		cin>>width;
	}	
};
class Triangle:public Set
{
	public:
	void get()
	{
		set();
		area=height*width*0.5;
		cout<<"Triangle is :"<<area<<endl;
	}
};
class Rectangle:public Set
{
	public:
	void get()
	{
		set();
		area=height*width;
		cout<<"Rectangle is :"<<area;
	}
};
main()
{
	Triangle t1;
	t1.get();
	Rectangle r1;
	r1.get();
}