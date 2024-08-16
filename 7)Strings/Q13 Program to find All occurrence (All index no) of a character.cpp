//Q13 Program to find All occurrence (All index no) of a character in a string 

#include<iostream>
using namespace std;

int main()
{
	char str[50] , ch  ;
	int i , index=-1 , count=0 ;
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
		if(index!=-1)
		{
		 	cout<<"At Index Value: "<<index+1<<endl;
		 	count++;
		}
		index=-1;
	}
	if(count==0)
	{
		cout<<"\nCharacter is Not Available in String ";
	}
	else
	{
		cout<<"No of Times: "<<count;
	}
	return 0;
}
