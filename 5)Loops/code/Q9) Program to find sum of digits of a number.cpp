//Q9) Program to find sum of digits of a number using loop
#include<iostream>
using namespace std;

int main()
{
	int i,s=0,n,d;
	cout<<"\nEnter  a Number: ";
	cin>>n;
	while(n!=0)
	{
		d=n%10;
		s=s+d;
		n=n/10;
		
	}
	cout<<"\nSum of Digits of a Number:" <<s;
	return 0;
}
