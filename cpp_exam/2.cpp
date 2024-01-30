#include<iostream>
using namespace std;
class feet
{
	public:
	int f1,i1,f2,i2;
	int convert()
	{
		cout<<"enter your f0";
		cin>>f1;
		cout<<"enter your i0";
		cin>>i1;
		cout<<"enter your f1";
		cin>>f2;
		cout<<"enter your i1";
		cin>>i2;
		f1=f1+(i1/12);
		i1=i1%12;
		
		f2=f2+(i2/12);
		i2=i2%12;
		cout<<endl;
		cout<<"feet "<<f1+f2<<"ince "<<i1+i2;
	}
		
};
main()
{
	class feet f1;


	   	f1.convert();
	   	

}
