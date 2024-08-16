//Q4 Program to compare two strings

#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1 ,s2;
	cout<<"\nEnter string 1: ";
	cin>>s1;
	cout<<"\nEnter String 2: ";
	cin>>s2;
	if(s1==s2)
	{
		cout<<"\nStrings Equal ";
	}
	else
	{
		cout<<"\nNot Equal";
	}
	return 0;
}
