//Q7 Program to find prime Number in a Range

#include<iostream>
using namespace std;

int main()
{
	int a , b ;
	int prime(int a , int b);
	cout<<"\nEnter the First and Last Limit: ";
	cin>>a>>b;
	prime(a , b);
	return 0;
}

int prime(int a , int b)
{
	int i ;
	while(a<=b)
	{
		for(i=2 ; i<a ; i++)
		{
			if(a%i==0 )
			{
				break;
			}
		}
		if(a==i)
		{
			cout<<a<<endl;
		}
		a++;
	}
	return 0;
}
