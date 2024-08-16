//Q10 Program to find table of any number  using functions 

#include<iostream>
using namespace std;
int main()
{
	void table();
	table();
	return 0;
}


void table()
{
	int n , a , i;
	cout<<"\n\t\tTable of a Number\t\t\n\n";
	cout<<"\nEnter the Number: ";
	cin>>n;
	cout<<"\nEnter the last Multiple Limit: ";
	cin>>a;
	for(i=1 ; i<=a ; i++)
	{
		cout<<"\n"<<n<<" X "<<i<<" = "<<n*i;
	}
}
