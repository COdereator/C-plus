//Q20 Program to remove the first occurrence (delete the character from its first index value ) of a word from string
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[255] , word[20];
	int i , j , k=-1 , lenstr , lenword , count;
	
	cout<<"\nEnter your String :";
	cin.get(str , 255 , '\n');
	lenstr=strlen(str);
	cout<<"\nLength of String : "<<lenstr;
	
	getchar();
	cout<<"\nEnter your Word to Remove from its First Occurrence : ";
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
			if(count==1)
			{
				for(k=i ; k<=lenstr-lenword ;  k++)
				{
					str[k]=str[lenword+k];
				}
				lenstr=lenstr-lenword;
			}
			break;
		}	
	}
	if(k<0)
	{
		cout<<"\n Word Not Found ";	
	}
	cout<<"\n length of String "<<strlen(str)<<"\nString: "<<str;
	return 0;
} 