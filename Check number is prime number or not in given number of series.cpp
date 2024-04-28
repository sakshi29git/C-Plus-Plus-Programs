#include<iostream>
using namespace std;

int main()
{
	int num,i,c=0;
	cout<<"Enter number:";
	cin>>num;
	
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			c++;
		}
	}
	
	if(c==0)
	{
		cout<<"Number is prime";
	}
	
	else{
			cout<<"Number is not prime";
	}
}
