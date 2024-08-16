//Q1  Program to find factorial and table of any number

#include<iostream>
using namespace std;
class my{
	
	private:
		int a , ans , i ;
		
	public:
		my(){}
		my(int x);
		void table();
		void factorial();
		void display();
};

my::my(int x)
{
	a=x;
	
}
void my::table()
{
	for(i=1 ; i<=10 ; i++)
	{
		cout<<endl<<a<<" x "<<i<<" = "<<a*i;
	}
}
void my::factorial()
{
	ans=1;
	for(i=1 ; i<=a ; i++)
	{
		ans=ans*i;
	}
}
void my::display()
{
	cout<<"\n\n\n`Factorial is "<<ans;
}
int main()
{
	int a ;
	cout<<"\nEnter a Number: ";
	cin>>a;
	my m;
	m=my(a);
	m.table();
	m.factorial();
	m.display();
	return 0;
}
