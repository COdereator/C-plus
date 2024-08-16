//Q14 Program to remove the first occurrence(delete the character from its first index value) of a character from string 

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[255] , word ;
	int i=0 , j , len ;
	cout<<"\nEnter your String : ";
	cin.get(str , 255 , '\n');
	len=strlen(str);
	getchar();
	cout<<"\nLength of String Before Removing : "<<strlen(str);
	cout<<"\nEnter your character to Remove : ";
	cin>>word;
	while(i<len && str[i]!=word)
	{
		i++;
	}
	while(i<len)
	{
		str[i]=str[i+1];
		i++;
	}
	cout<<"\nString After Removing First Occurrence of Word '"<<word<<"' is : "<<str;
	cout<<"\nLength of String  after Removing : "<<strlen(str);
	return 0;
}
