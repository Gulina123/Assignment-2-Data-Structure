#include<iostream>
using namespace std;

int main(){
	char b;
	do{
	
	int n;
	int lastdig,firstdig;
	int add=0;
	cout<<"Enter Number = "<<endl;
	cin>>n;
	
	lastdig=n%10;
	
	while(n>=10){
		n=n/10;
	}
	firstdig=n;
	
	add=firstdig+lastdig;
	
	cout<<"The Sum Of First and Last Digit Is = "<<endl;
	cout<<add<<endl;
	
		
	
	//for again compilation
	cout<<"\nPress a To Again Compile the Program OR Press any Key To Quit "<<endl;
	cin>>b;
	}while(b=='a');
	
	
	cout<<"********************"<<endl;
	cout<<"Thanks For Compiling"<<endl;
	cout<<"********************"<<endl;
	
	return 0;
}