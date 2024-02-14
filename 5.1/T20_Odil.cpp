#include<iostream>
using namespace std;
class Cricket
{
	protected :
		int over;
};
class T20:public Cricket
{
	public:
	void get(int over)
	{
		this->over=over;
		cout<<"T20_over:"<<over<<endl;
	}
};
class Odi:public Cricket
{
	public:
	void get(int over)
	{
		this->over=over;
		cout<<"ODI_over:"<<over;
	}
};
main()
{
	T20 t1;
	Odi o1;
	t1.get(20);
	o1.get(50);
}