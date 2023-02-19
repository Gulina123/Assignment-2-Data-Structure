#include<iostream>
using namespace std;


int main(){
	char  b;
	do{
   	int num1=0;
   	int num2=1;
   	int f,n;
   	cout<<"Enter The Value Upto You Want To Dispalay Fibonacci Series : "<<endl;
   	cin>>n;
   	
   	cout<<"The Fibonacci Series Is "<<endl;
   	cout<<num1<<" "<<num2;
   	
   	for(int i=1; i<=n-2; i++){
   		f=num1+num2;
   		num1=num2;
   		num2=f;
	   
	cout<<" "<<f<<" ";
}
	
	//For agaain compilation
	cout<<"\nPress a To Again Compile the Program OR Press any Key To Quit "<<endl;
	cin>>b;
	}while(b=='a');
	
	
	
	cout<<"********************"<<endl;
	cout<<"Thanks For Compiling"<<endl;
	cout<<"********************"<<endl;
	


	return 0;
}