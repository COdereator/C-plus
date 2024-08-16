// program to check number is palindrome or not using recursion

#include<stdio.h>
#include<conio.h>

int p(int n);
int rev(int n);

void main()
{
	int n;
	printf("Enter a  number to check whether a number is palindrome or not:");
	scanf("%d",&n);
	if(p(n)==1)
	{
		printf("\nNumber  %d is Palindrome", n);
	}
	else
	{
		printf("\nNumber %d is not palindrome", n);
	}
}


int p(int n)
{
	if(n==rev(n))
	{
		return 1;
	}
	
}
int rev(int n)
{
	static int rem=0 , d ; 
	if(n!=0)
	{
		d=n%10;
		rem=(rem*10)+d;
		rev(n/10);
	}
	else
	{
		return rem;
	}
}
