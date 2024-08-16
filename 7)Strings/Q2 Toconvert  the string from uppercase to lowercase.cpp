//Q2 Program to convert  the string from uppercase to lowercase or vice versa

#include<iostream>
//#include<stdio.h>
//#include<string.h>
using namespace std;
int main()
{
	char str[10];
	cout<<"\nEnter a String : ";
//	gets(str);
//	cout<<"\nString in Uppercase : "<<strupr(str);
//	cout<<"\nString in Lowercase : "<<strlwr(str);
	cin.get(str , 10  , '\n');
	cout<<"\nString is: "<<str;
}
