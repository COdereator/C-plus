// Operator Overloading 
//Q2 Program to Perform Increment Operator(++) Overloading 

#include<iostream>
using namespace std;
class my{
	private:
		int x ,  y ;
		
	public:
		my(){}
		my(int a , int b )
		{
			x=a ; y=b ;
		}
		void operator++()
		{
			x++ ;
			y++ ;
		}	
		void display()
		{
			cout<<"\nX = "<<x<<"\nY = "<<y;
		}
};
int main()
{
	int a , b ;
	cout<<"\nEnter Two Integers : ";
	cin>>a>>b;
	my m;
	m=my(a , b );
	cout<<"\n\nBefore Operator Overloading :";
	m.display();
     
	 ++m ;          // ++m is absolutely correct  (m++ will not come )n
	cout<<"\n\nAfter Operator Overloading :";
	m.display();
}
