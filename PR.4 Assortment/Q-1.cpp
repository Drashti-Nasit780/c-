// Question-1 Negative Elements in 1D Array

#include<iostream>
using namespace std;

main(){
	int size;
	cout<<"Enter the array size:-";
	cin>>size;
	
	cout<<"Enter array elements:"<<endl;
	int a[size],i;
	for(i=0; i<size; i++){
		cout<<"a["<<i<<"] :- ";
		cin>>a[i];
	}
	
	cout<<"Output"<<endl;
	for(i=0; i<size; i++){
		if(a[i]<0){
			cout<<a[i]<<" ";
		}
	}
}
          //Input:
//Enter the array size: 5
//Enter array elements:
//a[0] = 2
//a[1] = -4
//a[2] = 1
//a[3] = -3
//a[4] = -5
           //Output:
//Negative elements from an Array: -4, -3,-5

