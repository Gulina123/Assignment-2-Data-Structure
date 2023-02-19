#include<iostream>
using namespace std;


int main(){
	char b;
	do{
   	int i;
   	int f=1;
   	int n;    
  	cout<<"Enter Any Number: "<<endl;    
 	cin>>n;    
   for(i=n; i>0; i--){    
      f=f*i;    
  }    
  
  cout<<"Factorial Of " <<n<<" is: "<<f<<endl;  
		
	//For agaain compilation
	cout<<"\nPress a To Again Compile the Program OR Press any Key To Quit "<<endl;
	cin>>b;
	}while(b=='a');
	
	
	
	cout<<"********************"<<endl;
	cout<<"Thanks For Compiling"<<endl;
	cout<<"********************"<<endl;
	


	return 0;
}