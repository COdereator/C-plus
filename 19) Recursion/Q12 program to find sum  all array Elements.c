//Q12 program to find sum  all array Elements using recursion ......

#include<stdio.h>
#include<conio.h>

int a(int arr[30],int n);

void main()
{
	int array[30],n,i,ans;
	printf("How many elements u want:");
	scanf("%d",&n);
	printf("\nEnter %d Elements",n);
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",&array[i]);
	}
    ans=a(array,n);
    printf("\n\nSum of Array Elements Using Recursion: %d ",ans);
	
}

int a(int arr[30] , int n)
{
	static int i=0,sum=0;
	if(i<n)
	{
		sum=sum+arr[i];
		i++;
		a(arr,n);
	}
	if(i==n)
	{
		return sum;
	}
}
