//Q4 Program to Print Rectangle pattern using Stars

#include<iostream>
using namespace std;

int main()
{
	int i, j , rows , columns;
	cout<<"\nEnter the rows and columns of Rectangle : ";
	cin>>rows>>columns;
	cout<<"\nRectangle Pattern using Stars "<<endl;
	for(i=1 ; i<=rows ; i++)         
	{
		for(j=1 ; j<=columns ;j++)       
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}
