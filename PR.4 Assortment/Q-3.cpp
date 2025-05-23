// Question-3 Transpose of 2D Array
#include<iostream>
using namespace std;

main(){
	
	int rows,cols;
	cout<<"Enter the array row size: ";
	cin>>rows;
	cout<<"Enter the array column size: ";
	cin>>cols;
	
	int a[rows][cols];
	int i,j;
	
	cout<<"Enter array elements:"<<endl;
	
	for(i=0; i<rows; i++){
		for(j=0; j<cols; j++){
			cout<<"a["<<i<<"] ["<<j<<"] :";
			cin>>a[i][j];
		}
		cout<<endl;
	}
	 
	cout<<"The transpose matrix of an array:"<<endl;
	
	for(i=0; i<rows; i++){
		for(j=0; j<cols; j++)
		{
			cout<<a[j][i]<<" ";
		}
		cout<<endl;
	}
}
            //Input:
//Enter the array's row & column size: 3
//Enter array's elements:
//a[0][0] = 2
//a[0][1] = 4
//a[0][2] = 1
//a[1][0] = 3
//a[1][1] = 5
//a[1][2] = 4
//a[2][0] = 8
//a[2][1] = 2
//a[2][2] = 6
              //Output:
//The transpose matrix of an array:
//2 3 8
//4 5 2
//1 4 6

