#include<iostream>
using namespace std;


int main(){
	char b;
	do{
		//taking len and width input
	int area, len,wid;
	
	cout<<"Enter Length Of Rectangle = "<<endl;
	cin>>len;
	cout<<"Enter Width Of Rectangle = "<<endl;
	cin>>wid;
	
	
	// area formula of recatngle
	area=len*wid;
	cout<<"The Area Of Rectangle is = "<<endl;
	cout<<area<<endl;
	
	//for again comppilation
	
	cout<<"\nPress a To Again Compile the Program OR Press any Key To Quit "<<endl;
	cin>>b;
	}while(b=='a');
	
	
	
	cout<<"********************"<<endl;
	cout<<"Thanks For Compiling"<<endl;
	cout<<"*********************"<<endl;
	
	
	return 0;
}