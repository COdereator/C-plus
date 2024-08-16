// Q4 Program to Perform Comparison and Find Gcd of Two numbers

#include<iostream>
using namespace std;

class my{
	private:
		int a , b ;
		
	public:
		void getdata();
		friend void com(my );
		friend int gcd(my );	
};

void my::getdata()
{
	cout<<"\nEnter two Numbers : ";
	cin>>a>>b;
}
void com(my m)
{
	if( m.a > m.b)
	{
		cout<<m.a<<" is greater than "<<m.b;
	}
	else
	{
		cout<<m.b<<" is greater than "<<m.a;
	}
}
int gcd(my m)
{
	while(m.a != m.b)
	{
		if(m.a > m.b)
		{
			m.a =m.a - m.b;
		}
		if(m.b > m.a)
		{
			m.b = m.b - m.a ;
		}
	}
	return m.a ;
}

int main()
{
	my m;
	m.getdata();
	com(m);
	cout<<"\n G.C.D = "<<gcd(m);
	return 0;
}
