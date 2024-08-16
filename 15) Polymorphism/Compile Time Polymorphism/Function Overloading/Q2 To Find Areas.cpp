// Q2 Program to Find Area

#include<iostream>
using namespace std;

class base{
	
	int l , b , s;
	public:
		void area()          						      // for rectangle 
		{
			cout<<"\nEnter Length and Breadth : ";
			cin>>l>>b;
			cout<<"\nArea of Rectangle : "<<l*b;
		}
		void area( int a , int b )                       // For Triangle 
		{
			cout<<"\nArea of Triangle : "<< 0.5*a*b;
		}
		double area(double x)               			 // For Circle
		{
			return 3.14*x*x;
		}
		
};
int main()
{
	base b;
	b.area();
	b.area(10 , 20);
	cout<<"\nArea of Circle : "<<b.area(14.5);
}
