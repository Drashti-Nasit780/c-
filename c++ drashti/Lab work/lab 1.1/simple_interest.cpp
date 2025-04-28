#include<iostream>
using namespace std;
main()
{
	int p,t,r,si;
	cout<<"Enter Principle Amount:";
	cin>>p;
	cout<<"Enter Time Period:";
	cin>>t;
	cout<<"Enter rate of Interest:";
	cin>>r;
	si=(p*t*r)/100;
	cout<<"Simple Interest:"<<si;
}
