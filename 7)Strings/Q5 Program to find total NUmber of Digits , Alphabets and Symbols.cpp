//Q5 Program to find total NUmber of Digits , Alphabets and Symbols

#include<iostream>
using namespace std;

int main()
{                   
	char str[50];
	int i , ch=0 , dig=0 , sym=0;
	cout<<"\nEnter Your String with any Case : ";
	cin.get(str , 50 , '\n');
	for(i=0  ; str[i]!='\0' ; i++)
	{
		if((str[i]>='a'  && str[i]<='z')  || (str[i]>='A' && str[i]<='Z'))
		{
			ch++;
		}
		else if(str[i]>='0' && str[i]<='9')
		{
			dig++;
		}
		else  if(str[i]!=' ')
		{
			sym++;
		}
	}
	cout<<"\nNumber of Character: "<<ch;
	cout<<"\nNumber of Digits: "<<dig;
	cout<<"\nNumber of Symbol: "<<sym;
	return 0;
}
