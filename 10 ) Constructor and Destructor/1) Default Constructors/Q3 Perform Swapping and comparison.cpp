//Q3 Program to perform Swapping and comparison between 2 Numbers

#include<iostream>
using namespace std;

class my{
	private:
		int a , b , m , c , d ;
		
	public:
		my();
		void swap();
		void comparison();
};

my::my()
{
	cout<<"\nEnter any Two Numbers: ";
	cin>>a>>b;
	c=a , d=b;
}
void my::comparison()
{
	if(a>b)
	{
		cout<<a<<" is Greater than "<<b;
	}
	else
	{
		cout<<b<<" is Greater than "<<a;
	}
}
void my::swap()
{
	cout<<"\n\nAfter Swapping ";
	m=a , a=b , b=c;
	cout<<"\nA= "<<a;
	cout<<"\nB= "<<b;
}

int main()
{
	my call;
	call.comparison();
	call.swap();
	return 0;
}
