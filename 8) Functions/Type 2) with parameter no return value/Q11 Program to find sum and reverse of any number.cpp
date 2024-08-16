//Q11 Program to find sum and reverse of any number using functions

#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"\nEnter a Number : ";
	cin>>num;
	void sum(int num);
	void rev(int num);
	sum(num);
	rev(num);
	return 0;
}

void sum(int num)
{
	cout<<"\n===================================================\n";
	int  d, s=0 , temp ;
	temp=num;
	while(temp!=0)
	{
		d=temp%10;
		s=s+d;
		temp=temp/10;
	}
	cout<<"Sum of  Number: "<<s;
}
void rev(int num)
{
	cout<<"\n===================================================\n";
	int temp , d , reverse=0;
	temp=num;
	while(temp!=0)
	{
		d=temp%10;
		reverse=(reverse*10)+d;
		temp=temp/10;
	}
	cout<<"Reverse Number: "<<reverse;
}

