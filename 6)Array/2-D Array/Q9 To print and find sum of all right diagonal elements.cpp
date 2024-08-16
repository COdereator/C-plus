//Q9 Program to print and find  sum of all right diagonal elements 

#include<iostream>
using namespace std;

int main()
{
	int a[10][10] , i , j , n , s=0 ;
	cout<<"\nEnter number of Rows which is Equal to columns: ";
	cin>>n;
	cout<<"\nEnter "<<n*n<<" Matrix Elements :\n";
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n ; j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"\nMatrix : \n";
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n ; j++)
		{
			cout<<a[i][j] <<"  ";
		}
		cout<<endl;
	}
	cout<<"\nDiagonals of a Matrix: \n";
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n ; j++)
		{
			if(i+j==(n-1))
			{
				cout<<a[i][j];
				s=s+a[i][j];
			}
			else
			{
				cout<<"    ";
			}
		}
		cout<<endl;
	}
	cout<<"\nSum of Right Diagonal Element: "<<s;
}
