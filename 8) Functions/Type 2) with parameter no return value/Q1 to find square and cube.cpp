//Q1 Program to find Square and cube of any Number

#include<iostream>
using namespace std;

int main()
{
	int a;
	void sq(int a);
	void cu(int a);
	cout<<"\nEnter a Number: ";
	cin>>a;

	sq(a);
	cu(a);
	return 0;
}

void sq(int a)
{ 
	cout<<"\nSquare is : "<<a*a;
}
void cu(int a)
{
	cout<<"\nCube is : "<<a*a*a;
}

