//Q23 program to print ascii code of alphabets

#include<iostream>
#include<string>
using namespace std;

int main()
{
	int a ,b ;
	cout<<"Enter the First  Limit: ";
	cin>>a;
	getchar();
	cout<<"Enter the last Limit: ";
	cin>>b;
	cout<<"Ascii Values :\n";
	while(a<=b)
	{
		cout<<char(a)<<" = "<<int(a)<<"\n";
		a++;
	}
}

