//Q1 program to print and read matrix of order R×C

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
}
