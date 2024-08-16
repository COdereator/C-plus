//Q9 Program to Print Right Inverted Half Pyramid of stars

//  Output:- 
//  Enter No of Rows: 5
//	Right Inverted Half Pyramid of stars:
//  * * * * *
//    * * * *
//      * * *
//        * *
//          *


#include<iostream>
using namespace std;

int main()
{
	int rows , i , j , k ;
	cout<<"\nEnter No of Rows: ";
	cin>>rows;
	cout<<"\nRight Inverted Half Pyramid of stars: "<<endl<<endl;
	for(i=1 ; i<=rows ; i++)
	{
		for(k=1 ; k<=i ; k++)
		{
			cout<<"  ";
		}
		for(j=i ; j<=rows ; j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}
