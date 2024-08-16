// Program With Files
//Q3 Program to Append File 
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	int i;
	fstream obj;
	obj.open("File1.txt ",ios::app);
	char str[255];
	cout<<"\nEnter Your String : ";
	cin.get(str , 255 , '\n');
	obj.put('\n');
	for(i=0 ; str[i]!='\0' ; i++ )
	{
		obj.put(str[i]);
	}
	obj.close();
	return 0;
}
		


