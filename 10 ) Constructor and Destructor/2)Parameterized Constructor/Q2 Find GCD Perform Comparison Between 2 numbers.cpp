//Q2 Program to find GCD and Perform Comparison Between 2 numbers

#include<iostream>
using namespace std;
class my{
	
	private:
		int a , b , hcf;
		
	public:
		my(){}
		my(int x , int y);
		void compare();
		void gcd();
		void display();	
};

my::my(int x , int y)
{
	a=x , b=y ;
}
void my::compare()
{
	if(a>b)
	{
		cout<<a<<" is Maximum \n";
	}
	else
	{
		cout<<"\n"<<b<<" is Maximum \n";
	}
}

void my::gcd()
{
	while(a!=b)
	{
		if(a>b){
			a=a-b;
		}
		if(b>a){
			b=b-a;
		}
	}
}

void my::display()
{
	cout<<"\nGCD is "<<a;
}
int main()
{
	int a , b ;
	cout<<"\nEnter Two Numbers : ";
	cin>>a>>b;
	my m ;
	m=my(a,b);
	m.compare();
	m.gcd();
	m.display();
}
