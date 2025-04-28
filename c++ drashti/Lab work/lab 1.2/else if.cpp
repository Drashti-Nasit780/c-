#include<iostream>
using namespace std;
main()
{
	int a=10,b=10,c=10;
	if(a==b && a==c)
	{
		cout<<"all are same";
	}
	else if (a>b && a>c)
	{
		cout<<"A is max";
	}
	else if(b>a && b>c)
	{
		cout<<"B is Max";
	}
	else
	{
		cout<<"C is max";
	}
}


