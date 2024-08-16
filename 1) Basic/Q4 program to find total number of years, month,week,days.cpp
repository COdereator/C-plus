//Q4 program to find total number of years, month,week,days from the input number

#include<iostream>
using namespace std;

int main()
{
	int number,days,month,year,a;
	cout<<"Enter any Number:";
	cin>>number;
	year=number/365;
	a=number%365;
	cout<<"\nNumber of Years:"<<year;
	month=a/30;
	days=a%30;
	cout<<"\nNumber of Months:"<<month;
	cout<<"\nNumber of Days:"<<days;
	return 0;
}

