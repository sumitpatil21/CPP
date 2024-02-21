#include<iostream>
#include<string>
using namespace std;

main()
{
	int i,l,ch=0;
	char pass[32];
	start:
	cout<<"Enter Password :";
	gets(pass);
	
	l=strlen(pass);
	
	for(i=0;i<l;i++)
	{
		if(pass[i]>='A'&& pass[i]<='Z')
		{
			ch=1;
		}
	}
	try
	{
		if(ch==0)
		{
			throw pass;
		}
		else
		{
			cout<<pass<<" Vaildated Password....."<<endl;	
		}
	}
	catch(...)
	{
		cout<<pass<<" Enter A Vaildated Password....."<<endl;
		goto start;
	}
	
		
}