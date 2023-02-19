#include<iostream>
using namespace std;


int main(){
	char b;
	do{
		//taking two numbers
	int num1;
	int num2;
	int add;
	
	cout<<"Enter First Number = "<<endl;
	cin>>num1;
	cout<<"Enter Second Number = "<<endl;
	cin>>num2;
	
	//printing values before swapping
	
	cout<<"Before Swapping :"<<endl;
	cout<<"First Number = "<<num1<<endl;
	cout<<"Second Number = "<<num2<<endl;
	
	add=num1+num2;
	num2=add-num2;
	num1=add-num1;
	
	//after swapping values
	cout<<"\nAfter  Swapping Values : "<<endl;
	cout<<"First Number = "<<num1<<endl;
	cout<<"Second Number = "<<num2<<endl;
	
	//for again compilation
	cout<<"\nPress a To Again Compile  the Program OR Press any Key To Quit "<<endl;
	cin>>b;
	}while(b=='a');
	
	
	
	cout<<"***********"<<endl;
	cout<<"  THANKS "<<endl;
	cout<<"***********"<<endl;
	
	
	return 0;
}