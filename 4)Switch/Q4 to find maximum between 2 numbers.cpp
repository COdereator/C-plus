//Q4 program to find maximum between 2 numbers using switch

#include<iostream>
using namespace std;

int main()
{
	int a,b;
	cout<<"Enter two Numbers: ";
	cin>>a>>b;
	switch(a>b)
	{
		case 1:
			cout<<a<<" is greater than "<<b;
			break;
			
		case 0:
			cout<<b<<" is greater than "<<a;
			break;
			
		default:
		    cout<<"\nWrong Input";		
	}
	
}
