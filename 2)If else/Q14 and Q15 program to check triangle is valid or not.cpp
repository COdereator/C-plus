//Q14 and Q15 program to check triangle is valid or not
#include<iostream>
using namespace std;

int main()
{
	int a,b,c,opt;
	cout<<"\nPress 1 for Angles \nPress 2 for Sides\nEnter your option Number:";
	cin>>opt;
	if(opt==1)
	{
		cout<<"Enter 3 angles of triangle : ";
		cin>>a>>b>>c;
		if(a+b+c==180)
		{
			cout<<"\nTriangle is Valid";
		}
		else
		{
			cout<<"\nTriangle is Not Valid";
		}
	}
	else if(opt==2)
	{
		cout<<"\nEnter 3 sides of Trinagle : ";
		cin>>a>>b>>c;
		if(a==b && a==c)
		{
			cout<<"\nTriangle is Equilateral Triangle";
		}
		else if((a==b && a!=c)||(a==c && a!=b) || (b==c && b!=a))
		{
			cout<<"\nTriangle is Isoceles Triangle";
		}
		else
		{
			cout<<"\nTriangle is Scalene Triangle";
		}
		
	}
	else
	{ 
		cout<<"You Fool !!!\nPress only 1 or 2";
	}
}
