//Q9 Program to find all perfect numbers between given interval using functions

#include<iostream>
using namespace std;

int main()
{
	void perfect();
	perfect();
	return 0;
}

void perfect()
{
	cout<<"\t\t\tPerfect Numbers in Range \t\t\t\n\n";
 	int a , b , s  , i;
 	cout<<"\nEnter the First and Last Limit: ";
 	cin>>a>>b;
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
