//Q12 Program to Print Star Hyphen Combination pattern

//   Output:-
//    Enter Number of Rows: 5
//	Full Diamond Using Star Hyphen Combination:
//
//	    *
//	   --
//	  ***
//	 ----
//	*****
//	 ----
// 	  ***
//	   --
//	    *
	    
	    
#include<iostream>
using namespace std;

int main()
{
	int i , j , rows , k ;
	cout<<"\nEnter Number of Rows: ";
	cin>>rows;
	cout<<"\n\nFull Diamond Using Star Hyphen Combination:\n\n";
	for(i=1 ; i<=rows ; i++)
	{
		for(k=1 ; k<=rows-i ; k++)
		{
			cout<<" ";
		}
		if(i%2==0)
		{
			for(j=1 ; j<=i ; j++)
			{
				cout<<"-";
			}
		}
		else
		{
			for(j=1 ; j<=i ; j++)
			{
				cout<<"*";
			}
		}
		cout<<endl;
	}
	
	
	
	for(i=rows-1 ; i>=1 ; i--)
	{
		for(k=1 ; k<=rows-i ; k++)
		{
			cout<<" ";
		}
		if(i%2==0)
		{
			for(j=1 ; j<=i ; j++)
			{
				cout<<"-";
			}
		}
		else
		{
			for(j=1 ; j<=i ; j++)
			{
				cout<<"*";
			}
		}
		cout<<endl;
	}
	return 0;
}
