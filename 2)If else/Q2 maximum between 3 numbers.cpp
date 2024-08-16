//Q2 program for to find maximum between three numbers
#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"Enter Three Numbers:";
	cin>>a>>b>>c;
    if(a>b && a>c)
    {
    	cout<<"Maximum: "<<a;
	}
	else if(b>c && b>a)
	{
    	cout<<"Maximum: "<<b;
	}
	else if(c>a && c>b)
	{
		cout<<"\nMaximum: "<<c;
	}
	else
	{
		cout<<"\nAll are Equal ";
	}
	return 0;
}
