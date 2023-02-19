#include<iostream>
using namespace std;


int main(){
	char b;
	do{
	int n,r=0;
	int lastdig;
	
	cout<<"Enter Number For Reversing = "<<endl;
	cin>>n;

	while(n>0){
		lastdig=n%10;
		r=r*10+lastdig;
		n=n/10;
		
	}
	
	cout<<"The Reverse Of Given Number is = "<<endl;
	cout<<r;
	
	//For agaain compilation
	cout<<"\nPress a To Again Compile the Program OR Press any Key To Quit "<<endl;
	cin>>b;
	}while(b=='a');
	
	
	
	cout<<"********************"<<endl;
	cout<<"Thanks For Compiling"<<endl;
	cout<<"********************"<<endl;
	
	
	
	return 0;
}