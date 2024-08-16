

//Q6 program to find sum of colum Elements of matrix of order R×C

#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int i , j , r, c , sum , a[10][10];
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
	system("cls");
	//Column elements Summation
	cout<<"\nMatrix of Column elements Summation : \n";
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			cout<<"    "<<a[i][j]<<"  ";
		}
		cout<<endl;
	}
	//Column elements Summation
	cout<<"\nSum:";
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			sum=sum+a[j][i];
		}
		cout<<sum<<"     ";
		sum=0;
	}	
}	


