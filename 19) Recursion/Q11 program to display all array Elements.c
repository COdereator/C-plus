//Q11 program to display all array Elements using recursion.....

#include<stdio.h>
#include<conio.h>

void a(int arr[30],int n);

void main()
{
	int array[30],n,i;
	printf("How many elements u want:");
	scanf("%d",&n);
	printf("\nEnter %d Elements",n);
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",&array[i]);
	}
	printf("\n\nDisplay of Array Elements using Recursion:");
	a(array,n);
	
}

void a(int arr[30] , int n)
{
	static int i=0;
	if(i<n)
	{
		printf("\n%d",arr[i]);
		i++;	
		a(arr,n);
	}
}


