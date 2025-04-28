#include<iostream>
using namespace std;

main()
{
	int a,b,c,d;
	cout<<"Enter Value of A:";
	cin>>a;
	cout<<"Enter Value of B:";
	cin>>b;
	cout<<"Enter Value of C:";
	cin>>c;
	cout<<"Enter Value of D:";
	cin>>d;
	
	if (a==b && a==c && a==d)
	{
		cout<<"All are same";
	}
	else
	{
		if(a>b)
		{
			if(a>c){
				if(a>d){
					cout<<"A is Max";
				}
				else
				{
					cout<<"D is Max";
				}
			}
			else
			{
				if(c>d)
				{
					cout<<"C is Max";
				}
				else
				{
					cout<<"D is Max";
				}
			}
		}
		else{
			if(b>c)
			{
				if(b>d)
				{
					cout<<"B is Max";
				}
				else
				{
					cout<<"D is Max";
				}
			}
			else
			{
				if(c>d)
				{
					cout<<"C is Max";
				}
				else
				{
					cout<<"D is Max";
				}
			}
		}
		
	}
}
