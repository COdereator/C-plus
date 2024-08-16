//Q10  Program to check the string is palindrome or not


#include<iostream>
#include<string.h>
using namespace std;

int main()
{                   
	char str[50];
	int i , len , count=1;
	cout<<"\nEnter Your String : ";
	cin.get(str , 50 , '\n');
	len=strlen(str);
	cout<<"\nlen:"<<len<<endl;
	for(i=0  ; str[i]!='\0' ; i++)
	{
		if(str[i]!=str[len-1-i])
		{
			count=0;
			break;
		}
	}
	if(count==0)
	{
		cout<<"\nString is Not Palindrome";
	}
	else
	{
		cout<<"\nString is  Palindrome";
	}
	return 0;
}
