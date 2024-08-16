//Q12 program to check both matrices are identical or not

#include<iostream>
using namespace std;

int main()
{
	int i , j , r, c , a[10][10] , b[10][10] , count=1;
	cout<<"\nEnter number of Rows and columns: ";
	cin>>r>>c;
	cout<<"\nEnter "<<r*c<<" Elements Matrix 1 :\n";
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"\nEnter "<<r*c<<" Elements Matrix 2 :\n";
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			cin>>b[i][j];
		}
	}
	//printing matrices
	cout<<"\nMatrix 1: \n";
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			cout<<a[i][j] <<"  ";
		}
		cout<<endl;
	}
	cout<<"\n\nMatrix 2: \n";
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			cout<<b[i][j] <<"  ";
		}
		cout<<endl;
	}	
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			if(a[i][j]!=b[i][j])
			{
				count=0;
				cout<<"Matrices are Not Identical\n";
				break;
			}
		}
	}
	if(count==1)
	{
		cout<<"\nMatrices are Identical";
	}
	return 0;
}
