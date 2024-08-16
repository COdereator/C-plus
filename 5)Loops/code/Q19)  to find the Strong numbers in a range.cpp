//Q19) Program to find the Strong numbers in a range 

#include<iostream>
using namespace std;

int main()
{
	int a , sum ,  b, i , c , m,  d ;
	cout<<"\nEnter the First And Last Limit: ";
	cin>>a>>b;
	while(a<=b)
	{
		sum=0 ; 
		c=a;
		while(c!=0)
		{     
			d=c%10;
			m=1;
			for(i=1 ; i<=d ; i++)
			{
				m=m*i;
			}
			sum=m+sum;
			c=c/10;
		}
		if(a==sum)
		{
			cout<<"\n"<<a;
		}
		a++;
	}
	
	return 0;
}
