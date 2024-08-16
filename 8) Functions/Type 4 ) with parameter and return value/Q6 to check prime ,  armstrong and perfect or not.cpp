//Q6 Program to check whether the number is prime , Armstrong or perfect number

#include<iostream>
using namespace std;

int main()
{
	int a;
	int prime(int a);
	int armstrong(int a);
	int perfect(int b);
	cout<<"\n\nEnter a Number : ";
	cin>>a;
	prime(a);
	armstrong(a);
	perfect(a);
	return 0;
}
int prime(int a)
{
	int  i ;
	for (i=2 ; i<a ; i++)
	{
		if(a%i==0)
		{
			cout<<"\nNumber is Not Prime ";
			break;
		}
	}
	if(a==i)
	{
		cout<<"\nNumber is Prime";
	}
	return 0;
}
int  armstrong(int a)
{
	int d , arm=0 ,  c;
	c=a;
	while(c!=0)
	{
		d=c%10;
		arm=arm+(d*d*d);
		c=c/10;
	}
	if(a==arm)
	{
		cout<<"\nNumber is Armstrong Number ";
	}
	else
	{
		cout<<"\nNumber is Not Armstrong Number ";
	}
	return 0;
}
int  perfect(int b)
{
	int i , per=0 ;
	for(i=1 ; i<b ; i++)
	{
		if(b%i==0)
		{
			per=per+i;
		}
	}
	if(per==b)
	{
		cout<<"\nNumber is perfect Number ";
	}
	else
	{
		cout<<"\nNumber is not perfect Number";
	}
	return 0;
}


