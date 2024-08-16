//Q7 Program to print Inverted Right angle triangle of stars

//  Output:- 
//  Enter No of Rows: 5
//	Inverted Right angle triangle of stars:
//
//	* * * * *
//	* * * *
//	* * *
//	* *
//	*

#include<iostream>
using namespace std;

int main()
{
	int rows , i , j ;
	cout<<"\nEnter No of Rows: ";
	cin>>rows;
	cout<<"\nInverted Right angle triangle of stars: "<<endl<<endl;
	for(i=rows ; i>=1 ; i--)
	{
		for(j=1 ; j<=i ; j++)
		{
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
	return 0;
}
