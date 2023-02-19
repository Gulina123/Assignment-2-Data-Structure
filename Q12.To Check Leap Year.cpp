#include<iostream>
using namespace std;


int main(){
	char b;
	do{
		
   	int y;
   	cout<<"Enter Year To Check Is It Leap Year Or Not : "<<endl;
   	cin>>y;
   	
   	
   	if((y%4==0) && (y%100!=0))
   		cout<<y<<" Is Leap Year"<<endl;
	   
	else if(y%400==0)
		cout<<y<<" Is Leap Year"<<endl;
	
	   else 
	   cout<<y<<" Is Not Leap Year"<<endl;

	   
	   
		
	
	//for again compilation
	cout<<"\nPress a To Again Compile the Program OR Press any Key To Quit "<<endl;
	cin>>b;
	}while(b=='a');
	
	
	cout<<"********************"<<endl;
	cout<<"Thanks For Compiling"<<endl;
	cout<<"********************"<<endl;
	


	return 0;
}