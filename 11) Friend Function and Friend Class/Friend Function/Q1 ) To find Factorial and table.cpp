// Q1 Program to use friend Function 
// Q1 Program to Find  Factorial and Print Table of any Number 

#include<iostream>
using namespace std;

class my{
	private:
		int num , f , i ;
		
	public:
		my();     					// Constructor 
		void fac();
		friend void table(my);	 // Friend Function 
};

my::my()
{
	cout<<"\nEnter a Number : ";
	cin>>num;
}
void my::fac()
{
	f=1;
	for(i=1 ; i<=num ; i++)
	{
		f=f*i;
	}
	cout<<"\n Factorial : "<<f;
}
void table(my m)
{
	cout<<"\n\nTable of "<<m.num<<": "<<endl;
	for(m.i=1 ; m.i<=10 ; m.i++)
	{
		cout<<"\n"<<m.num * m.i;
	}
}

int main()
{
	my m;
	m.fac();
	table(m);
	return 0;
}
