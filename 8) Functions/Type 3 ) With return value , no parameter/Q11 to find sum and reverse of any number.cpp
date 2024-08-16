//Q11 Program to find Sum and Reverse of a Number 

#include<iostream>
using namespace std;

int main()
{
	int r ,s ;
	int sum();
	s=sum(); 
	cout<<"\nSum of a Number: "<<s;
	int reverse();
	r=reverse();
	cout<<"\nReverse of a Number: "<<r;
	return 0;
}
int sum()
{
	int n , s , d;
	cout<<"\nEnter a Number: ";
	cin>>n;
	while(n!=0)
	{
		d=n%10;
		s=s+d;
		n=n/10;
	}
	return s;
}

int reverse()
{
	int n , s , d , r=0;
	cout<<"\nEnter a Number: ";
	cin>>n;
	while(n!=0)
	{
		d=n%10;
		r=(r*10)+d;
		n=n/10;
	}
	return r;
}
