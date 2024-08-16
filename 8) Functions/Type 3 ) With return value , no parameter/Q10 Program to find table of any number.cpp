//Q10 Program to find table of any number

#include<iostream>
using namespace std;

int main()
{
	int table();
	table();
	return 0;
}

int table()
{
	int n , i , l ;
	cout<<"\nEnter the Number and Last Limit of Multiple : ";
	cin>>n>>l;
	for(i=1 ;i<=l ; i++)
	{
		cout<<endl<<n<<" X "<<i<<" = "<<n*i;
	}
	return 0;
}
