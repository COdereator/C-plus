//Q12 program to print 1 to 12 for months

#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter a number between 1 to 12: ";
	cin>>a;
	if(a==1)
	{
		cout<<"Its January";
	}
	else if(a==2)
	{
		cout<<"Its February";
	}
	else if(a==3)
	{
		cout<<"Its March";
	}
	else if(a==4)
	{
		cout<<"Its April";
	}
	else if(a==5)
	{
		cout<<"Its May";
	}
	else if(a==6)
	{
		cout<<"Its June";
	}
	else if(a==7)
	{
		cout<<"Its July";
	}
	else  if(a==8)
	{
		cout<<"Its August";
	}
	else if(a==9)
	{
		cout<<"Its September";
	}
	else if(a==10)
	{
		cout<<"Its October";
	}
	else if(a==11)
	{
		cout<<"Its November";
	}
	else if(a==12)
	{
		cout<<"Its December";
	}
	else
	{
		cout<<"You Fool!!!\nPress only 1 to 12";
	}
	return 0;
}
