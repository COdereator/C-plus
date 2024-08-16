//Q14 Program to Print Diamond Using Star Hyphen Combination

//Output:-
//Enter Number of Rows 5
//Diamond Using Star Hyphen Combination:
//
//    *
//   ---
//  *****
// -------
//*********
// -------
//  *****
//   ---
//    *

#include<iostream>
using namespace std;

int main()
{
	int i , j , k ,  rows;
	cout<<"\nEnter Number of Rows ";
	cin>>rows;
	cout<<"\nDiamond Using Star Hyphen Combination:\n\n";
	for(i=1 ; i<=rows ; i++)        //for Upper Half Traingle
	{
		for(k=1 ; k<=rows-i ; k++)
		{
			cout<<" ";
		}
		if(i%2==0)
		{
			for(j=1 ; j<=(2*i-1) ; j++)
			{
				cout<<"-";
			}
		}
		else
		{
			for(j=1 ; j<=(2*i-1) ; j++)
			{
				cout<<"*";
			}
		}
		cout<<endl;
	}
	for(i=rows-1 ; i>=1 ; i--)      //for Lower triangle
	{
		for(k=1 ; k<=rows-i ; k++)
		{
			cout<<" ";
		}
		if(i%2==0)
		{
			for(j=1 ; j<=(2*i-1) ; j++)
			{
				cout<<"-";
			}
		}
		else
		{
			for(j=1 ; j<=(2*i-1) ; j++)
			{
				cout<<"*";
			}
		}
		cout<<endl;
	}
	
	// Method 2
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
				cout<<"- ";
			}
		}
		else
		{
			for(j=1 ; j<=i ; j++)
			{
				cout<<"* ";
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
				cout<<"- ";
			}
		}
		else
		{
			for(j=1 ; j<=i ; j++)
			{
				cout<<"* ";
			}
		}
		cout<<endl;
	}

	return 0;
}
