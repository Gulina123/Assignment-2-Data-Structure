#include<iostream>
using namespace std;

int main(){
	char b;
	do{
	
	int n1,n2,n3;
	cout<<"Enter First Number : "<<endl;
	cin>>n1;
	cout<<"Enter Second Number : "<<endl;
	cin>>n2;
	cout<<"Enter Third Number : "<<endl;
	cin>>n3;
	
	
	//compairing all 
	if(n1>n2 && n1>n3 ){
		cout<<n1<<" Is Greater Than "<<n2<<" and "<<n3<<endl;
	}
	
	else if(n2>n1 && n2>n3){
		cout<<n2<<" Is Greater Than "<<n1<<" and "<<n3<<endl;
	}
	
	else if(n3>n1 && n3>n1){
		cout<<n3<<" Is Greater Than "<<n1<<" and "<<n2<<endl;
	}
	
	else 
	cout<<"Numbers Are Equal"<<endl;
	
	
		
	
	//for again compilation
	cout<<"\nPress a To Again Compile the Program OR Press any Key To Quit "<<endl;
	cin>>b;
	}while(b=='a');
	
	
	cout<<"********************"<<endl;
	cout<<"Thanks For Compiling"<<endl;
	cout<<"********************"<<endl;
	
	return 0;
}