//Q4 Program to find maximum and minimum between 3 numbers

#include<iostream>
using namespace std;

int main()
{
	void max();
	void min();
	max();
	min();
	return 0;
}
void max()
{
	float a , b ,c ;
	cout<<"\nEnter 3 Numbers: ";
	cin>>a>>b>>c;
	if(a>b && a>c)
	{
		cout<<a<<" is Maximum ";
	}
	else if(b>a && b>c)
	{
		cout<<b<<" is Maximum ";
	}
	else 
	{
		cout<<c<<" is Maximum ";
	}
}
void min()
{
	float a , b ,c ;
	cout<<"\nEnter 3 Numbers: ";
	cin>>a>>b>>c;
	if(a<b && a<c)
	{
		cout<<a<<" is Minimum ";
	}
	else if(b<a && b<c)
	{
		cout<<b<<" is Minimum ";
	}
	else 
	{
		cout<<c<<" is Minimum ";
	}
}
