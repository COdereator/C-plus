//Q3 Program to concatenate two strings

#include<iostream>
#include<string.h>
#include<string>
using namespace std;

int main()
{
	string str1  ;
	string str2 ,str;
	cout<<"\nEnter string: ";
	getline(cin , str1);
	cout<<"\nEnter string: ";
	getline(cin , str2);
	str=str1 + str2;
	cout<<"\nConcatenate string "<<str;
}
