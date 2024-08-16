//Q17 Program to sort Column Elements of matrix

#include<iostream>
using namespace std;

int main()
{
	int a[10][10], i , j , k , n , r , c  , t[10][10];
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
	//sorting column Elements
	for(k=0 ; k<r ; k++)
	{ 
	    for(i=0 ; i<r ; i++)                //i is for steps
	    {
		    for(j=0 ; j<r-1 ; j++)            // j is for comparison
		    {
			    if(a[j][k]>a[j+1][k])
			    {
			        t[i][j]=a[j][k];
			        a[j][k]=a[j+1][k];
			        a[j+1][k]=t[i][j];
			    }
		    }
	    }
	}
	cout<<"\n\nSorted Column Elements Matrix : \n";
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
	


