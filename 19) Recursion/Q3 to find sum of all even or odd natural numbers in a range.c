//program to find sum of all even  natural numbers in a range
#include<stdio.h>
#include<conio.h>

int even(int ,int );
int odd(int ,int );

int even(int k,int l)
{
	if(k>l)
	{
		return 0;
	}
	if(k%2==0)
	{
	    return  k+even(k+1,l);
	}
	return even(k+1,l);
}
int odd(int c,int d)
{
	if(c>d)
	{
		return 0;
	}
	if(c%2!=0)
	{
	    return  c+odd(c+1,d);
	}
	return odd(c+1,d);
}

int main()
{
	int a,b,sum1,sum2;
	printf("Enter the first limit of range:");
	scanf("%d",&a);
	printf("Enter the last limit of range:");
	scanf("%d",&b);
	sum1=even(a,b);
	printf("\nSum of Even numbers is : %d\n",sum1);
	sum2=odd(a,b);
	printf("\nSum of Odd numbers is :%d\n",sum2);
	return 0;
}

