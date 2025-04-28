#include<iostream>
using namespace std;
main()
{
	int a,b,c,d,e;
	cout<<"Enter Value of A:";
	cin>>a;
	cout<<"Enter Value of B:";
	cin>>b;
	cout<<"Enter Value of C:";
	cin>>c;
	cout<<"Enter Value of D:";
	cin>>d;
	cout<<"Enter Value of E:";
	cin>>e;
	if(a==b && a==c && a==d && a==e){
		cout<<"All are same";
	}
	else{
		if(a>b)	{
			if(a>c){
				if(a>d){
					if(a>e){
						cout<<"A is Max";
					}
					else{
						cout<<"E is Max";
					}
				}
				else{
					if(d>e){
						cout<<"D is Max";
					}
					else{
						cout<<"E is Max";
					}
				}
			}
			else{
				if(c>d){
					if(c>e){
						cout<<"C is Max";
					}
					else{
						cout<<"E is Max";
					}
				}
				else{
					cout<<"C is Max";
				}
			}	
		}
		else{
			if(b>c){
				if(b>d){
					if(b>e){
						cout<<"B is Max";
					}
					else{
						cout<<"E is Max";
					}
				}
				else{
					if(d>c){
						if(d>e){
							cout<<"D is Max";
						}
						else{
							cout<<"E is Max";
						}
					}
					else{
						cout<<"C is Max";
					}
				}
			}
			else{
				if(c>d){
					if(c>e){
						cout<<"C is Max";
					}
					else{
						cout<<"E is Max";
					}
				}
				else{	
					if(d>e){
						cout<<"D is Max";
					}
					else{
						cout<<"E is Max";
					}
				}
				
			}
		}
	}
}

