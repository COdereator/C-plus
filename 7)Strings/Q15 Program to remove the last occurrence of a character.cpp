//Q15 Program to remove the last occurrence(delete the character from its last index value) of a character from string 

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[255] , word ;
	int i , len ;
	cout<<"\nEnter your String : ";
	cin.get(str , 255 , '\n');
	len=strlen(str);
	cout<<"\nLength of String : "<<len;
	getchar();
	cout<<"\nEnter your character to Remove : ";
	cin>>word;
	i=len ;
	while(i>=0 && str[i]!=word)
	{
		i--;
	}
	while(i<len)
	{
		str[i]=str[i+1];
		i++;
	}
	cout<<"\nString After Removing First Occurrence of character "<<word<<" is : \n "<<str;
	cout<<"\nLength of string : "<<strlen(str);
	return 0;
}
