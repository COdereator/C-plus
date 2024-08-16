//Q14 program to find prime number in range

#include<iostream>
using namespace std;

int main()
{
	
	int i , a , b ;
	cout<<"\nEnter the first and Last Limit: ";
	cin>>a>>b;
	cout<<"\nPrime Number in Range: "<<endl;
	while(a<=b)
	{
		for(i=2 ; i<a ; i++)
		{
			if(a%i==0)
			{
				break;
			}
		}
		if(a==i)
		{
			cout<<"\n"<<a;
		}
		a++;
	}
	return 0;
}
