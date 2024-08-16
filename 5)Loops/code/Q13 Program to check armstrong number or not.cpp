//Q13 Program to check armstrong number or not 

#include<iostream>
using namespace std;

int main()
{
	int a,s=0,d,n;
	cout<<"Enter a  Number: ";
	cin>>a;
	n=a;
	while(n!=0)
	{
		d=n%10;
		s=s+(d*d*d);
		n=n/10;
	}
	if(s==a)
	{
		cout<<"\n"<<a<<" is Armstrong Number";
	}
	else
	{
		cout<<"\n"<<a<<" is not Armstrong Number";
	}
	
	return 0;
}
