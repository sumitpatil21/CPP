#include<iostream>
using namespace std;
class set
{
	protected:
	int x;
	public:
	void input()
	{
			cout<<"enter your value:";
			cin>>x;
	}
};
class square:public set
{
	protected:
	int square;
	public:
	void get()
	{
		input();
		square=x*x;
		cout<<"square:"<<square<<endl;
	}
};
class cube:public set
{
	protected:
	int cube;
	public:
	void get()
	{
		input();
		cube=x*x*x;
		cout<<endl<<"cube:"<<cube;
	}
};


main()
{
	square s1;
	s1.get();
	cube c1;
	c1.get();
	
}