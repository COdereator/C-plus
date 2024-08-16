//Q17 Program to find factorial of Given number

#include<iostream>
using namespace std;

int main()
{
	int n , s=1, i;
	cout<<"\nEnter a Number: ";
	cin>>n;
	for(i=1 ; i<=n ; i++)
	{
		s=s*i;
	}
	cout<<"\nFactorial  : "<<s;
	
}
