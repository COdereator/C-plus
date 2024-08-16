//Q2 Program to print Sum of a Number

#include<iostream>
using namespace std;

class my{
	private:
		int a , s , d ;
		
	public:
		my(int x  );
		my (my &object);
		int sum();
};

my::my(int x )
{
	a=x ;
}
my::my(my &object)
{
	a=object.a;
	//b=object.b;
}
int my::sum()
{
	s=0;
	while(a!=0)
	{
		d=a%10;
		s=s+d;
		a=a/10;
	}
	return s;
}
int main()
{
	my m1(1234);
	my m2=m1;
	
	cout<<"\nSum of 1St Constructor "<<m1.sum()<<endl;
	cout<<"\nSum of Copy Constructor "<<m2.sum();
}
