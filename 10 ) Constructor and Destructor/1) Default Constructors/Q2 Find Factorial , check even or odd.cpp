//Q2 Program to find Factorial , check even or odd using default constructor

#include<iostream>
using namespace std;

class my{
	
	private:
		int f , i ,  a ;
		
	public:
		my();
		void eo();
		void fact();
		void display();
};
my::my()
{
	cout<<"\nEnter a Number: ";
	cin>>a;
}
void my::eo()
{
	if(a%2==0)
	{
		cout<<"\nNumber is Even ";
	}
	else
	{
		cout<<"\nNumber is Odd ";
	}
}
void my::fact()
{
	f=1;
	for(i=1 ; i<=a ; i++)
	{
		f=f*i;
	}
}
void my::display()
{
	cout<<"\nFactorial is : "<<f;
}
int main()
{
	my call;
	call.eo();
	call.fact();
	call.display();
	return 0;
}
