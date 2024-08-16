//Q18 Program to sort the matrix using column and row sorting both

#include<iostream>
using namespace std;

int main()
{
	int a[10][10], i , j , k , n , r , c , r1 , r2 , c1 , c2  , t[10][10];
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
	//sorting row Elements
	for(k=0 ; k<r ; k++)
	{ 
	    for(i=0 ; i<r ; i++)                //i is for steps
	    {
		    for(j=0 ; j<c-1 ; j++)            // j is for comparison
		    {
			    if(a[k][j]>a[k][j+1])
			    {
			        t[i][j]=a[k][j];
			        a[k][j]=a[k][j+1];
			        a[k][j+1]=t[i][j];
			    }
		    }
	    }
	}
	cout<<endl<<"\nAfter Row sort:\n\n";
//	for(i=0 ; i<r ; i++)
//	{
//		for(j=0 ; j<c ; j++)
//		{
//			cout<<a[i][j]<<"   ";
//		}
//		cout<<endl;
//	}
	
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
	cout<<"\nSorted Matrix: \n";
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
