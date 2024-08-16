//Q15 program to check number is palindrome or not 

#include<iostream>
using namespace std ;

int main()
{
	long num,d,r,check;
	cout<<"Enter a  Number: ";
	cin>>num;
	check=num;
	while(num!=0)
	{
		d=num%10;
		r=(r*10)+d;
		num=num/10;
	}
	if(r==check)
	{
		cout<<"\nPalindrome Number";
	}
	else
	{
		cout<<"\nNot Palindrome Number";
	}
	return 0;
}
