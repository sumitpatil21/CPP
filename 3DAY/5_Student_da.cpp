#include<iostream>
using namespace std;
class Student
{
	int id,age;
	string name,course,city,email,collage,line;
	public :
	void set(int x)
	{
		cout<<endl;
		cout<<"Student:"<<x<<endl;
		cout<<endl;
		cout<<"enter your ID:";
		cin>>id;
		getline(cin,line);
		cout<<"enter your Name:";
		getline(cin,name);
		
		cout<<"enter your Age:";
		cin>>age;
		
		getline(cin,line);
		cout<<"enter your Course:";
		getline(cin,course);
		
		getline(cin,line);
		cout<<"enter your Email:";
		getline(cin,email);
		
		getline(cin,line);
		cout<<"enter your City:";
		getline(cin,city);
		
		getline(cin,line);
		cout<<"enter your Collage:";
		getline(cin,collage);
	}
	void get()
	{
		cout<<endl;
		cout<<"Id:"<<id<<endl;
		cout<<"Name:"<<name<<endl;
		cout<<"Course:"<<course<<endl;
		cout<<"Email:"<<email<<endl;
		cout<<"City:"<<city<<endl;
		cout<<"Collage:"<<collage<<endl;
		cout<<endl;
	}	
};
main()
{
	class student s[5];
	int i,x=1;
	for(i=0;i<5;i++)
	{
		s[i].set(x);
		s[i].get();
		x++;
	}
}