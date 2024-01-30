#include<iostream>
using namespace std;
class Feet
{
	public:
	int h,m,s,x;
	int convert()
	{
		cout<<"enter your value:";
		cin>>s;
		h = s / 3600;
		s =(s % 3600);//60
		m = (s/60);//1
		s =(s%60);//0
		cout<< h << " : "<< m<< " : "<< s;	
	}
};
main()
{
	int i;
	class Feet f1;
	
		f1.convert();
	
}
