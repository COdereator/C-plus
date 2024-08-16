//Q8 Program to find All Armstrong Number in a Range 

#include<iostream>
using namespace std;

int main()
{
	int armstrong();
	armstrong();
	return 0;
}

int armstrong()
{
	int a , b ,c , d , s;
	cout<<"\nEnter the First and Last Limit: ";
	cin>>a>>b;
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
