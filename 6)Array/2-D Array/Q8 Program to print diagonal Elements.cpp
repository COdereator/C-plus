//Q8 Program to print diagonal Elements

#include<iostream>
using namespace std;

int main()
{
	int a[10][10] , i , j , r , c ;
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
	cout<<"\nDiagonals of a Matrix: \n";
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			if(i==j)
			{
				cout<<a[i][j];
			}
			else
			{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
}
