//program to print 1st 10 numbers

#include<stdio.h>
#include<conio.h>

int ai(int p , int l)
{
	
	if(p<=l)
	{
		printf("\n%d",p);
		return ai(p+1,l);
	}
}

void main()
{
	int n,f,k;
	printf("Enter the First limit:");
	scanf("%d",&f);
	printf("Enter the last limit:");
	scanf("%d",&n);
	ai(f,n);

}

