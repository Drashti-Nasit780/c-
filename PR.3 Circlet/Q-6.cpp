//Question:-6
#include<iostream>
using namespace std;

main()
{
	//input:
	int i,j,s;
	
	for(i=1; i<=5; i++){
         for(j=1; j<=i; j++){
			cout<<j;
		 }
	     for(s=5; s>i; s--){
            cout<<"  ";
	     } 
         for(j=i; j>=1; j--)
         {
	        cout<<j;
         } 
           cout<<endl;
   }
	     
}
   //output:
   
//    5
//   454
//  34543
// 2345432
//123454321
