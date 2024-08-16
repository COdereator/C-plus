//Q4) program to find table of any number in form(2×1=2) using loop
#include<iostream>
using namespace std;

int main()
{
	float i=1 , n ;
	cout<<"Enter the Number on Which u table Want: ";
	cin>>n;
	while(i<=10)
	{
		cout<<n<<" X "<<i<<" = "<<n*i<<endl;
		i++;
	}
	return 0;
}
