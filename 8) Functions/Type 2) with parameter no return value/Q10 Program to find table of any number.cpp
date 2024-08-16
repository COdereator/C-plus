//Q10 Program to find table of any number  using functions 

#include<iostream>
using namespace std;
int main()
{
	int n , a ;
	cout<<"\n\t\tTable of a Number\t\t\n\n";
	cout<<"\nEnter the Number: ";
	cin>>n;
	cout<<"\nEnter the last Multiple Limit: ";
	cin>>a;
	void table(int n , int a );
	table(n , a );
	return 0;
}


void table(int n , int a)
{
	int  i;
	for(i=1 ; i<=a ; i++)
	{
		cout<<"\n"<<n<<" X "<<i<<" = "<<n*i;
	}
}
