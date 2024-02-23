#include<iostream>
using namespace std;
class Area
{
	public:
	virtual	void calculate()=0;

};
class Circle:public Area
{
	public:
	void calculate()
	{
		int rad;
		cout<<".....circleArea....."<<endl;
		cout<<"Enter rad :";
		cin>>rad;
		float circleArea= 3.14*rad*rad; 	
		cout<<"circleArea:"<<circleArea<<endl; 
	}	
};
class Triangle:public Area
{
	public:
	void calculate()
	{
		cout<<"........triangleArea........"<<endl;
		
		int base,height;
		cout<<"Enter base :";
		cin>>base;
		cout<<"Enter height :";
		cin>>height;
		float triangleArea=(base * height) / 2 ; 	
		cout<<"triangleArea:"<<triangleArea<<endl; 
	}	
};
class Rectangle:public Area
{
	public:
	void calculate()
	{
		int l,w;
		cout<<".........rectangleArea........."<<endl;
		cout<<"Enter l :";
		cin>>l;
		cout<<"Enter w :";
		cin>>w;
		float rectangleArea=l*w; 	
		cout<<"circleArea:"<<rectangleArea<<endl; 
	}	
};
main()
{
	Circle c1;
	c1.calculate();
	Triangle t1;
	t1.calculate();
	Rectangle r1;
	r1.calculate();
}