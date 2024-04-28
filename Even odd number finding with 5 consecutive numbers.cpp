#include<iostream>
using namespace std;

int main()
{
	int num;
	int i,j;
	cout<<"Enter number:: ";
	cin>>num;

	if(num%2==0)
	{
		cout<<"Given Number is Even Number:"<<endl;
		cout<<"Series of 5 numbers: "<<num<<", ";
		for(i=0;i<5;i++)
		{
		num=num+2;
		cout<<num;
		if(i<5)
		{
			cout<<", ";
			}	
		}
	}
	
	else{
	cout<<endl;
	cout<<"Odd Number"<<endl;
	cout<<"Series of 5 numbers: "<<num<<", ";
		for(i=0;i<5;i++)
		{
		num=num+1;
		cout<<num;
		if(i<5)
		{
			cout<<", ";
			}	
		}
		
	}
	
}
