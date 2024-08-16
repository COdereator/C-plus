//Q7) Program to find first and last digit using loop 

#include<iostream>
using namespace std;

int main()
{
	int i,s,n,d;
	cout<<"\nEnter  a Number: ";
	cin>>n;
	int neww=n;
	while(n!=0)
	{
		d=n%10;
		n=n/10;
		while(n!=0)
	    {
		    s=n%10;
		    n=n/10;
	    }
		break;
	}
	cout<<"\nfirst Digit: "<<s;
	cout<<"\nLast Digit : "<<d;
	return 0;
}
