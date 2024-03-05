#include<iostream>
using namespace std;

class Diamond
{
	int id,staff,revenue,import,exportd;
	string name,ceo_name;
	
	public :
		
		void set(int id,int staff,int revenue,int import,int exportd,string name,string ceo_name)
		{
		
			this->id = id;
			this->name = name;
			this->ceo_name = ceo_name;
			this->staff = staff;
			this->revenue = revenue;
			this->import = import;
			this->exportd = exportd;
		
			cout<<"Company Id.: "<<id<<endl;
			cout<<"Company's Name : "<<name<<endl;
			cout<<"Company's CEO Name : "<<ceo_name<<endl;
			cout<<"Company's Staff Quantity : "<<staff<<endl;
			cout<<"Company Revenue (per year) : "<<revenue<<endl;
			cout<<"Company's Import raw diamonds (per year) : "<<import<<endl;
			cout<<"Company's Export raw diamonds (per year) : "<<exportd<<endl<<endl;
			
		}
};

main()
{
	
	int n,id,staff,revenue,import,exportd;
	string name,ceo_name;
	
	cout<<"Enter No. of Diamond Companies : ";
	cin>>n;
	
	

	for(int i=0; i<n; i++)
	{

		cout<<endl<<"Enter Id : ";
		cin>>id;
		cin.ignore();
		cout<<"Enter Name : ";
		getline(cin,name);
		cout<<"Enter Ceo Name : ";
		getline(cin,ceo_name);
		cout<<"Enter Staff quantity : ";
		cin>>staff;
		cin.ignore();
		cout<<"Enter Revenue (per year) : ";
		cin>>revenue;
		cin.ignore();
		cout<<"Enter No. of Import raw Diamond (per year) : ";
		cin>>import;
		cin.ignore();
		cout<<"Enter No. of Export raw Diamond (per year) : ";
		cin>>exportd;
		cin.ignore();
		
		cout<<endl<<endl;
	Diamond d1;
		d1.set(id,staff,revenue,import,exportd,name,ceo_name);
	}
	
}