//Q16 Program to remove the All occurrence(delete the character from its All index value) of a character from string 

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[255] , word ;
	int i=0 , len , j;
	cout<<"\nEnter your String : ";
	cin.get(str , 255 , '\n');
	len=strlen(str);
	cout<<"\nLength of String : "<<len;
	cout<<"\nEnter your character to Remove : ";
	cin>>word;
	for(i=0 ; i<=len ; i++)
	{
//		count=0;
		if(str[i]==word)
		{
			for(j=i ; j<=len ; j++)
			{
				str[j]=str[j+1];
			}
			i--;
			len--;
		}
	}
	cout<<"\nString After Removing First Occurrence of Word "<<word<<" is : "<<str;
	cout<<"\nLength of String : "<<len;
	return 0;
}
