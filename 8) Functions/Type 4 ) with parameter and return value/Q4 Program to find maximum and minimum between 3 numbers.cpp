//Q4 Program to find maximum and minimum between 3 numbers

#include<iostream>
using namespace std;

int main()
{
	int a , b , c;
	int max(int a , int b , int c);
	int  min(int a , int b , int c);
	cout<<"\nEnter 3 Numbers: ";
	cin>>a>>b>>c;
	max(a , b, c );
	min(a ,b , c );
	return 0;
}
int max(int a , int b , int c)
{
	if(a>b && a>c)
	{
		cout<<"\n"<<a<<" is Maximum ";
	}
	else if(b>a && b>c)
	{
		cout<<"\n"<<b<<" is Maximum ";
	}
	else 
	{
		cout<<"\n"<<c<<" is Maximum ";
	}
	return 0;
}
int  min(int a , int b , int c)
{
	if(a<b && a<c)
	{
		cout<<"\n"<<a<<" is Minimum ";
	}
	else if(b<a && b<c)
	{
		cout<<"\n"<<b<<" is Minimum ";
	}
	else 
	{
		cout<<"\n"<<c<<" is Minimum ";
	}
	return 0;
}
