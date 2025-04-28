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
	if(a==b && a==c)
	{
		cout<<"All are same";
	}
	else
	{
		if(a>b)
		{
			if(a>c)
			{
				cout<<"A is Max";
			}
			else{
				cout<<"C is Max";
			}
		}
		else
		{
			if(b>c)
			{
				cout<<"B is Max";
			}
			else
			{
				cout<<"C is Max";
			}
		}
	}	
}
