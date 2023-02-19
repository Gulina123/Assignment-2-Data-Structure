#include<iostream>
#include<string.h>
using namespace std;

int main(){
	char b;
	do{
		
	char str[500];
	cout<<"Enter String In Lower case: "<<endl;
	cin>>str;
	
	int i=0;
	
	//subtracting 32 from Asci value 
	while(str[i]!=0){
		if(str[i]>='a' && str[i]<='z')
		str[i]=str[i]-32;
		i++;
	}
	
	cout<<"The String In Upper Case Is : "<<endl;
	cout<<str<<endl;
	
	
	
	
	//for again compilation
	cout<<"\nPress a To Again Compile the Program OR Press any Key To Quit "<<endl;
	cin>>b;
	}while(b=='a');
	
	
	cout<<"********************"<<endl;
	cout<<"Thanks For Compiling"<<endl;
	cout<<"********************"<<endl;
	
	return 0;
}