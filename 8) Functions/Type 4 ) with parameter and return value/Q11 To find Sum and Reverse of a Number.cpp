//Q11 Program to find Sum and Reverse of a Number 

#include<iostream>
using namespace std;

int main()
{
	int r ,s , n ;
	cout<<"\nEnter a Number: ";
	cin>>n;
	int sum(int n);
	int reverse(int n);
	s=sum(n); 
	cout<<"\nSum of a Number: "<<s;
	r=reverse(n);
	cout<<"\nReverse of a Number: "<<r;
	return 0;
}
int sum(int n)
{
	int  s , d;
	while(n!=0)
	{
		d=n%10;
		s=s+d;
		n=n/10;
	}
	return s;
}

int reverse(int n)
{
	int  s , d , r=0;
	while(n!=0)
	{
		d=n%10;
		r=(r*10)+d;
		n=n/10;
	}
	return r;
}
