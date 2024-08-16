//Q1 Program to find Square and cube of any Number

#include<iostream>
using namespace std;

int main()
{
	int a , b;
	int sq();
	int cu();
	a=sq();
	cout<<"Square is : "<<a;
	b=cu();
	cout<<"Cube is : "<<b;
	return 0;
}

int sq()
{ 
    int a , ans;
	cout<<"\nEnter a Number: ";
	cin>>a;
	ans=a*a;
	return ans;
}
int cu()
{
	int a , ans;
	cout<<"\nEnter a Number: ";
	cin>>a;
	ans=a*a*a;
	return ans;
}

