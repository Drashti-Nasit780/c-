#include<iostream>
using namespace std;

main(){
	int n, rem,sum=0;
	
	cout<<"Enter any number:";
	cin>>n;
	
	rem=n%10;
	while(n>=10)
	{
		n=n/10;
	}
	sum=rem+n;
	cout<<sum;
	
}

