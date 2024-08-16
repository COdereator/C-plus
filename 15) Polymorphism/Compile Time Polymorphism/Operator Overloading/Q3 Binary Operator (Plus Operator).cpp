// Operator Overloading 
//Q3 Program to Perform Binary Plus operator (+) Overloading and program is of Simple Addition

#include<iostream>
using namespace std;
class my{
	
	private:
		int a ;
		
	public: 
		my(){}
		my(int x ){
			cout<<"enter no.\n";
			cin>>x;
		}
		void display();
		my operator + (my c );	
			
};
my::my(int x)
{
	a=x;
}

void my::display()
{
	cout<<"\nSum : "<<a;
}

my my:: operator +(my c )
{
	my temp;
	temp.a = a +c.a ;
	return temp;
}
int main()
{	
 	my c1 , c2 , c3 ;
 	c1 = my(45);
 	c2 = my(25);
 	c3 = c1 + c2 ;
	c3.display();
 	return 0;
}
