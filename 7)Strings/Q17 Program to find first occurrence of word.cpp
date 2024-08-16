//Q17 Program to find first occurrence of word from string 

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[255] , word[20];
	int i , j , lenstr , lenword , count;
	
	cout<<"\nEnter your String :";
	cin.get(str , 255 , '\n');
	
	lenstr=strlen(str);
	
	cout<<"\nLength of String : "<<lenstr;
	
	getchar();
	
	cout<<"\nEnter your Word to Find First Occurrence  :";
	cin.get(word , 20 , '\n');
	
	lenword=strlen(word);
	
	cout<<"\nLength of Word : "<<lenword;
	for(i=0 ; str[i]!='\0' ; i++)
	{
		count=0;
		if(str[i]==word[0])
		{
			count=1;
			for(j=0 ; word[j]!='\0' ; j++)
			{
				if(str[i+j]!=word[j])
				{
					count=0;
					break;
				}
			}
		}
		if(count==1)
		{
			cout<<"\n '"<<word<<" ' is found at index "<<i+1;
			break;
		}
	}
	if(count==0)
	{
		cout<<"\nWord not Found ";
	}
	return 0;
}
