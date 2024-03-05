#include<iostream>
using namespace std;
class Age
{
	int age;
	public:
	void age_check()
	{
		start:
		cout<<"Enter Your Age : ";
		cin>>age;
		try
		{
			if(age<18)
			{
				throw 0;
			}
			else	
			{
				cout<<"Your Age is Valid  ...........>>>>>>>";
			}
		}
		catch(int age)
		{
			cout<<"Enter A Vaild Age  <<<<<<......."<<endl;
			goto start;
		}	
	}	
};
main()
{
	Age a1;
	a1.age_check();
}