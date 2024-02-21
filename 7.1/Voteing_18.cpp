#include<iostream>
using namespace std;

main()
{
	int x,y;
	cout<<"Enter X :";
	cin>>x;
	
	try
	{
		if(x<18)
		{
			throw x;
		}
		else
		{
			cout<<"can Voteing......";
		}
	}
	catch(int a)
	{
		cout<<a<<" You can't Voteing Less 18";
	}
	
		
}