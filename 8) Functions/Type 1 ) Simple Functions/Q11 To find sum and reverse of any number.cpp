//Q11 Program to find sum and reverse of any number using functions

#include<iostream>
using namespace std;
int main()
{
	void sum();
	void rev();
	sum();
	rev();
	return 0;
}

void sum()
{
	int num , d, s=0 , temp ;
	cout<<"\n\t\tSum of Number\n" ;
	cout<<"Enter a Number: ";
	cin>>num;
	temp=num;
	while(temp!=0)
	{
		d=temp%10;
		s=s+d;
		temp=temp/10;
	}
	cout<<"Sum of  Number: "<<s;
}
void rev()
{
	cout<<"\n===================================================\n";
	cout<<"\n\t\tReverse of Number\n";
	int num , d, reverse=0 , temp ;
	cout<<"Enter a Number: ";
	cin>>num;
	temp=num;
	while(temp!=0)
	{
		d=temp%10;
		reverse=(reverse*10)+d;
		temp=temp/10;
	}
	cout<<"Reverse Number: "<<reverse;
}

