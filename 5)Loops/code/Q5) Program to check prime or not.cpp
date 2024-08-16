//Q5) Program to check prime or not 

#include<iostream>
using namespace std;

int main()
{
	int i , n ; 
	cout<<"\nEnter a Number: ";
	cin>>n;
	for(i=2 ; i<n ; i++)
	{
		if(n%i==0)
		{
			cout<<"\nNumber is Not Prime ";
			break;
		}
	}
	if(i==n)
	{
		cout<<"\nNumber is Prime ";
	}
}
