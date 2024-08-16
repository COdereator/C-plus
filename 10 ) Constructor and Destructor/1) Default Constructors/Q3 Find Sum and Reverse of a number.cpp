//Q3 Program to find Sum and Reverse of a number

#include<iostream>
using namespace std;
class my{
	
	private:
		int num , d ,s , r , temp;
		
	public:
		my();
		void sum();
		void reverse();
		void display();	
		~my();
};

my::my()
{
	cout<<"\nEnter a 4 digit Number : ";
	cin>>num;
	temp=num;
}

void my::sum()
{
	s=0;
	while(num!=0)
	{
		d=num%10;
		s=s+d;
		num=num/10;
	}
}
void my::reverse()
{
	r=0, num=temp ; 
	while(num!=0)
	{
		d=num%10;
		r=(r*10)+d;
		num=num/10;
	}
}

void my::display()
{
	cout<<"\nSum is: "<<s;
	cout<<"\nReverse of Number : "<<r;
}
my::~my()
{
	cout<<"\nDestructor called Automatically ";
}
int main()
{
	my call ;
	call.sum();
	call.reverse() ;
	call.display();
	return 0;
}
