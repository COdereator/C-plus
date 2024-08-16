//Q5 Program to check whether a number is even or odd and find factorial

#include<iostream>
using namespace std;

int main()
{
    int a , ans  ;
	cout<<"\nEnter a Number: ";
	cin>>a;
	int eo(int a);
	int factorial(int a);
	eo(a);
	ans=factorial(a);
	cout<<"\nFactorial : "<<ans;
	return 0;
}

int eo(int a)
{ 
	if(a%2==0)
	{
		cout<<"\nNumber is Even ";
	}
	else
	{
		cout<<"\nNumber is Odd ";
	}
	return 0;
}
int factorial(int a )
{
	long  ans=1 , i;
	for(i=1  ; i<=a ; i++)
	{
		ans=ans*i;
	}
	return ans;
}

