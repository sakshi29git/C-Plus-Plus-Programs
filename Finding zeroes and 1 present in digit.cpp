#include<iostream>
using namespace std;

int main()
{
	int num,pos;
	cout<<"Enter number: ";
	cin>>num;
	
	cout<<"Enter position: ";
	cin>>pos;
	
	if((num&(1<<pos))==0)
	{
		cout<<"OFF";
	 } 
	 
	 else{
	 	cout<<"ON";
	 }
	 
	 return 0;
}
