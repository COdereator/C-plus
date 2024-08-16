//Q1  Program to Perform Addition and Subtraction

#include<iostream>
using namespace std; 

class my{
	private:
		int a , b ;
		
	public:
		void getdata();
		void display();
};

void my::getdata()
{
	cout<<"\nEnter two values: ";
	cin>>a>>b;
}
void my::display()
{
	cout<<"\nAddition : "<<a+b;
}
int main()
{
	my call;
	call.getdata();
	call.display();
	return 0;
}
