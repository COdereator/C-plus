// Q18 Program to Print Hollow Diamond Star pattern

#include<iostream>
using namespace std;
int main()
{
	int i , j ,k , n ;
	cout<<"\nEnter Number of Rows : ";
	cin>>n;
	for(i=1 ; i<=n ; i++)              // for Upper 
	{
		for(j=i ; j<=n ; j++)
		{
			cout<<"* ";
		}
		for(k=1 ; k<=2*i-2 ; k++)
		{
			cout<<"  ";
		}
		for(j=i ; j<=n ; j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	//for()
}
