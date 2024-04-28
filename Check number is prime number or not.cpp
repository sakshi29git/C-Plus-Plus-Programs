#include<iostream>
using namespace std;


int main()
{
	int i,j,first,last,count;
	cout<<"Enter starting number: "<<endl;
	cin>>first;
	cout<<"Enter second number: "<<endl;
	cin>>last;
	bool found=false;
	if(first==0 || first==1)
	{
		first=2;
	}
	
	for(i=first;i<=last;i++)
	{
	count=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				count++;
				found=true;
			}
			
		}
		if(count<=0)
		{
			if(found)
			{
				cout<<", ";
			}
		cout<<i;

		}
		found=true;
		
	}
}
