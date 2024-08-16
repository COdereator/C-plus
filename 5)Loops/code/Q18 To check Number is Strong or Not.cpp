//Q18 program to check Number is Strong or Not

#include<iostream>
using namespace std;

int main()
{
	int num , s , check , i , r=0 ,d;
	cout<<"\nEnter a Number: ";
	cin>>num;
	check=num;
	while(num!=0)
	{
		d=num%10;
		s=1;
		for(i=1 ; i<=d ; i++)
		{
			s=s*i ; 
		}
		r=r+s;
		num=num/10;
	}
	if(r==check)
	{
		cout<<"\nNumber is Strong Number ";
	}
	else
	{
		cout<<"\nNumber is Not Strong Number ";
	}
	return 0;
}
