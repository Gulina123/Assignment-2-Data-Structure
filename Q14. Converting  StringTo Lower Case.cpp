#include<iostream>
#include<string.h>
using namespace std;


int main(){
	char b;
	do{
  	char str[50];
  	cout<<"Enter String In Upper Case = "<<endl;
  	gets(str);
  	
  	cout<<"The String In Lower Case Is  = "<<endl;
  	cout<<strlwr(str)<<endl;
  	
	
	
	//for again compilation
	cout<<"\nPress a To Again Compile the Program OR Press any Key To Quit "<<endl;
	cin>>b;
	}while(b=='a');
	
	
	cout<<"********************"<<endl;
	cout<<"Thanks For Compiling"<<endl;
	cout<<"********************"<<endl;
	


	return 0;
}