// Q3) Program to  Print Sum and Reverse of a Number 

#include<iostream>
using namespace std;

class my{
	
	private:
		int d , s, r , num , temp ;
		
	public:
		void getdata();
		friend int sum(my);
		friend int rev(my);
};

void my::getdata()
{
	cout<<"\nEnter a Number : ";
	cin>> num;
	temp=num;
}
int sum(my m )
{
	m.s=0;
	while(m.temp!=0)
	{
		m.d = m.temp % 10;
		m.s= m.s + m.d ;
		m.temp = m.temp /10;
	}
	return m.s ; 
}
int rev(my m )
{
	m.r=0;
	while(m.num!=0)
	{
		m.d = m.num % 10;
		m.r= (m.r*10) + m.d ;
		m.num = m.num /10;
	}
	return m.r; 
}


int main()
{
	my m ;
	m.getdata();
	cout<<"\nSum : "<<sum(m);
	cout<<"\nReverse : "<<rev(m);
}
