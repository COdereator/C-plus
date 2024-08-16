//Q2 Program to find sum, product and average of all elements of matrix 

#include<iostream>
using namespace std;

int main()
{
	int a[10][10], i , j ,r,c  , p=1;
	float s=0 , avg=0 ; 
	cout<<"\nEnter Number of Rows and Column: ";
	cin>>r>>c;
	cout<<"\nEnter "<<r*c<<" Elements: \n";
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c; j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"\nMatrix:\n";
	for(i=0 ; i<r ; i++)           //for sum product and average
	{
		for(j=0 ; j<c; j++)
		{
			cout<<a[i][j]<<"  ";
			s=s+a[i][j];
			p=p*a[i][j];
		}
		cout<<endl;
	}
	cout<<"\nSum of All Elements : "<<s;
	cout<<"\nProduct of All Elements : "<<p;
	cout<<"\nAverage of All Elements : "<<s/(r*c);
	
	return 0;
}
