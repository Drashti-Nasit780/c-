#include<iostream>
using namespace std;
main()
{
	int a , b, n;
	cout<<"Enter Value of A:";
	cin>>a;
	cout<<"Enter Value of B:";
	cin>>b;
	cout<<"Enter 1 to 5 number to perform Arithmatic Operation:";
	cin>>n;
	cout<<endl;
	switch(n)
	{
		case 1:
			cout<<"Addition of A and B:"<<a+b;
			break;
		case 2:
			cout<<"Subtraction of A and B:"<<a-b;
			break;
		case 3:
			cout<<"Multiplication of A and B:"<<a*b;
			break;
		case 4:
			cout<<"Division of A and B:"<<a/b;
			break;
		case 5:
			cout<<"Modulo of A and B:"<<a%b;
			break;
		default:
			cout<<"Invalid Choise!!!";
			
	}
}
