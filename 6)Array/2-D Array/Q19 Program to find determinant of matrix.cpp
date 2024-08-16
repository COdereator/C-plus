//Q19 Program to find determinant of matrix 
#include<iostream>
using namespace std;
int main()
{
	int i , j , n , k ,  a[10][10],p,q,r,det=0;
	cout<<"\nEnter number of Rows Equal to columns: ";
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
	cout<<"\n";
	if(n==2)
	{
		for(k=0 ; k<n-1 ; k++)
		{
			p=a[k][k]*a[k+1][k+1];
			q=a[k][k+1]*a[k+1][k];
			det=det+(p-q);
		}
		cout<<"\nDeterminant of Matrix A :\n |A|= "<<det;
	}
	if(n==3)
	{
		for(k=0 ; k<n-2 ; k++)
		{
			p=a[k][k]*((a[k+1][k+1]*a[k+2][k+2])-(a[k+1][k+2]*a[k+2][k+1]));
			q=a[k][k+1]*((a[k+1][k]*a[k+2][k+2])-(a[k+1][k+2]*a[k+2][k]));
			r=a[k][k+2]*((a[k+1][k]*a[k+2][k+1])-(a[k+1][k+1]*a[k+2][k]));
			det=det+(p+r)-q;
		}
		cout<<"\nDeterminant of Matrix \n|A|= "<<det;
	}
	
	return 0;
}
