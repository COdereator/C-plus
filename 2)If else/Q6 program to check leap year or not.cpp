//Q6 program to check leap year or not
#include<iostream>
using namespace std;

int main()
{
	int a;
	cout<<"Enter the Year:";
	cin>>a;
    if(a%4==0 || a%400==0 && a%100==0) 
    {
    	cout<<a <<" is Leap Year";
	}
	else
	{
		cout<<a <<" is Not leap Year";
	}
	return 0;
}
