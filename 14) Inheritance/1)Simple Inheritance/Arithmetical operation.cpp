/* Q1 Program to create a class name as data. Accept 1 value in the class . Create another class name data1 Accept 1 
value in the class .Create another class name math perform arithmetical operation between data and data 1 class values
 in this math class */


#include<iostream>
using namespace std ;

class data{
	
	protected:
		int a ;
		
	public:
		void getdata();
};


void data::getdata()
{
	cout<<"\nEnter a  Number: ";
	cin>>a;
}

class data1{
	protected:
		int b;
	
	public:
		void getdata1();
};

void data1::getdata1()
{
	cout<<"\nEnter a Number : ";
	cin>>b;
}

class math : public data , public data1
{
	private:
		int c , d , e ,f ;
	public:
		void opr();
		void display();
};

void math::opr()
{
	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
}

void math::display()
{
	cout<<"\nAddition is "<<c;
	cout<<"\nSubtraction is "<<d;
	cout<<"\nMultiplication is "<<e;
	cout<<"\nDivision is "<<f;
}
int main()
{
	math m ;
	m.getdata();
	m.getdata1();
	m.opr();
	m.display();
	return 0;
}

