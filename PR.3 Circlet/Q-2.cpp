//Question:-2
#include<iostream>
using namespace std;

main()
{
	//input:
	int i,j,n=11;
	
	for(i=1; i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<n;
			n++;
		}
		cout<<endl;
	}
	
}
   //output:
   
// 11
// 12 13
// 14 15 16
// 17 18 19 20
