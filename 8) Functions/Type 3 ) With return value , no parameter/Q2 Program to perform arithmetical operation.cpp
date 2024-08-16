//Q2 Program to perform arithmetical operation

#include<iostream>
using namespace std;

int main()
{
	int a , b , c , d;
	int add();
	int sub();
	int mul();
	int div();
	add();
	a=cout<<"Additiom is : "<<a<<"\n--------------------------------------------------";
	b=sub();
	cout<<"Subtraction  is : "<<b<<"\n------------------------------------------------";
	c=mul();
	cout<<"Multiplication is : "<<c<<"\n----------------------------------------------";
	d=div();
	cout<<"Division is : "<<d;
	return 0;
}
int add()
{
	int a , b , c;
	cout<<"\n\nEnter Two Numbers: ";
	cin>>a>>b;
	c=a + b;
	return c;
}
int sub()
{
	int a , b , c;
	cout<<"\n\nEnter Two Numbers: ";
	cin>>a>>b;
	c=a - b;
	return c;
}
int mul()
{
	int a , b , c;
	cout<<"\n\nEnter Two Numbers: ";
	cin>>a>>b;
	c=a * b;
	return c;
}
int div()
{
	int a , b , c;
	cout<<"\n\nEnter Two Numbers: ";
	cin>>a>>b;
	c=a / b;
	return c;
}
