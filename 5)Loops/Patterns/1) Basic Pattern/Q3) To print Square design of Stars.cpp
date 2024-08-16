//Q3 Program to Print Square pattern using Stars

#include<iostream>
using namespace std;

int main()
{
	int i, j , side ;
	cout<<"\nEnter No of Rows Equal to Columns: ";
	cin>>side;
	cout<<"\nSquare Pattern using Stars "<<endl;
	for(i=1 ; i<=side ; i++)      // i is for row
	{
		for(j=1 ; j<=side ;j++)    // j is for column
		{
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
	return 0;
}
