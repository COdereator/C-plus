//Q9 Program to find all perfect Numbers in a Range

#include<iostream>
using namespace std;

int main()
{
	int a , b ;
	cout<<"\nEnter the first and last limit: ";
	cin>>a>>b;
	int perfect(int a , int b);
	perfect(a,b);
	return 0;
}

int perfect(int a , int b)
{
	int s , i;
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
