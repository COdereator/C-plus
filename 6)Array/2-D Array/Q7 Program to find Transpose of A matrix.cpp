//Q7 Program to find Transpose of A matrix

#include<iostream>
using namespace std;

int main()
{
	int a[10][10] , i , j , r , c;
	cout<<"\nEnter Number of Rows and Columns : ";
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
			cout<<a[i][j]<<"  ";
		}
		cout<<endl;	
	}
	cout<<"\nTranspose of Matrix : \n";
	for(i=0 ; i<c ; i++)
	{
		for(j=0 ; j<r ; j++)
		{
			cout<<a[j][i] <<"  ";
		}
		cout<<endl;
	}		
	return 0;
}
