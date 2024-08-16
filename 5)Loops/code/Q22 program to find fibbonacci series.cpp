//Q22 program to find fibbonacci series using loop

#include<iostream>
using namespace std;

int main()
{
	int f0=0 , num , f1=1 , fib , count=1;
	cout<<"\nEnter Number of Elements: ";
	cin>>num;
	cout<<"\nFibbonacci Series : ";
	while(count<=num)
	{
		fib=f0+f1;
		cout<<f0<<"  ";//<<f1<<"  "<<fib;
		f0=f1;
		f1=fib;
		count++;
	}
	return 0;
}
