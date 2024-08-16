// Operator Overloading 
//Q1 Program to Perform Unary Operator(-)Overloading 

#include<iostream>
using namespace std;
class my{
	private:
		int x ,  y , z;
	
	public:
		my(int a , int b , int c)
		{
			x=a ; y=b ; z=c;
		}
		void operator -()
		{
			x=-x ; 
			y=-y ; 
			z=-z;
		}	
		void display()
		{
			cout<<"\nX = "<<x<<"\nY = "<<y<<"\nZ = "<<z;
		}
};
int main()
{
	int a , b , c;
	cout<<"\nEnter three Integers : ";
	cin>>a>>b>>c;
	my m(a , b , c);
	m.display();
	-m;
	cout<<"\n\nAfter Operator Overloading :";
	m.display();
}
