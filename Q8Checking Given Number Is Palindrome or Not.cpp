#include<iostream>
using namespace std;


int main(){
	char b;
	do{
	int n, num;
	int r=0;
	int lastdig;
	cout<<"Enter Number To Reverse It: "<<endl;
	cin>>num;
	n=num;
	while(num>0){
		lastdig=num%10;
		r=r*10+lastdig;
		num=num/10;
		
	}
	
	cout<<"The Reverse Is : "<<endl;
	cout<<r<<endl;
	
	if(n==r){
		cout<<n<<" Is Palindrome"<<endl;
	}
	
	else 
	cout<<n<<" Is Not Palindrome"<<endl;
		
	//For agaain compilation
	cout<<"\nPress a To Again Compile the Program OR Press any Key To Quit "<<endl;
	cin>>b;
	}while(b=='a');
	
	
	
	cout<<"********************"<<endl;
	cout<<"Thanks For Compiling"<<endl;
	cout<<"********************"<<endl;
	
	return 0;
}