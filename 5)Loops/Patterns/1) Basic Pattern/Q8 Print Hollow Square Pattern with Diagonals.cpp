//Q8 Program to Print Hollow Square Pattern with Diagonals

#include<iostream>
using namespace std;

int main()
{
	int i , j , side ;
	cout<<"\nEnter the side of Square : ";
	cin>>side;
	cout<<"\nHollow Square Pattern with Diagonals using Stars "<<endl<<endl;
	for(i=1 ; i<=side ; i++)          
	{
		for(j=1 ; j<=side ;j++)       
		{
			if(i==1 || i==side || j==1 || j==side || i==j || i+j==side+1)
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
