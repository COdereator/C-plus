//Q11 Program to find Hcf of a number using loop

#include<iostream>
using namespace std;

int main()
{
	int a,b,i,h;
	cout<<"Enter two Numbers: ";
	cin>>a>>b;
//	//method 1
//	while(a!=b)
//	{
//		if(a>b)
//		{
//			a=a-b;
//		}
//		if(a<b)
//		{
//			b=b-a;
//		}
//	}
//	cout<<"\nHCF: "<<h;
//	method 2

	for(i=1 ; i<=a || i<=b ; i++)
	{
		if(a%i==0 && b%i==0)
		{
			h=i;
		}
   }
	cout<<"\nHCF: "<<h;
	return 0;
}
