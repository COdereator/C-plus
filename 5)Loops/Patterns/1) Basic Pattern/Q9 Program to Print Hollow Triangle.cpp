//Q9 Program to Print Hollow Triangle Using Stars

#include<iostream>
using namespace std;

int main()
{
	
	int i , j , rows , k  ;
	cout<<"\nEnter Number of Rows : ";
	cin>>rows;
	for(i=1 ; i<=rows ; i++)
	{
		for(k=1 ; k<=rows-i ; k++)
		{
			cout<<"  ";
		}
		for(j=1 ; j<=(2*i-1) ; j++)
		{
			if(i==rows || j==1 || j==(2*i-1))
			{
				cout<<"* ";
			}
			else
			{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
	return 0;
}
