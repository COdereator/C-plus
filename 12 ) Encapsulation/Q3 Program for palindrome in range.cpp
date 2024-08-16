// Q3 Program to Find Plaindrome Number in Range

#include<iostream>
using namespace std;

class my{
	
	private:
		int a , b , d ,r , temp ;
		
		public:
			void getdata();
			void display();
};

void my::getdata()
{
	cout<<"\nEnter the First and Last Limit : ";
	cin>>a>>b;
}

void my::display()
{
	while(a<=b)
	{
		r=0 , temp=a ;
		while(temp!=0)
		{
			d=temp%10;
			r=(r*10)+d;
			temp=temp/10;
		}
		if(r==a)
		{
			cout<<"\n"<<a;
		}
		a++;
	}
}
int main()
{
	my m;
	m.getdata();
	m.display();
}
