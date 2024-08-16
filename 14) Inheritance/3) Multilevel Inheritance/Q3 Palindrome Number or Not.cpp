/* Q3 Create a Class Name as Data.. Accept one value in this class . Create a another class name Reverse . Find
the Reverse of a Number in this class . Create a class name check , check the number is Palindrome or not */

#include<iostream>
using namespace std;
class data{
	protected :
		int num  , temp;
		
	public :
		void getdata();	
};
void data::getdata()
{
	cout<<"\nEnter a Number : ";
	cin>>num;
	temp = num;
}
/* -----------------------------------------------------------------*/
class reverse : public data {
	
	protected: 
		int d , r  ;
		
	public:
		void check();	
};
void reverse::check()
{
	temp=num;  r=0;
	while(temp!=0)
	{
		d=temp%10;
		r=(r*10)+d;
		temp=temp/10;
	}
	cout<<"\n\nReverse of a Number : "<<r;
}

/* -------------------------------------------------------------------*/
class palindrome : public reverse {
	public:
		void display();
};
void palindrome::display()
{
	if(r==num)
	{
		cout<<"\nNumber is Palindrome Number ";
	}
	else
	{
		cout<<"\nNumber is not Palindrome Number ";
	}
}
/* -----------------------------------------------------------------------*/
int main()
{
	palindrome p;
	p.getdata();
	p.check();
	p.display();
	return 0;
}
