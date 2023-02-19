#include<iostream>
using namespace std;


int main(){
	char b;
	do{
		//taking input
	int area, pie,r;
	cout<<"Enter Value Of Pie="<<endl;
	cin>>pie;
	cout<<"Enter Value Of r="<<endl;
	cin>>r;
	
	// area formula
	area=pie*r*r;
	cout<<"The Area Of Circle = "<<endl;
	cout<<area<<endl;
	
	// again compiling
	cout<<"\nPress a To Again Compile the Program OR Press any Key To Quit "<<endl;
	cin>>b;
	}while(b=='a');
	
	
	
	cout<<"*********************"<<endl;
	cout<<"Thanks For Compiling"<<endl;
	cout<<"*********************"<<endl;
	
	return 0;
}