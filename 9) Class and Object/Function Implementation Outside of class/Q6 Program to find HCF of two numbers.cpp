//Q6 Program to find HCF of two numbers

#include<iostream>
using namespace std;

class my{
	
	private:
		int a , b ;
		 
	public:
		void getdata();
		void opr();
		void display();
};
void my::getdata()
{
	cout<<"\nEnter Two Numbers : ";
	cin>>a>>b;
}
void my::opr()
{
	while(a!=b)
	{
		if(a>b)
		{
			a=a-b;
		}
		if(b>a)
		{
			b=b-a;
		}
	}
}
void my::display()
{
	cout<<"\nHCF is "<<a;
}
int main()
{
	my call;
	call.getdata();
	call.opr();
	call.display();
	return 0;
}
