//Q13 Program to print Star Hypen Combination Pattern (right) 

//Output: 
//Enter Number of Rows: 5
//	*
//	- -
//	* * *
//	- - - -
//	* * * * *
//	- - - -
//	* * *
//	- -
//	*

#include<iostream>
using namespace std;

int main()
{
	int  rows , i , j , k ;
	cout<<"\nEnter Number of Rows: ";
	cin>>rows;
	for(i=1 ; i<=rows ; i++)          //for Upper Half Triangle
	{
		if(i%2==0)
		{
			for(j=1 ; j<=i ; j++)
			{
				cout<<"- ";
			}
		}
		else
		{
			for(k=1 ; k<=i ; k++)
			{
				cout<<"* ";
			}
		}
		cout<<endl;
	} 
	for(i=rows-1 ; i>=1 ; i--)          //for lower half triangle
	{
		if(i%2==0)
		{
			for(j=1 ; j<=i ; j++)
			{
				cout<<"- ";
			}
		}
		else
		{
			for(k=1 ; k<=i ; k++)
			{
				cout<<"* ";
			}
		}
		cout<<endl;
	}
}
