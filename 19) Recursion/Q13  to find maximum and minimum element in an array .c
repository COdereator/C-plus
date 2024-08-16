
//Q13 program to find maximum and minimum element in an array 

#include<stdio.h>
#include<conio.h>

int maximum(int arr[30] , int n , int max);
int minimum(int arr[30] , int n , int min);
int main()
{
	int arr[30] , i , n , max , min,size;
	printf("\nEnter Number of Elements : ");
	scanf("%d",&n);
	printf("\nEnter %d Elements ", n );
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",&arr[i]);
	}
	size=n;
	max=maximum(arr , n , 0 );
	printf("\nMaximum Element of Array using Recursion : %d \n", max);
	min=minimum(arr , size , 9);
	printf("\nMinimum Element of Array using Recursion : %d \n", min);
	return 0;
}

int maximum(int arr[30] , int n , int max)
{
	static int i=0;
	if(i<n)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
		i++;
		return maximum(arr , n , max);
	}
	return max;
}
int minimum(int arr[30] , int n , int min)
{
	static int i=0;
	if(i<n)
	{
		if(min>arr[i])
		{
			min=arr[i];
		}
		i++;
		return minimum(arr , n , min);
	}
	return min;	
}


