//Q6 Program to Print Half Pyramid Pattern using Stars

// Output:-
// Enter Number of Rows: 5
// Half Pyramid Pattern:

// *
// * *
// * * *
// * * * *
// * * * * *

#include<iostream>
using namespace std;

int main()
{
	int rows ,  i , j ;
	cout<<"\nEnter Number of Rows: ";
	cin>>rows;
	cout<<"\nHalf Pyramid Pattern: \n\n";
	for(i=1 ; i<=rows ; i++)
	{
		for(j=1 ; j<=i ; j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}
