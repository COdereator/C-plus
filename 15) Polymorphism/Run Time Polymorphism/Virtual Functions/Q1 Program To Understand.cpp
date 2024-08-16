// Virtual Function  

//Q1 Program to Understand

#include<iostream>
using namespace std;

class A					////// Base Class 
{
	
	public:
	 void input ()
		{
			cout<<"\nInput Function of Base Class ";
		}
		virtual void display()
		{
			cout<<"\nDisplay Function  Of Base Class ";
		}
};

//=============================================================
class B : public A			//// Derived Class 
{
	
	public:
		void input() 
		{
			cout<<"\nInput Function of Derived Class ";
		}
	    void display() override
		{
			cout<<"\nDisplay Function  Of Derived Class ";             // Function Override
		}
  		
};


int main()
{
	B obj;  A *ptr ;
	ptr=&obj;
	ptr->input();
	ptr->display();
	return 0;
}
