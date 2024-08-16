//Q11 program to print 1 to 7

#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter a number between 1 to 7: ";
	cin>>a;
	if(a==1)
	{
		cout<<"Its Monday";
	}
	else if(a==2)
	{
		cout<<"Its Tuesday";
	}
	else if(a==3)
	{
		cout<<"Its Wednesday";
	}
	else if(a==4)
	{
		cout<<"Its Thursday";
	}
	else if(a==5)
	{
		cout<<"Its Friday";
	}
	else if(a==6)
	{
		cout<<"Its Saturday";
	}
	else if(a==7)
	{
		cout<<"Its Sunday";
	}
	else
	{
		cout<<"You Fool!!!\nPress only 1 to 7";
	}
	return 0;
}
