#include<iostream>
using namespace std;
class Customer
{
	int id,age;
	string name,course,city,mobile_number,telecom_brand_name,simcard_validity,line;
	public :
	void set(int x)
	{
		cout<<endl;
		cout<<"Customer:"<<x<<endl;
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
		cout<<"enter your mobile_number:";
		getline(cin,mobile_number);
		
		getline(cin,line);
		cout<<"enter your Telecom_brand_name:";
		getline(cin,telecom_brand_name);
		
		getline(cin,line);
		cout<<"enter your simcard_validity:";
		getline(cin,simcard_validity);
	}
	void get()
	{
		cout<<endl;
		cout<<"Id:"<<id<<endl;
		cout<<"Name:"<<name<<endl;
		cout<<"Course:"<<course<<endl;
		cout<<"Email:"<<email<<endl;
		cout<<"City:"<<city<<endl;
		cout<<"mobile_number:"<<mobile_number<<endl;
		cout<<"telecom_brand_name:"<<telecom_brand_name<<endl;
		cout<<"simcard_validity:"<<simcard_validity<<endl;
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
