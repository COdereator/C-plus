// Q6 Program to Perform Additiob between two numbers using same  Friend Functions in two classes

#include<iostream>
using namespace std;
class you ;          // class you decleration 
class my{
	
	private:
		int  a1  ;
		
	public:
		void getdata1();
		friend int add(my , you);                      // Friend Function Decleration 
};

void my::getdata1()
{
	cout<<"\nClass My \nEnter a Numbers : ";
	cin>>a1;
}

class you{
	
	private:
		int  b2 ;
		
	public:                                                   
		void getdata2();
		friend int add(my,you);       
};
void you::getdata2()
{
	cout<<"\nClass You \nEnter a Numbers : ";
	cin>>b2;
}
int add(my m , you y)
{
	return ( m.a1  + y.b2 );
}
int main()
{
	my m ;
	you y;
	m.getdata1();
	y.getdata2();
	cout<<"\n Sum : "<<add(m ,y);
}
