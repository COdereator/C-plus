//Q20 program to check number is perfect or not

#include<iostream>
using namespace std;

int main()
{
	int  num , s=0 , i ;
	cout<<"\nEnter A Number : ";
	cin>>num;
	for(i=1 ; i<num ; i++ )
	{
		if(num%i==0)
		{
			s=s+i;
		}
	}
	if(s==num)
	{
		cout<<"\nNumber is Perfect Number ";
	}
	else
	{
		cout<<"\nNumber is Not Perfect Number ";
	}
	return 0;
}
