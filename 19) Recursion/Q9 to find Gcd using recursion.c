//Q9 to find Gcd using recursion

#include<stdio.h>
#include<conio.h>

int gcd(int , int);

int gcd(int a,int b)
{
//	while(a!=b)
//	{
	    if(a>b)
	    {
		    return gcd(a-b , b);
	    }
	    if(a<b)
	    {
		    return gcd(a,b-a);
	    }
    //}
    if(a==b)
    {
    	return a;
	}
   	
}

void main()
{
	int num1,num2,result;
	printf("\nEnter two numbers:");
	scanf("%d%d",&num1,&num2);
	result=gcd(num1,num2);
	printf("\nG.C.D = %d",result);
}




