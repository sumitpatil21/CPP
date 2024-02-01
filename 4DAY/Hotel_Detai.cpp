#include<iostream>
using namespace std;
class hotel_Detail
{
	int hotel_id,hotel_rating,hotel_staff_quantity,hotel_room_quantity;
	string hotel_type,hotel_location;
	static int hotel_establish_year;
	static string hotel_name;
	public:
		
	void set(int x)
	{
		cout<<x<<endl;
		cout<<endl;
		cout<<"enter your ID:";
		cin>>hotel_id;
		cin.ignore();
		cout<<"enter your hotel_rating:";
		cin>>hotel_rating;
		cin.ignore();
		cout<<"enter your hotel_type:";
		getline(cin,hotel_type);
		
		cout<<"enter your hotel_location:";
		getline(cin,hotel_location);
	
		cout<<"enter your hotel_staff_quantity:";
		cin>>hotel_staff_quantity;
		cin.ignore();
		
		cout<<"enter your hotel_room_quantity:";
		cin>>hotel_room_quantity;
		cin.ignore();
	}
	void get()
	{
		cout<<hotel_id<<endl;
		cout<<hotel_name<<endl;
		cout<<hotel_rating<<endl;
		cout<<hotel_type<<endl;
		cout<<hotel_location<<endl;
		cout<<hotel_establish_year<<endl;
		cout<<hotel_staff_quantity<<endl;
		cout<<hotel_room_quantity<<endl;
	}
};

string hotel_Detail::hotel_name="Prime Hotel";
int hotel_Detail::hotel_establish_year=2015;


main()
{
	class hotel_Detail h[50];
	int x=0;
	for(int i=0;i<3;i++)
	{
		x++;
		h[i].set(x);
	}
	for(int i=0;i<3;i++)
	{
		h[i].get();
	}
}