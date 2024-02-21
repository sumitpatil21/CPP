#include<iostream>
using namespace std;

main()
{
	int x,y;
	cout<<"Enter X :";
	cin>>x;
	cout<<"Enter Y :";
	cin>>y;
	
	try
	{
		if(y==0)
		{
			throw y;
		}
		else
		{
			cout<<"DIV :"<<x/y<<endl;
		}
	}
	catch(int a)
	{
		cout<<a<<" can't divide";
	}
	
		
}