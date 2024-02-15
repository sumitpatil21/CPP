#include<iostream>
using namespace std;
class Train
{
	int time;
	string name,source,destination;

	public:
	int num; 
	void set()
	{
		cout<<"Enter train num:";
		cin>>num;
		cin.ignore();
		cout<<"Enter train name:";
		getline(cin,name);
		cout<<"Enter train source:";
		getline(cin,source);
		cout<<"Enter train destination:";
		getline(cin,destination);
		cout<<"Enter train time:";
		cin>>time;
		cin.ignore();
		
		cout<<endl;
	}
	void get()
	{
		cout<<endl<<"Train Num:"<<num<<endl;
		cout<<"Train Name:"<<name<<endl;
		cout<<"Train source:"<<source<<endl;
		cout<<"Train destination:"<<destination<<endl;
		cout<<"Train time:"<<time<<endl;	
	}	
};
main()
{
	int n;
	cout<<"Enter Train Number:";
	cin>>n;
	Train t[n];
	int i,j;
	for(i=0;i<n;i++)
	{
		t[i].set();
	}
	cout<<"Enter your need date train:";
	cin>>j;
	for(i=0;i<n;i++)
	{
		if(j==t[i].num)
		{
			t[i].get();
		}
	}
}