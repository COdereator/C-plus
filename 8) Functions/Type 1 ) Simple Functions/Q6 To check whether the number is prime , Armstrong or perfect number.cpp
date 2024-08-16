//Q6 Program to check whether the number is prime , Armstrong or perfect number

#include<iostream>
using namespace std;

int main()
{
	void prime();
	void armstrong();
	void perfect();
	prime();
	armstrong();
	perfect();
	
	return 0;
}
void prime()
{
	int a , i ;
	cout<<"\n\nEnter a Number : ";
	cin>>a;
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
}
void armstrong()
{
	int  a , d , arm=0 ,  c;
	cout<<"\n\nEnter a Number : ";
	cin>>a;
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
}
void perfect()
{
	int  a , i , per=0;
	cout<<"\n\nEnter a Number : ";
	cin>>a;
	for(i=1 ; i<a ; i++)
	{
		if(a%i==0)
		{
			per=per+i;
		}
	}
	if(per==a)
	{
		cout<<"\nNumber is perfect Number ";
	}
	else
	{
		cout<<"\nNumber is not perfect Number";
	}
}

