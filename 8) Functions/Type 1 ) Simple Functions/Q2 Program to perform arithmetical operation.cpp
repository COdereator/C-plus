//Q2 Program to perform arithmetical operation

#include<iostream>
using namespace std;

int main()
{
	void add();
	void sub();
	void mul();
	void div();
	add();
	sub();
	mul();
	div();
	return 0;
}
void add()
{
	int a , b , c;
	cout<<"\n\nEnter Two Numbers: ";
	cin>>a>>b;
	c=a + b;
	cout<<"Additiom is : "<<c<<"\n--------------------------------------------------";
}
void sub()
{
	int a , b , c;
	cout<<"\n\nEnter Two Numbers: ";
	cin>>a>>b;
	c=a - b;
	cout<<"Subtraction  is : "<<c<<"\n------------------------------------------------";
}
void mul()
{
	int a , b , c;
	cout<<"\n\nEnter Two Numbers: ";
	cin>>a>>b;
	c=a * b;
	cout<<"Multiplication is : "<<c<<"\n----------------------------------------------";
}
void div()
{
	int a , b , c;
	cout<<"\n\nEnter Two Numbers: ";
	cin>>a>>b;
	c=a / b;
	cout<<"Division is : "<<c;
}
