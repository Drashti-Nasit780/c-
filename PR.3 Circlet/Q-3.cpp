//Question:-3
#include<iostream>
using namespace std;

main()
{
	//input:
	int i,j,s;
	
	 for(i=5; i>=1; i--)
	{
	   for(s=1; s<i; s++)
		{
			cout<<" ";
		
		}
	  for(j=i; j<=5; j++)
        {
        	cout<<j;
        }
		cout<<endl;
	}
	
}
   //output:
   
//               5
//            4  5
//         3  4  5
// 	2  3  4  5
//   1	2  3  4	 5
