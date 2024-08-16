//Q8 Program to find all prime numbers in range in  a functions 

#include<iostream>
using namespace std;
 
 int main()
 {
 	void prime();
 	prime();
 	return 0;
 }
 
 void prime()
 {
 	cout<<"\t\t\tPrime Numbers in Range \t\t\t\n\n";
 	int a , b  , i;
 	cout<<"\nEnter the First and Last Limit: ";
 	cin>>a>>b;
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
			cout<<"\t"<<a;
		}
 		a++;
	}
 }
