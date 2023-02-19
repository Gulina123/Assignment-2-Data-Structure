#include<iostream>
using namespace std;

int main(){
	char b;
	do{
	
	int n;
	cout<<"Enter Number : "<<endl;
	cin>>n;
	
    for(int i=1; i<=10; i++){
    	cout<<n<<" * "<<i<<" = "<<n*i<<endl;
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