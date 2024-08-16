//c program to to generate a fibbonacci series
#include<stdio.h>
#include<conio.h>

void fib(int,int, int);

void main()
{
 	int num ;
 	printf("Enter the last limit:");
 	scanf("%d",&num);
 	printf("0  1  " );
 	fib(0 , 1 , num );
 	getch();
}

void fib(int f0 ,int f1 , int l)
{
	static int n=1 , f=0 ;
    if(n<=l-2)
    {
    	f=f0+f1;
		printf("%d  ",f);
		n++;
		fib(f0=f1 , f1=f , l);
	}
	
}
