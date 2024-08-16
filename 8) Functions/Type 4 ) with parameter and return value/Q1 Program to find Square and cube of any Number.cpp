//Q1 Program to find Square and cube of any Number

#include<iostream>
using namespace std;

int main()
{
	int a , b , c;
	int sq(int a);
	int cu(int a);
	cout<<"\nEnter a Number: ";
	cin>>a;
	b=sq(a);
	cout<<"\nSquare is : "<<b;
	c=cu(a);
	cout<<"\nCube is : "<<c;
	return 0;
}

int sq(int a)
{ 
	int c;
	c=a*a;
	return c;
}
int cu(int a)
{
	int c; 
	c=a*a*a;
	return c;
}

