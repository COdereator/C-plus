/* Q1 Program to create a class name as data. Accept 2 values in the class . create another class name swap
and perform Swapping between data class values in this class */

#include<iostream>
#include<conio.h>
using namespace std;

class data{
	
	protected:
		int a , b ;
		
	public:
		void getdata()
		{
			cout<<"\nEnter Two Numbers: ";
			cin>>a>>b;
		}
};

class swaps : public data
{
	public:
		void opr()
		{
			a=a+b;
			b=a-b;
			a=a-b;
		}
		void display()
		{
			cout<<"\nA= "<<a;
			cout<<"\nB= "<<b;
		}	
};

int main()
{
	swaps s ;
	s.getdata();
	cout<<"\nBefore Swapping :\n";
	s.display();
	cout<<"\nAfter Swapping :\n";
	s.opr();
	s.display();
	return 0;
}

