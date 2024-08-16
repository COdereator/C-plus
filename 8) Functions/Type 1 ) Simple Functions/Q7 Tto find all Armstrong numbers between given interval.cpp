//Q7 Program to find all Armstrong numbers between given interval

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	void range();
	range();
	return 0;
}

void range()
{
	cout<<"\n\nArmstrong Number in a Range\n\n";
	int a , b , d , s , c ;
	cout<<"\nEnter the First and Last Limit: ";
	cin>>a>>b;
	while(a<=b)
	{
		c=a;
		d=0;
		s=0;
		while(c!=0)
		{
			d=c%10;
			s=s+(d*d*d);
			c=c/10;
		}
		if(s==a)
		{
			cout<<"\n"<<a;
		}
	    a++;	
	}
	getch();
}
