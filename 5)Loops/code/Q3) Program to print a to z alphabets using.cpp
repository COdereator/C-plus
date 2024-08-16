//Q3) Program to print a to z alphabets using loop

#include<iostream>
using namespace std;

int main()
{
	int opt;
	char c;
	cout<<"\n1.For Lowercase  Alphabets \n2.For Uppercase Alphabets";
	cout<<"\nEnter your Option Number:";
	cin>>opt;
	if(opt==1)
	{
		c=97;
		while(c<123)
		{
			cout<<c<<"  ";
			c++;
		}
	}
	else
	{
		c=65;
		while(c<91)
		{
			cout<<c<<"  ";
			c++;
		}
		
	}
	return 0;
}
