//Q2 Program to perform arithmetical operation

#include<iostream>
using namespace std;

int main()
{
	int a , b , c , d;
	int e ,f ;
	cout<<"\n\nEnter Two Numbers: ";
	cin>>e>>f;
	int add(int a , int b );
	int sub(int a , int b );
	int mul(int a , int b );
	int div(int a , int b );
	a=add(e,f);
	cout<<"\nAdditiom is : "<<a<<"\n--------------------------------------------------";
	b=sub(e,f);
	cout<<"\nSubtraction  is : "<<b<<"\n------------------------------------------------";
	c=mul(e,f);
	cout<<"\nMultiplication is : "<<c<<"\n----------------------------------------------";
	d=div(e,f);
	cout<<"\nDivision is : "<<d;
	return 0;
}
int add(int a , int b )
{
	int c=a + b;
	return c;
}
int sub(int a , int b )
{
	int c=a - b;
	return c;
}
int mul(int a , int b )
{
	int c=a * b;
	return c;
}
int div(int a , int b )
{
	int c=a / b;
	return c;
}
