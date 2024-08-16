//Q5 Program to check whether a number is even or odd and find factorial

#include<iostream>
using namespace std;

int main()
{
	int f;
	int eo();
	int factorial();
	eo();
	f=factorial();
	cout<<"Factorial: "<<f;
	return 0;
}

int eo()
{ 
    int a ;
	cout<<"\n--------For Even Odd-----------------\nEnter a Number: ";
	cin>>a;
	if(a%2==0)
	{
		cout<<"Number is Even ";
	}
	else
	{
		cout<<"Number is Odd ";
	}
	return 0;
}
int factorial()
{
	int a , ans=1 , i;
	cout<<"\n\n------------------For Factorial--------------\nEnter a Number: ";
	cin>>a;
	for(i=1  ; i<=a ; i++)
	{
		ans=ans*i;
	}
	return ans;
}

