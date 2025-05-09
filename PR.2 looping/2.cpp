#include<iostream>
using namespace std;

main(){
	int n,cnt=0;
	
	cout<<"Enter any number : ";
	cin>>n;
	
	while(n!=0){
		cnt++;
		n=n/10;
	}
	cout<<cnt;
}


