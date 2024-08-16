//program to print odd and even numbers in a range
#include<stdio.h>
#include<conio.h>

int even(int k,int l);
int odd(int c,int d);

int even(int k,int l)
{
    if(k>l)
    {
       return 1;
    }
	if(k%2==0 && k<=l)
	{
		printf("%d  ",k);
	     
	}
	even(k+1,l);
}
int odd(int c,int d)
{
  if(c>d)
  {
    return 0;
  }
	if(c%2==1)
	{
		printf("%d  ",c);
    }
		odd(c+1,d);

}
void main()
{
	int a,b;
	printf("Enter the first and last limit of range:");
	scanf("%d%d",&a,&b);
	printf("\nEven numbers in range of %d to %d is :\n",a,b);
	even(a,b);
	int e=a;
	int f=b;
	printf("\nOdd numbers in range of %d to %d is :\n",e,f);
	odd(e,f);
	getch();
}

