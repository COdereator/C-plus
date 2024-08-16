//Q2) Program to find sum of  1 to 10 even numbers using loop

#include<iostream>
using namespace std;

int main()
{
	int i=1,sum=0;
	while(i<=20)
	{
		
		if(i%2==0)
		{
			sum=sum+i;
		}
		    
		i++;
	}
	cout<<"\nSum of 1st 10 even Numbers : "<<sum;
	
}
