#include<iostream>
using namespace std;
class tct
{
	int age ;
	float a,b;
	string pass;
	public:
	void agech()
	{
		cout<<endl<<endl<<"age:"<<endl;
		cout<<"Enter Your age :";
		cin>>age;
		try
		{
			if(age<18)
			{
				throw 0;
			}
			else 
			{
				cout<<"Your Age is Valid........"<<endl;
			}
		}
		catch(int a)
		{
			cout<<"Your age is not Valid..........";
		}
	}
	public:
	void divch()
	{
		cout<<endl<<endl<<"div:"<<endl;
		cout<<"Enter A :";
		cin>>a;
		cout<<"Enter B :";
		cin>>b;
		
		try
		{
			if(b==0)
			{
				throw b;
			}
			else
			{
				cout<<"Div is :"<<a/b;
			}
		}
		catch(float b)
		{
			cout<<"B is not valid..."<<b<<endl;
		}
	}
	public:
	void passch()
	{
		cout<<endl<<endl<<"Password:"<<endl;
		cout<<"enter your password:";
		cin>>pass;
		int ch=0;
		for(int i=0;i<pass.length();i++)
		{
			if(pass[i]>='A'&&pass[i]<='Z')
			{
				ch=1;
				break;
			}
		}
		try
		{
			if(ch==1)
			{
				cout<<"Password Is Vaild ....";
			}
			else
			{
				throw pass;
			}
		}
		catch(string pass)
		{
			cout<<"Enter one captial word........."<<pass;
		}
	}
};
main()
{
	tct s1;
	s1.agech();
	s1.passch();
	s1.divch();
}