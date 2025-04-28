#include<iostream>
using namespace std;
main()
{
	int a,b,c,d,e,f;
	cout<<"Enter Value of A:";
	cin>>a;
	cout<<"Enter Value of B:";
	cin>>b;
	cout<<"Enter Value of C:";
	cin>>c;
	cout<<"Enter Value of D:";
	cin>>d;
	cout<<"Enter Value of E:";
	cin>>e;
	cout<<"Enter Value of f:";
	cin>>f;
	if(a==b && a==c && a==d && a==e && a==f){
		cout<<"All are same";
	}
	else if(a>b && a>c && a>d && a>e && a>f)
	{
		cout<<"A is Max";	
	}
	else if(b>c && b>d && b>e && b>f)
	{
		cout<<"B is Max";
	}
	else if(c>d && c>e && c>f)
	{
		cout<<"C is Max";
	}
	else if (d>e && d>f)
	{
		cout<<"D is Max";
	}
	else if(e>f)
	{
		cout<<"E is Max";
	}
	else{
		cout<<"F is Max";
		
		
	}

}
