#include<iostream>
using namespace std;


int main(){
	char b;
	do{
	int n, num;
	int c=0;
	cout<<"Please Enter Number To Check It is Armstrong Or Not : "<<endl;
	cin>>num;
	n=num;
	
	while(n!=0){
		c=c+(n%10)*(n%10)*(n%10);
		n=n/10;
	}
	
	if(c==num)
		cout<<num<<" Is Armstrong "<<endl;

	else 
	cout<<num<<" Is Not  Armstrong "<<endl;
	
		
	//For agaain compilation
	cout<<"\nPress a To Again Compile the Program OR Press any Key To Quit "<<endl;
	cin>>b;
	}while(b=='a');
	
	
	
	cout<<"********************"<<endl;
	cout<<"Thanks For Compiling"<<endl;
	cout<<"********************"<<endl;
	
	
	return 0;
}