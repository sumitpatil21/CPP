#include<iostream>
using namespace std;

main()
{
	int hh,mm,ss,ss1;
	cout<<"enter your second:";
	cin>>ss;
	hh=ss/3600;
	mm=ss/3600;
	ss1=mm*60;
	cout<<hh<<":houre "<<mm<<":minutes "<<ss1<<":second";
}