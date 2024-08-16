//Q3) Program to print full Diamond Pattern using stars

//Output :
//Enter Number of Rows: 5
//Full Pyramid Using Stars
//
//     *
//    * *
//   * * *
//  * * * *
// * * * * *
//  * * * *
//   * * *
//    * *
//     *

#include<iostream>
using namespace std;

int main()
{
	int rows  , i , j , k;          //k is for Space
	cout<<"\nEnter Number of Rows: ";
	cin>>rows;
	cout<<"\nFull Pyramid Using Stars"<<endl<<endl;
	for(i=1 ; i<=rows ; i++)           //For Upper Half triangle 
	{
		for(k=1 ; k<=rows-i ; k++)
		{
			cout<<" ";
		}
		for(j=1 ; j<=i ; j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	for(i=rows-1 ; i>=1 ; i--)           //For lower Half triangle 
	{
		for(k=1 ; k<=rows-i ; k++)
		{
			cout<<" ";
		}
		for(j=1 ; j<=i ; j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}
