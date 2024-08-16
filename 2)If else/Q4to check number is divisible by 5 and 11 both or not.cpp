//Q4 program  to check number is divisible by 5 and 11 both or not
#include<iostream>
using namespace std;

int main()
{
	int a;
	cout<<"Enter a Number:";
	cin>>a;
	if(a%5==0 || a%11==0)
	{
		cout<<a<<" is divisible by 5 and 11 both";
	}
	else
	{
		cout<<a<<" is not divisible by 5 and 11 both";
	}
	return 0;
}
