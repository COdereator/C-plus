//Q2 Program to Print Horizontal Line using Stars

#include<iostream>
using namespace std;

int main()
{
	int i=1 , n ;
	cout<<"\nEnter the Last Limit: ";
	cin>>n;
	cout<<endl;
	while(i<=n)
	{
		cout<<'*'<<" ";
		i++;
	}
}
