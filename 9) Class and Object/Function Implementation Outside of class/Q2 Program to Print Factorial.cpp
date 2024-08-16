//Q2 Program to Print Factorial using class and object

#include<iostream>
using namespace std; 

class a{
	private:
		int a , f ,i ;
		
	public:
		void getdata();
		void display();
};

void a::getdata()
{
	cout<<"\nEnter a Number : ";
	cin>>a;
}
void a::display()
{
	f=1;
	for(i=1 ; i<=a ; i++)
	{
		f=f*i;
	}
	cout<<"\nFactorial : "<<f;
}
int main()
{
	a call;
	call.getdata();
	call.display();
	return 0;
}


