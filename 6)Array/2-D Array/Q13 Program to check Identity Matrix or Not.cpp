//Q13 Program to check Identity Matrix or Not

#include<iostream>
using namespace std;

int main()
{
	int a[10][10], i , j , n  , c;
	cout<<"\nEnter No of Rows equal to column Columns : ";
	cin>>n;
	cout<<"\nEnter "<<n*n<<" Elements: \n";
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n ; j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"\n\nMatrix 1: \n";
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n ; j++)
		{
			cout<<a[i][j]<<"   ";
		}
		cout<<endl;
	}
	//checking identity or not
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n ; j++)
		{
			if(i==j && a[i][j]!=1)
			{
				c=1;
			
			}
		}
	}
			
	if(c==0 )
	{
		cout<<"\nMatrix is  Identity Matrix \n";
	}
	else
	{
			cout<<"\nMatrix is not  Identity Matrix \n";
	}
	return 0;
}
