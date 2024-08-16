//Q8 Program to count total no of words 

#include<iostream>
using namespace std;

int main()
{                   
	char str[50];
	int i , words=1;
	cout<<"\nEnter Your String with any Case : ";
	cin.get(str , 50 , '\n');
	for(i=0  ; str[i]!='\0' ; i++)
	{
		if(str[i]==' ')
		{
			words++;
		}
	}
	cout<<"\nNumber of Words: "<<words;
	return 0;
}
