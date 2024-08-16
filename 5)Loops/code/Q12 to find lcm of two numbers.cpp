//Q12 program to find lcm of two numbers

#include<iostream>
using namespace std;

int main()
{
	int a,b,m,lcm;
	cout<<"Enter Two Numbers: ";
	cin>>a>>b;
	for(m=2 ; m<a*b ; m++)
	{
		if(m%a==0 && m%b==0)
		{
			lcm=m;
			break;
		}
	}
	cout<<"\nLcm : "<<lcm;
	return 0;
}
