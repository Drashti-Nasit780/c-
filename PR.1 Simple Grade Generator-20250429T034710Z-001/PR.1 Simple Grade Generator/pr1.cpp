#include<iostream>
using namespace std;
main()
{
	int marks;
	char grade;
	
	cout<<"Choose Your Marks:";
	cin>>marks;
	
	
	if(marks>=90)
	{
		grade='A';
	}
	else if(marks>=80)
	{
		grade='B';
	}
	else if(marks>=70)
	{
		grade='C';
	}
	else if(marks>=60)
	{
		grade='D';
	}
	else if(marks>=50)
	{
		grade='E';
	}
	else
	{
		grade='F';
	}
	
	switch(grade)
	{
		case 'A':
			cout<<"Your Grade Is A."<<endl<<"Excellent Work!"<<endl<<"Congratulation! You Are eligible for Next level";
			break;
			
		case 'B':
			cout<<"Your Grade is B."<<endl<<"Well Done"<<endl<<"Congratulation! You Are eligible for Next level";
			break;
			
		case 'C':
			cout<<"Your Grade is C."<<endl<<"Good Job"<<endl<<"Congratulation! You Are eligible for Next level";
			break;
			
		case 'D':
			cout<<"Your Grade is D."<<endl<<"Good"<<endl<<"Congratulation! You Are eligible for Next level";
			break;
			
		case 'E':
			cout<<"Your Grade is E."<<endl<<"You Passed, but you could do Better"<<endl<<"Congratulation! You Are eligible for Next level";
			break;
			
	     default:
			cout<<"Your Grade is F."<<endl<<"Sorry You Are Fail"<<endl<<"Please Try Again Next Time";
	}
}
