/* Q1 Program to create a class name as data. Accept 2 value in the class . Create another class name math 
perform arithmetical operation in this class . Create a Class name result and print the opeation values */

#include<iostream>
using namespace std ;

class data{
	
	protected:
		int a , b ;
		
	public:
		void getdata();
};


void data::getdata()
{
	cout<<"\nEnter two Numbers: ";
	cin>>a>>b;
}

class math : public data 
{
	protected:
		int c , d , e ,f ;
	public:
		void opr();
};

void math::opr()
{
	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
}

class result : public math
{
	public:
		void display();
};
void result ::display()
{
	cout<<"\nAddition is "<<c;
	cout<<"\nSubtraction is "<<d;
	cout<<"\nMultiplication is "<<e;
	cout<<"\nDivision is "<<f;
}
int main()
{
	result m ;
	m.getdata();
	m.opr();
	m.display();
	return 0;
}

