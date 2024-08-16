//Q4 Program to Print table and check even or odd

#include<iostream>
using namespace std;

class my{
	
	private:
		int n , i ;
		
	public:
		my(){}
		my(int x);
		void table();
		void eo();
};

my::my(int x)
{
	n=x;
}
void my::table()
{
	for(i=1 ; i<=10 ; i++)
	{
		cout<<"\n"<<n<<" x "<<i<<" = "<<n*i;
	}
}
void my::eo()
{
	if(n%2==0)
	{
		cout<<"\nNumber is Even";
	}
	else
	{
		cout<<"\nNumber is Odd";
	}
}

int main()
{
	int a ; 
	cout<<"\nEnter a Number : ";
	cin>>a;
	my m;
	m=my(a);
	m.table();
	m.eo();
	
}
