// Q1 Program to Perform Addition between two numbers using Friend class

#include<iostream>
using namespace std;
class you ;  						// Forward  Decleration of 2nd class
class my{
	                  
		friend class you;            // Friend Class Decleration 
//	private:
		int  a , b ;
		
	public:
		void getdata1(); 
};

void my::getdata1()
{
	cout<<"\nClass My \nEnter Two Numbers : ";
	cin>>a>>b;
}

class you{
	
	public:
		void display(my m);
};
void you::display(my m)
{
	cout<<"\nSum : "<< m.a + m.b;
}

int main()
{
	my m ;
	m.getdata1();
	
	you y;
	y.display(m);
}

