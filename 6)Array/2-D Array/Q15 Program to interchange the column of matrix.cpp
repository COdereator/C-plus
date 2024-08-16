//Q15 Program to interchange the column of matrix 

#include<iostream>
using namespace std;

int main()
{
	int a[10][10], i , j , n , r , c ,c1 , c2 , t[10][10];
	cout<<"\nEnter No of Rows and Columns : ";
	cin>>r>>c;
	cout<<"\nEnter "<<r*c<<" Elements: \n";
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			cin>>a[i][j];
		}
	}
	system("cls");
	cout<<"\n\nMatrix 1: \n";
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			cout<<a[i][j]<<"   ";
		}
		cout<<endl;
	}
	cout<<"\nEnter which Column u have to change from which Column: ";
	cin>>c1>>c2;
	//interchanging columns 
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			t[i][j]=a[i][c1-1];
			a[i][c1-1]=a[i][c2-1];
			a[i][c2-1]=t[i][j];
		}
	}
	cout<<"\n\nInterchanged Matrix : \n";
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			cout<<a[i][j]<<"   ";
		}
		cout<<endl;
	}
	return 0;
	
}
	

