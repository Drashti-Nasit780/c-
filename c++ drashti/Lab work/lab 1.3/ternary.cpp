#include<iostream>
using namespace std;
main()
{
	int a,b,c;
	cout<<"Enter Value of A:";
	cin>>a;
	cout<<"Enter Value of B:";
	cin>>b;
	cout<<"Enter Value of C:";
	cin>>c;
	(a>b)?(a>c)?cout<<"A is Max":cout<<"C is Max":(b>c)?cout<<"B is Max":cout<<"C is Max";
}
