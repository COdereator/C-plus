//Q5 Program to find Multiplication of two matrices

#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int a[10][10], b[10][10] , c[10][10] , i , j , k , r , col , s;
	cout<<"\nEnter Number of Rows and Columns: ";
	cin>>r>>col;
	cout<<"\nEnter "<<r*col<<" Elements of Matrix 1: \n";
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<col ; j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"\nEnter "<<r*col<<" Elements of Matrix 2: \n";
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<col ; j++)
		{
			cin>>b[i][j];
		}
	}
	//for Multiplication
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<col ; j++)
		{
			for(k=0 ; k<col ; k++)
			{
			    s=s+(a[i][k]*b[k][j]);
			}
			c[i][j]=s;
			s=0;
		}
	}
	system("cls");
	cout<<"\n\nMatrix 1: \n";
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<col ; j++)
		{
			cout<<a[i][j] <<"   ";
		}
		cout<<endl;
	}
	cout<<"\n\nMatrix 2: \n";
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<col ; j++)
		{
			cout<<b[i][j]<<"  ";
		}
		cout<<endl;
	}
	cout<<"\n\nMultiplication Matrix : \n";
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<col ; j++)
		{
			cout<<c[i][j]<<"   ";
		}
		cout<<endl;
	}
	
	return 0;
}
