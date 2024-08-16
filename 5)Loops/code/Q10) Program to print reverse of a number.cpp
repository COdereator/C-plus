//10) Program to print reverse of a number using loop

#include<iostream>
using namespace std;

int main()
{
	int i,s,n,d;
	cout<<"\nEnter  a Number: ";
	cin>>n;
	while(n!=0)
	{
		d=n%10;
		s=(s*10)+d;
		n=n/10;
	}
	cout<<"\nReverse of a Number: " <<s;
	return 0;
}
