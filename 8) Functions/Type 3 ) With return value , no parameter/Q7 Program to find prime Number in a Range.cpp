//Q7 Program to find prime Number in a Range

#include<iostream>
using namespace std;

int main()
{
	int prime();
	prime();
	return 0;
}

int prime()
{
	int a , b , i ;
	cout<<"\nEnter the First and Last Limit in a Range: ";
	cin>>a>>b;
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
