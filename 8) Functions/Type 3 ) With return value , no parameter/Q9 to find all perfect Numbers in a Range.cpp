//Q9 Program to find all perfect Numbers in a Range

#include<iostream>
using namespace std;

int main()
{
	int perfect();
	perfect();
	return 0;
}

int perfect()
{
	int a , b , s , i;
	cout<<"\nEnter the first and last limit: ";
	cin>>a>>b;
	while(a<=b)
	{
		s=0;
		for(i=1 ; i<a ; i++)
		{
			if(a%i==0)
			{
				s=s+i;
			}
		}
		if(a==s)
		{
			cout<<"\n"<<a;
		}
		a++;
	}
	return 0;
}
