#include<iostream>
using namespace std;


int main(){
	char b;
	do{
	
	//taking a number from user
	int n;
	cout<<"Please Enter Number :"<<endl;
	cin>>n;

	int i;
	for(i=2; i<n; i++){
		if(n%i==0){
		cout<<n<<" Is Not Prime "<<endl;
			break;
		}
	}
	
	
	if(i==n){
		cout<<n<<" Is Prime "<<endl;
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