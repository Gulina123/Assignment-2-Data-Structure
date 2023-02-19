#include<iostream>
using namespace std;


int main(){
	char b;
	do{
		//taking len input
		
	int area, len;
	cout<<"Enter Length Of Square = "<<endl;
	cin>>len;
	
	
	//area formula of square
	area=len*len;
	cout<<"The Area Of Sqaure is = "<<endl;
	cout<<area<<endl;
	
	
	
	// for again compilation
	cout<<"\nPress a To Again Compile the Program OR Press any Key To Quit "<<endl;
	cin>>b;
	}while(b=='a');
	
	
	
	cout<<"********************"<<endl;
	cout<<"Thanks Fir Compiling"<<endl;
	cout<<"*********************"<<endl;
	
	
	return 0;
}