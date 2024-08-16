//Q10 Program to find table of any number

#include<iostream>
using namespace std;

int main()
{
	int n ,  l ;
	cout<<"\nEnter the Number and Last Limit of Multiple : ";
	cin>>n>>l;
	int table(int n , int l);
	table(n , l);
	return 0;
}

int table(int n ,int l)
{
	int i;
	for(i=1 ;i<=l ; i++)
	{
		cout<<endl<<n<<" X "<<i<<" = "<<n*i;
	}
	return 0;
}
