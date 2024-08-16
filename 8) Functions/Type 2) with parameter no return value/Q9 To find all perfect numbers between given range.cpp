//Q9 Program to find all perfect numbers between given interval using functions

#include<iostream>
using namespace std;

int main()
{
	int a , b ;
	cout<<"\nEnter the First and Last Limit: ";
 	cin>>a>>b;
	void perfect(int a , int b);
	perfect(a,b);
	return 0;
}

void perfect(int a , int b)
{
	cout<<"\n\n\t\t\tPerfect Numbers in Range \t\t\t";
 	int  s  , i ;
 	while(a<=b)
 	{
 		s=0;
 		for(i=1 ; i<a ; i++)
 		{
			if(a%i==0)
			{
		 		s=s+i;
			}		
		}
		if(a==s)
		{
			cout<<"\n"<<a;
		}
 		a++;
 	}
}
