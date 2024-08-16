//Q10 Program to Print Full Pyramid Pattern using Stars

#include<iostream>
using namespace std;

int main()
{
	int rows , i , j , k ; 
	cout<<"\nEnter No of Rows: ";
	cin>>rows;
//
//	 	     *
//   	   * * *
//   	 * * * * *
//     * * * * * * *
//	 * * * * * * * * *
//
	cout<<"\n\nFull Pyramid Pattern Using Stars:(For Odd Stars in a Row)"<<endl<<endl;
	for(i=1 ; i<=rows ; i++)
	{
		for(k=1 ; k<=rows-i ; k++)
		{
			cout<<"  ";
		}
		for(j=1 ; j<=(2*i-1) ; j++)        //for odd Stars in a Row
		{
			cout<<"* ";
		}
		cout<<endl;
	}
//	
//	    *
//	   * *
//	  * * *
//	 * * * *
//	* * * * *
//
	cout<<"\n\nFull Pyramid Pattern Using Stars:(For Even Stars in a Row)"<<endl<<endl;
	for(i=1 ; i<=rows ; i++)
	{
		for(k=1 ; k<=rows-i ; k++)
		{
			cout<<" ";
		}
		for(j=1 ; j<=i ; j++)        //for Even Stars in a Row
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	
}

