//Q5 program to find sum of row Elements of matrix of order R×C

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
	//row elements Summation
	cout<<"\nMatrix of Row elements Summation : \n";
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			sum=sum+a[i][j];
			cout<<a[i][j] <<"  ";
		}
		cout<<"   SUM :"<<sum;
		cout<<endl;
		sum=0;
	}	
    return 0;	
}	


