//Q1 Program to find Square and cube of any Number

#include<iostream>
using namespace std;

int main()
{
	void sq();
	void cu();
	sq();
	cu();
	return 0;
}

void sq()
{ 
    int a , ans;
	cout<<"\nEnter a Number: ";
	cin>>a;
	ans=a*a;
	cout<<"\nSquare is : "<<ans;
}
void cu()
{
	int a , ans;
	cout<<"\nEnter a Number: ";
	cin>>a;
	ans=a*a*a;
	cout<<"\nCube is : "<<ans;
}

