//Q8 program to find armstrong number in a range

#include<iostream>
using namespace std;

int main()
{
	int a , b ;
	cout<<"\nEnter the first and Last Limit: ";
	cin>>a>>b;
	void armstrong(int a , int b);
	armstrong(a,b);
}
void armstrong(int a , int b)
{
	int i , temp , d , s ;
	while(a<=b)
	{
		temp=a;
		d=0;
		s=0;
		while(temp!=0)
		{
			d=temp%10;
			s=s+(d*d*d);
			temp=temp/10;
		}
		if(s==a)
		{
			cout<<"\n"<<s;
		}
		a++;
	}
}
