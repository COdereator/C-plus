//Q5 Program to check whether a number is even or odd and find factorial

#include<iostream>
using namespace std;

int main()
{
	void eo();
	void factorial();
	eo();
	factorial();
	return 0;
}

void eo()
{ 
    int a ;
	cout<<"\nEnter a Number: ";
	cin>>a;
	if(a%2==0)
	{
		cout<<"\nNumber is Even ";
	}
	else
	{
		cout<<"\nNumber is Odd ";
	}
	
}
void factorial()
{
	int a , ans=1 , i;
	cout<<"\nEnter a Number: ";
	cin>>a;
	for(i=1  ; i<=a ; i++)
	{
		ans=ans*i;
	}
	cout<<"\nFactorial : "<<ans;
}

