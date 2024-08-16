//Q8 Program to Print Right Half Pyramid of stars

//  Output:- 
//  Enter No of Rows: 5
//	Right Half Pyramid of stars:
//
//	        *
//	      * *
//	    * * *
//	  * * * *
//	* * * * *

#include<iostream>
using namespace std;

int main()
{
	int rows , i , j , k ;
	cout<<"\nEnter No of Rows: ";
	cin>>rows;
	cout<<"\nRight Half Pyramid of stars: "<<endl<<endl;
	for(i=1 ; i<=rows ; i++)
	{
		for(k=rows-1 ; k>=i ; k--)
		{
			cout<<"  ";
		}
		for(j=rows ; j>rows-i ; j--)
		{
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
	return 0;
}
