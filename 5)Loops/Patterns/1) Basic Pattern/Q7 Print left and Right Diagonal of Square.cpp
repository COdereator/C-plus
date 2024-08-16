//Q7 Program to print left and Right Diagonal of Square 

#include<iostream>
using namespace std;

int main()
{
	int i , j , side ;
	cout<<"\nEnter No of side Equal to Columns: ";
	cin>>side;
	cout<<"\nLeft Diagonal Square Pattern using Stars "<<endl;
	for(i=1 ; i<=side ; i++)      // i is for rows
	{
		for(j=1 ; j<=side ;j++)    // j is for Columns
		{
			if(i==j)
			{
				cout<<"* ";
			}
			else
			{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
	cout<<"\nRight Diagonal Square Pattern using Stars "<<endl<<endl;
	for(i=1 ; i<=side ; i++)      // i is for Column
	{
		for(j=1 ; j<=side ;j++)    // j is for rows
		{
			if(i+j==side+1)
			{
				cout<<"   *";
			}
			else
			{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
	return 0;
}
