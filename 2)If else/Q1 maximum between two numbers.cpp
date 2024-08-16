//Q1 program for to find maximum between two numbers
#include<iostream>
using namespace std;

int main()
{
	int a,b;
	cout<<"Enter two Numbers:";
	cin>>a>>b;
    if(a>b)
    {
    	cout<<"Maximum: "<<a;
    	cout<<"\nMinimum: "<<b;
	}
	else
	{
    	cout<<"Maximum: "<<b;
    	cout<<"\nMinimum: "<<a;
	}
	return 0;
}
