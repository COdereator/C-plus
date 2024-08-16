//program to find sum of digits of a number 

#include<stdio.h>
#include<conio.h>
int sum (int);

void main()
{
	int n , s=0 ; 
	printf("\nEnter Any Number: ");
	scanf("%d",&n);
	s=sum(n);
	printf("\nSum of Numbers: %d", s);
}

int sum(int n )
{
	static int ans=0 , d ;
	if(n!=0)
	{
		d=n%10;
		ans=ans+d;
		sum(n/10);
	}
	if(n==0)
	{
		return ans;
	}
}
