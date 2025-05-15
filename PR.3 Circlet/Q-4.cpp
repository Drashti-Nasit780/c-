//Question:-3
#include<iostream>
using namespace std;

main()
{
	//input:
	int i,j,s;
	
	 for(i=5; i>=1; i--)
      {
        for(s=5; s>i; s--)
         {
			cout<<" ";
		
		 }
	    for(j=1; j<=i; j++){

	     if(j%2==0){
	         cout<<"0";
	     }else{
	     cout<<"1";
	     }
		    
      } 
      cout<<endl;
  }
	     
}
   //output:
   
//1	0  1  0	 1
// 	1  0  1  0
//     1  0  1
//        1  0
//           1
