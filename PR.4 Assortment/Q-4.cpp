// Question-4 Sum of Elements in Row & Column of 2D Array
#include<iostream>
using namespace std;

main(){
	int rows,cols;
	
	cout<<"Enter the array's row size :";
	cin>>rows;
	cout<<"Enter the array's column size :";
	cin>>cols;
	
	int a[rows][cols];
	int i,j;
	
	cout<<"Enter array elements"<<endl;
	
	for(i=0; i<rows; i++){
		for(j=0; j<cols; j++){
			cout<<"a["<<i<<"] ["<<j<<"] :";
			cin>>a[i][j];
		}
		cout<<endl;
	}
	cout<<"Output:"<<endl;
	
	for(i=0; i<rows; i++){
		for(j=0; j<cols; j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
	//row is sum .....!
	
	cout<<"row is sum"<<endl;
	int r, sum=0;
	
	cout<<"Enter the row :";
	cin>>r;
	for(i=0; i<rows; i++){
		for(j=0; j<cols; j++){
			if(i==r){
				cout<<a[i][j]<<" ";
				sum+=a[i][j];
			}
		}
	}
	cout<<endl;
	cout<<"Row the sum :"<<sum;
	cout<<endl;
	
	//col is sum...!
	
	cout<<"col is sum"<<endl;
	int c, No=0;
	cout<<"Enter the col :";
	cin>>c;
	for(i=0; i<rows; i++){
		for(j=0; j<cols; j++){
			if(j==c){
				cout<<a[i][j]<<" ";
				No+=a[i][j];
			}
		}
	}
	cout<<endl;
	cout<<"col the sum :"<<No;
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
//Enter row number: 0
//Elements of row 0: 2, 7, 1
//The sum of a row 0: 10
//Enter column number: 2
//Elements of column 2: 1, 4, 6
//The sum of column 2: 11
