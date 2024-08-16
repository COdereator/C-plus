//Q6 Program to change value array elements

#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int a[10] , n , i , j , m ;
	cout<<"\nEnter the Number of Elements : ";
	cin>>n;
	cout<<"\nEnter "<<n<<" Elements : \n";
	for(i=0 ; i<n ; i++)
	{
		cin>>a[i];
	}
	system("cls");
	cout<<"\nAfter changing: \nPosition----->Elements\n";
	for(i=0 ; i<n ; i++)
	{
		cout<<"  "<<i+1<<"            "<<a[i]<<endl;
	}
	cout<<"\nEnter the position Number : ";
	cin>>m;
	cout<<"Enter the new Element : ";
	cin>>j;
	a[m-1]= j ;
	cout<<"\nAfter changing: \nPosition----->Elements\n";
	for(i=0 ; i<n ; i++)
	{
		cout<<"  "<<i+1<<"            "<<a[i]<<endl;
	}
	return 0;
}
