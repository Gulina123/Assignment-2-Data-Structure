#include<iostream>
using namespace std;


int main(){
	char b;
	do{
		
  	int d;
	int y;
	int w;
	
  	cout<<"Enter Number Of Days To Convert = "<<endl;
  	cin>>d;
  	
  	y = d/365;
  	d=d%365;
  	w=d/7;
  	d=d%7;
  	
  	
  	cout<<"\nYear = "<<y;
  	cout<<"\nWeeks = "<<w;
  	cout<<"\nDays = "<<d;
  	
  	
  		
	
	//for again compilation
	cout<<"\nPress a To Again Compile the Program OR Press any Key To Quit "<<endl;
	cin>>b;
	}while(b=='a');
	
	
	cout<<"********************"<<endl;
	cout<<"Thanks For Compiling"<<endl;
	cout<<"********************"<<endl;
	


	return 0;
}