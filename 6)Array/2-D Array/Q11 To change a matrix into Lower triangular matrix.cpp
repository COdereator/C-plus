//Q11 Program to change a matrix into Lower triangular matrix and print the matrix 

#include<iostream>
using namespace std;

int main()
{
	int i , j , r, c , a[10][10];
	cout<<"\nEnter number of Rows and columns: ";
	cin>>r>>c;
	cout<<"\nEnter "<<r*c<<" Matrix Elements :\n";
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"\nMatrix : \n";
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			cout<<a[i][j] <<"  ";
		}
		cout<<endl;
	}
	
	//changing to Upper triangular Matrix
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			if(i<j)
			{
				a[i][j]=0;
			}
		}
	}
	cout<<"\nLower Triangular Matrix : \n";
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			cout<<a[i][j] <<"  ";
		}
		cout<<endl;
	}
		
}
