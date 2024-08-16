//Q21 Program to find perfect Number in a range

#include<iostream>
using namespace std;
int main()
{
	long a , b , s , i , d , c , m ;
	cout<<"\n*****Perfect Numbers in a Range **********\n";
	cout<<"\nEnter first and Last Limit: ";
	cin>>a>>b;
	while(a<=b)
	{
		c=a;
		m=0;
		for(i=1 ; i<a ; i++)
		{
			if(a%i==0)
			{
				m=m+i;
			}
		}
	    if(a==m)
	    {
	    	cout<<m<<endl;
		}
		
		a++;
	}
}
