//Q5 program to check even or odd using switch

#include<iostream>
using namespace std;

int main()
{
	int a;
	cout<<"Enter a Number:  ";
	cin>>a;
	switch(a%2==0)
	{
		case 1:
			cout<<a<<" is Even";
			break;
			
		case 0:
			cout<<a<<" is Odd";
			break;	
	}
	
}
