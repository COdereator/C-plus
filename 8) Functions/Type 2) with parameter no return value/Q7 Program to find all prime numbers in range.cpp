//Q7 Program to find all prime numbers between given interval using functions

#include<iostream>
using namespace std;

int main()
{
	int a ,b;
	cout<<"\nEnter the first and Last Limit: ";
	cin>>a>>b;
	void prime(int a , int b);
	prime(a,b);
}
void prime(int a , int b)
{
	int i ;
	while(a<=b)
	{
		for(i=2  ; i<a ; i++)
		{
			if(a%i==0)
			{
				break;
			}
		}
		if(a==i)
		{
			cout<<a<<"\n";
		}
		a++;
	}
}
