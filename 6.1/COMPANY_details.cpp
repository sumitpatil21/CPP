#include<iostream>
using namespace std;
class A
{
	protected:
	string company_name="LNT Company";
	int manager_salary=200000,employee_salary=100000,total_staff=100,total_revenue=1000000000,can_terminate=30;
	public:
	void get()
	{
		cout<<".........->ADMIN<-........"<<endl;
		cout<<"company_name :"<<company_name<<endl;
		cout<<"manager_salary :"<<manager_salary<<endl;
		cout<<"employee_salary :"<<employee_salary<<endl;
		cout<<"total_staff :"<<total_staff<<endl;
		cout<<"total_revenue :"<<total_revenue<<endl;
		cout<<"can_terminate :"<<can_terminate<<endl;
	}
};
class M:public A
{
	public:
	void get()
	{
		cout<<".........->MANAGER<-........"<<endl;
		cout<<"company_name :"<<company_name<<endl;
		cout<<"manager_salary :"<<manager_salary<<endl;
		cout<<"employee_salary :"<<employee_salary<<endl;
		cout<<"total_staff :"<<total_staff<<endl;
		cout<<"can_terminate :"<<can_terminate<<endl;
	}	
};
class E:public M
{


	public:

	void get()
	{
		cout<<".........->EMPLOYEE<-........"<<endl;
		cout<<"company_name :"<<company_name<<endl;
		cout<<"employee_salary :"<<employee_salary<<endl;
		cout<<"total_staff :"<<total_staff<<endl;
	}	
	
};
main()
{
	A a1;
	a1.get();
	M m1;
	m1.get();
	E e1;
	e1.get();
	
}
