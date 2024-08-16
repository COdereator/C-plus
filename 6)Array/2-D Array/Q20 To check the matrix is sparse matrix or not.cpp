//Q20 Program to check the matrix is sparse matrix or not
#include<iostream>
using namespace std;

int main()
{
	int i , j , r, c , a[10][10] , count=0;
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
			if(a[i][j]==0)
			{
				count++;
			}
		}
		cout<<endl;
	}
	if(count >= (r*c)/2)
	{
		cout<<"\nMatrix is Sparse Matrix ";
	}
	else
	{
		cout<<"\nMatrix is Not Sparse Matrix ";
	}	
}
