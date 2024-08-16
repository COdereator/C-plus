// Q2 Program to print Fibbonacci Series 

#include<iostream>
using namespace std;

class my{
	
	private:
		int f0 , f1 , fib, count ;
		
	public:
		void getdata();
		friend void print(my);	    // Friend Function 
};

void my::getdata()
{
	f0=0 , f1=1;
	cout<<"\n  "<<f0<<"  "<<f1<<"  ";
}
void print(my c)
{
	c.count = 1 ; 
	while(c.count<=5)
	{
		c.fib=c.f0+c.f1;
		cout<<c.fib<<"  ";
		c.f0=c.f1 , c.f1=c.fib;
		c.count++;
	}
}

int main()
{
	my c;
	c.getdata();
	print(c);
}
