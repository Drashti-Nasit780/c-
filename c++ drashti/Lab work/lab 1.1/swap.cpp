#include<iostream>
using namespace std;
main()
{
	int a,b,c;
	cout<<"Enter Value of A:";
	cin>>a;
	cout<<"Enter Value of B:";
	cin>>b;
	cout<<"------Before swap ------"<<endl<<endl;
	cout<<"A:"<<a<<endl;
	cout<<"B:"<<b<<endl;
	
/*	c=a;
	a=b;
	b=c;
	cout<<"------After swap using third variable------"<<endl<<endl;
	cout<<"A:"<<a<<endl;
	cout<<"B:"<<b<<endl;*/
	
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"------After swap without using third variable------"<<endl<<endl;
	cout<<"A:"<<a<<endl;
	cout<<"B:"<<b<<endl;
	
}
