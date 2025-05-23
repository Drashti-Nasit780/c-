// Question-2 Largest Element in 2D Array
#include<iostream>
using namespace std;

main(){
	
	int rows,cols;
	cout<<"Enter the array row size :";
	cin>>rows;
	cout<<"Enter the array column size :";
	cin>>cols;
	
	int a[rows][cols];
	int i,j;
	
	cout<<"Enter array elements:"<<endl;
	for(i=0; i<rows; i++){
		for(j=0; j<cols; j++)
		{
			cout<<"a["<<i<<"] ["<<j<<"] :";
			cin>>a[i][j];
		}
		cout<<endl;
	} 
	
	cout<<"Output"<<endl;
	int large=0;
	
	for(i=0; i<rows; i++){
		for(j=0; j<cols; j++)
		{
			if(a[i][j]>large)
			{
				large=a[i][j];
			}
		}
	}
	cout<<"The largest element is :"<<large;
}

         //Input:
//Enter the array's row size: 3
//Enter the array's column size: 3
//Enter array's elements:
//a[0][0] = 2
//a[0][1] = 7
//a[0][2] = 1
//a[1][0] = 3
//a[1][1] = 5
//a[1][2] = 4
//a[2][0] = 8
//a[2][1] = 9
//a[2][2] = 6
           //Output:
//The largest element is: 9

