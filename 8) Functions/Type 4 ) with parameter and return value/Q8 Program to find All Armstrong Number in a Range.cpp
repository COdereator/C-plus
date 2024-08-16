//Q8 Program to find All Armstrong Number in a Range 

#include<iostream>
using namespace std;

int main()
{
	int a , b ;
	cout<<"\nEnter the First and Last Limit: ";
	cin>>a>>b;
	int armstrong(int a , int b);
	armstrong(a , b);
	return 0;
}

int armstrong()
{
	int c , d , s;
	while(a<=b)
	{
		d=0 , s=0;
		for(c=a ; c!=0 ; c=c/10)
		{
			d=c%10;
			s=s+(d*d*d);
		}
		if(a==s)
		{
			cout<<"\n"<<a;
		}
		a++;
	}
}
