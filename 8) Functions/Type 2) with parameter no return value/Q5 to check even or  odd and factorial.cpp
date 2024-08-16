//Q5 Program to check whether a number is even or odd and find factorial

#include<iostream>
using namespace std;

int main()
{
    int a ;
	cout<<"\nEnter a Number: ";
	cin>>a;
	void eo(int a);
	void factorial(int a);
	eo(a);
	factorial(a);
	return 0;
}

void eo(int a)
{ 
	if(a%2==0)
	{
		cout<<"\nNumber is Even ";
	}
	else
	{
		cout<<"\nNumber is Odd ";
	}
	
}
void factorial(int a )
{
	long  ans=1 , i;
	for(i=1  ; i<=a ; i++)
	{
		ans=ans*i;
	}
	cout<<"\nFactorial : "<<ans;
}

