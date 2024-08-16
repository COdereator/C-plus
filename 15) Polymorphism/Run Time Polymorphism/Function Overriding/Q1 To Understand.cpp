//Function Overriding
//Q1 Program to Understand


#include<iostream>
using namespace std;

class A					////// Base Class 
{
	
	public:
		void display()
		{
			cout<<"\nThis Function is Of Base Class ";
		}
};

//=============================================================
class B : public A			//// Derived Class 
{
	
	public:
	    void display()
		{
			cout<<"\nThis Function is Of Derived Class ";             // Function Override
		}
  		
};


int main()
{
	B ptr ;
	ptr.display();
	ptr.A::display();
	return 0;
}
