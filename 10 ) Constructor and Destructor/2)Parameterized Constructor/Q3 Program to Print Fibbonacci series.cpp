//Q3 Program to Print Fibbonacci series

#include<iostream>
using namespace std;
class my{
	
	private:
		int f0 , f1 , fib ;
		
	public:
		my(){}
		my(int x , int y);
		void change();
		void print();
};

my::my(int x , int y)
{
	f0=x , f1=y ;
	cout<<" "<<f0<<" "<<f1<<" ";
}
void my::print()
{
	fib=f0+f1;
	cout<<fib<<" ";
}
void my::change()
{
	f0=f1 , f1=fib;
}
int main()
{
	int n , count=1; 
	cout<<"\nEnter Number of Terms : ";
	cin>>n;
	my m;
	m=my(0,1);
	while(count<=n-2)
	{
		m.print();
		m.change();
		count++;
	}
}
