#include<iostream>
using namespace std;


int main(){
	char b;
	do{
	int num1;
	int num2;
	int temp;
	
	
	//taking two numbers
	
	cout<<"Enter First Number= "<<endl;
	cin>>num1;
	cout<<"Enter Second Number= "<<endl;
	cin>>num2;
	
	//showing their values before swapping
	cout<<"Before Swapping :"<<endl;
	cout<<"First Number = "<<num1<<endl;
	cout<<"Second Number = "<<num2<<endl;
	
	temp=num1;
	num1=num2;
	num2=temp;
	
	//after swapping printing their values
	
	cout<<"\nAfter  Swapping Values : "<<endl;
	cout<<"First Number = "<<num1<<endl;
	cout<<"Second Number = "<<num2<<endl;
	
	//For again Compilation
	
	cout<<"\nPress a To Again Compile the Program OR Press any Key To Quit"<<endl;
	cin>>b;
	}while(b=='a');
	
	
	
	cout<<"********************"<<endl;
	cout<<"Thanks For Compiling"<<endl;
	cout<<"********************"<<endl;
	
	
	return 0;
}