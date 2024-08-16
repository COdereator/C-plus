//Q7 Program to find unique and duplicate elements of array

#include<iostream>
using namespace std;

int main()
{
	int a[10], value[10], index[10];
	int i , j , n  ; 
	cout<<"\nEnter Number of Elements u want : ";
	cin>>n;
	cout<<"\nEnter "<<n<<" Elements : \n";
	for(i=0 ; i<n ; i++)
	{
		cin>>a[i];
	}
	
	for(i=0 ; i<n ; i++)
	{
		index[i]=0;
	}
	cout<<"\nProgram to Find Duplicate Element :\n";
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ;  j<n ; j++)
		{
			if(a[i]==a[j])
			{
				index[i]++;
			}
		}
	}
	for(i=0 ; i<n ; i++)
	{
		if(index[i]>=1)
		{
			cout<<"\n"<<a[i];
		}
	}
}

/*  For unique Elements            code is correct
#include<stdio.h>
#include<conio.h>



int main()
{
    int a[50], b[50];
    int s,c,i,j;
 
   
    printf("Enter size: ");
    scanf("%d", &s);
    printf("Enter elements in array: ");
    for(i=0; i<s; i++)
    {
        scanf("%d", &a[i]);
        b[i] = -1;
    }
 
    
    for(i=0; i<s; i++)
    {
        c = 1;
        for(j=i+1; j<s; j++)
        {
            if(a[i] == a[j])
            {
                c++;
                b[j] = 0;
            }
        }
 
        if(b[i] != 0)
        {
            b[i] = c;
        }
    }
 
  
    printf("\nUnique elements in the array are: ");
    for(i=0; i<s; i++)
    {
        if(b[i] == 1)
        {
            printf("%d ", a[i]);
        }
    }
    
    return 0;
}
*/
