#include<iostream>
using namespace std;

int main(){
	char b;
	do{
	
	int n;
	cout<<"Enter Number = "<<endl;
	cin>>n;
	
	if(n>0){
		cout<<n<<" Is Positive "<<endl;
	}
	
		
	else if(n<0){
		cout<<n<<" Is Negative "<<endl;
	}
		
	if(n==0){
		cout<<n<<" Is Equal To Zero "<<endl;
	}
	
		
	
	//for again compilation
	cout<<"\nPress a To Again Compile the Program OR Press any Key To Quit "<<endl;
	cin>>b;
	}while(b=='a');
	
	
	cout<<"********************"<<endl;
	cout<<"Thanks For Compiling"<<endl;
	cout<<"********************"<<endl;
	
	return 0;
}