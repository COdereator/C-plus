//Q12 Program to find Last occurrence (Last index no) of a character in a string 

#include<iostream>
using namespace std;

int main()
{
	char str[50] , ch ;
	int i , index=-1;
	cout<<"\nEnter your String: ";
	cin.get(str , 50 , '\n');
	cout<<"\nEnter your Character: ";
	cin>>ch;
	for(i=0 ; str[i]!='\0' ; i++)
	{
		if(str[i]==ch)
		{
			index=i;
		}
	}
	if(index>=0)
	{
		cout<<"\nLast occurrence of character '"<<ch<<" ' is at index value "<<index+1;
	}
	else
	{
		cout<<"\nFirst occurrence of character '"<<ch<<" ' not Found";
	}
	return 0;
}
