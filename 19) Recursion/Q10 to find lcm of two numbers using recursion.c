//Q10 to find lcm of two numbers using recursion

#include<stdio.h>
#include<conio.h>

int lcm(int,int,int);

void main()
{
	int a,b,result;
	printf("\nEnter two numbers:");
	scanf("%d%d",&a,&b);
	result=lcm(a,b,1);
	printf("\nL.C.M = %d",result);
}

int lcm(int a , int b,int m)
{
	if(m%a==0 && m%b==0)
	{
		return m;
	}
	 lcm(a,b,m+1);
}
