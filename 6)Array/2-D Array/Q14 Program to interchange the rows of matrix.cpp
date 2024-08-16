//Q14 Program to interchange the rows of matrix 

#include<iostream>
using namespace std;

int main()
{
	int a[10][10], i , j , n , r , c ,r1 , r2 , t[10][10];
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
	cout<<"\nEnter which row u have to change from which row: ";
	cin>>r1>>r2;
	//interchanging rows 
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			t[i][j]=a[r1-1][j];
			a[r1-1][j]=a[r2-1][j];
			a[r2-1][j]=t[i][j];
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
	

