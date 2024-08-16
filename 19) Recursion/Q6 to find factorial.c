#include<stdio.h>
#include<conio.h>

int ai(int n)
{
	if(n<=1)
	{
		return 1;
	}
	else
	{
		return n*ai(n-1);
	}
}

void main()
{
	int n,f;
	printf("Enter a number:");
	scanf("%d",&n);
	f=ai(n);
	printf("\nFactorial = %d",f);
	
	getch();
}


