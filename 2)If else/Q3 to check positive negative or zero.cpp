//Q3 program to check positive , negative or zero
#include<iostream>
using namespace std;

int main()
{
	int a;
	cout<<"Enter a Number:";
	cin>>a;
    if(a>0)
    {
    	cout<<a<<" is positive";
	}
	else if(a<0)
	{
    	cout<<a<<" is negative";
	}
	else 
	{
		cout<<a<<" is Zero";
	}
	return 0;
}
