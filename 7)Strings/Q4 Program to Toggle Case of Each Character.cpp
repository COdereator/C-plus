//Q4 Program to Toggle Case of Each Character

#include<iostream>
using namespace std;

int main()
{
	char str[50];
	int i ;
	cout<<"\nEnter Your String with any Case : ";
	cin.get(str , 50 , '\n');
	for(i=0  ;  str[i]!='\0' ; i++)
	{
		if(str[i]>='a' && str[i]<='z')
		{
			str[i]=str[i]-32;
		}
		else if(str[i]>='A' && str[i]<='Z')
		{
			str[i]=str[i]+32;
		}
	}
	cout<<"\nToggle Case String : "<<str;
	return 0;
}

