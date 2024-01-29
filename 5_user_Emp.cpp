#include<iostream>
using namespace std;
class emp
{
	public :
	int emp_id;
	char emp_name[50];
	int emp_age;
    int emp_role;
	int emp_salary;
	char emp_city[50];
	int emp_experience;
	char emp_company_name[50];
	char line;

	
void input()
	{
		cout<<"enter your name";
		getline(cin,emp_name);
		getline(cin,line);
		cout<<"enter your id:";
		cin>>emp_id;
		cout<<"enter your age:";
		cin>>emp_age;
		cout<<"enter your role:";
		cin>>emp_role;
		cout<<"enter your salary:";
		cin>>emp_salary;
		cout<<"enter your city:";
		getline(cin,emp_city);
		getline(cin,line);
		cout<<"enter your experience:";
		cin>>emp_experience;
		cout<<"enter your company name:";
		getline(cin,emp_company_name);
		getline(cin,line);
		cout<<endl;
		cout<<endl;
		cout<<"name:"<<emp_name<<endl;
		cout<<"id:"<<emp_name<<endl;
		cout<<"age:"<<emp_name<<endl;
		cout<<"role:"<<emp_name<<endl;
		cout<<"salary:"<<emp_name<<endl;
		cout<<"city:"<<emp_name<<endl;
		cout<<"experience:"<<emp_name<<endl;
		cout<<"company name:"<<emp_name<<endl;
		cout<<endl;
}
		
	
};
main()
{
		 int i;
     class emp e[5];
	for(i=0;i<5;i++)
	{
		e[i].input();
	}
}
