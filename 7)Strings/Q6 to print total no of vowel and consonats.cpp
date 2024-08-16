//Q6 Program to count and print total no of consonants and vowels in user input string 

#include<iostream>
using namespace std;

int main()
{                   
	char str[50];
	int i , vowel=0 , consonant=0 ;
	cout<<"\nEnter Your String with any Case : ";
	cin.get(str , 50 , '\n');
	for(i=0  ; str[i]!='\0' ; i++)
	{
		if((str[i]=='a') || (str[i]=='e') || (str[i]=='i') || (str[i]=='o') || (str[i]=='u') && (str[i]=='A') || (str[i]=='E') || (str[i]=='I') || (str[i]=='O') || (str[i]=='U'))
		{
			vowel++;
		}
		else 
		{
			consonant++;
		}
	}
	cout<<"\nNumber of Vowels: "<<vowel;
	cout<<"\nNumber of Consonants: "<<consonant;
	
	return 0;
}
