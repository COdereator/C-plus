//Q2 Program to perform Arithmetical operation

#include<iostream>
using namespace std;

int main()
{
	int a , b;
	void add(int a, int b);
	void sub(int a , int b);
	void mul(int a , int b);
	void div(int a , int b);
	cout<<"\nEnter two Numbers: ";
	cin>>a>>b;
	add(a,b);
	sub(a,b);
	mul(a,b);
	div(a,b);
	return 0;
}
void add(int a , int b)
{
	cout<<"\nAddition is : "<<a+b<<"\n---------------------------------------------";
}
void sub(int a , int b )
{
	cout<<"\nSubtraction  is : "<<a-b<<"\n---------------------------------------------";
}
void mul(int a , int b)
{
	cout<<"\nMultiplication is : "<<a*b<<"\n---------------------------------------------";
}
void div(int a , int b)
{
	cout<<"\nDivision is : "<<a/b;
}
